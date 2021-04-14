#!/bin/sh
find . -type f -name "*.sh" | sed 's:.*/\(.*\)\.sh$:\1:'
