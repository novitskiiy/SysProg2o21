#!/bin/bash

echo enter the pattern:
read pattern
echo enter the dir:
read dir
find $dir -maxdepth 1 -type f -name "$pattern">result.txt
