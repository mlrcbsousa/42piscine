/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 02:10:00 by msousa            #+#    #+#             */
/*   Updated: 2021/01/12 01:34:39 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dec_to_hex(int number, char *dest, int size)
{
	int		modulo;
	int		counter;
	char	*buffer;

	modulo = 0;
	counter = 0;
	buffer = dest;
	while (counter < size)
		*(dest + counter++) = '0';
	while (number)
	{
		modulo = number % 16;
		buffer = dest + counter - 1;
		if (modulo < 10)
			*buffer = modulo + 48;
		else
			*buffer = modulo + 87;
		counter--;
		number /= 16;
	}
}

void	print_address(char *str)
{
	// no clue
	write(1, str, 0);
}

void	print_hex(char *str, unsigned int size)
{
	char hex[2];

	if (size)
	{
		dec_to_hex((int)(*str), &hex[0], 2);
		write(1, &hex[0], 2);
		if ((size + 1) % 2 == 0)
			write(1, " ", 1);
		print_hex(++str, --size);
	}
}

void	print_unprintables(char *str, unsigned int size)
{
	if (size > 0)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
			write(1, ".", 1);
		print_unprintables(++str, --size);
	}
}

void	print_line(char *str, unsigned int size)
{
	if (size % 16 == 1)
		print_address(str);
	print_hex(str, size);
	// padding
	print_unprintables(str, size);	
}

void	print_chunked(char *str, unsigned int size)
{
	if (size > 16)
	{
		print_line(str, 16);
		write(1, "\n", 1);
		print_chunked(str + 16, size - 16);
	}
	else
		print_line(str, size);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	print_chunked((char*)(addr), size);
	return (addr);
}

//int main()
//{
//	void	*addr;
//	char string[92] = "Bonjour les ami8ches\n\n\nc est fo u\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol.lol\n ";
//
//	addr = (void*)(&string[0]);
//	ft_print_memory(addr, 92);
//	return (0);
//}
