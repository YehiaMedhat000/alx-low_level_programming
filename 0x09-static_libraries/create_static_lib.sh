#!/bin/bash

# The gcc command for getting object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Want to add conditional to handle errors or logical errors of gcc

# The ar command 
ar -rc liball.a *.o

# Make the indexing
ranlib liball.a

# Add conditional to handle errors

# Remove the object (.o) files
rm *.o
