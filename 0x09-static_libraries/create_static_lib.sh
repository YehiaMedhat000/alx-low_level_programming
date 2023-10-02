#!/bin/bash

# Get objec files
gcc -c *.c

# Make the static library's archive
ar -rc liball.a *.o

# Make the libray's indexing
ranlib liball.a
