# Author: Kim Tien Vu

CC=g++
CFLAGS=-std=c++11 -g

C_Cipher : C_Cipher.o
	$(CC) $(CFlags) -o C_Cipher C_Cipher.h C_Cipher.cpp main.cpp

C_Cipher.o : C_Cipher.h C_Cipher.cpp main.cpp

clean :
	rm *.o