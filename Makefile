# Author: Kim Tien Vu

CC=gcc
CFLAGS=-I.

C_Cipher : C_Cipher.o
	$(CC) -o C_Cipher

C_Cipher.o : C_Cipher.h C_Cipher.c

clean :
	rm *.o