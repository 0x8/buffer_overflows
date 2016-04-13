#!/bin/sh

gcc -std=c99 -m32 -fno-stack-protector example0.c -o example0;
gcc -std=c99 -m32 -fno-stack-protector example1.c -o example1;
gcc -std=c99 -m32 -fno-stack-protector example2.c -o example2;
gcc -std=c99 -m32 -fno-stack-protector testing0.c -o testing0;
