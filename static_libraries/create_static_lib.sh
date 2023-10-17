#!/bin/bash
gcc -c *.c
ar rc lliball.a  *.o
ranlib lliball.a
