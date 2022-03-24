# Author: Kim Tien Vu

CC=gcc
CFLAGS=-I.

C_Cipher : C_Cipher.o
	$(CC) -o C_Cipher C_Cipher.h C_Cipher.c main.c

C_Cipher.o : C_Cipher.h C_Cipher.c main.c

clean :
	rm *.o