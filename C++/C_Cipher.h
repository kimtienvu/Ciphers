/**
 * Filename: C_Cipher.h
 * Author: Kim Tien Vu
 * Description: This file defines the encryption and decryption methods to run the Caesar Cipher 
 * in C++.
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;

#define  DEFAULT 17
#define  MAX_ARG 3
#define  NO_KEY_ARG 2
#define  KEY_ARG 2
#define  LENGTH 100
#define  SIZE 2
#define  LITERAL "%s\n"
#define  PROMPT "Insert Message to Encrypt... "
#define  CHOOSE "Would you like to choose the key? (y or n) "
#define  ERROR "No input or invalid input. If `y` is chosen, please supply an integer greater than 0."
#define  Y_CHAR "y"
#define  N_CHAR "n"
#define  ORIGINAL_MSG "Original message: %s\n"
#define  ENC_MSG "Encrypted message: "
#define  DEC_MSG "Decrypted message: "
#define  KEY_MSG "The key is: %d\n"

/* 
 * This is the encryption method for the Caesar Cipher.
 * Parameters: msg - The message the encrypt
 *             cipherKey - The number of times each letter in the message will shift
 * Return:     string - The encrypted string
 */
std::string encrypt(char * msg, int cipherKey);

/* 
 * This is the decryption method for the Caesar Cipher.
 * Parameters: ciphertext - The ciphertext to decrypt
 *             cipherKey - The number of times each letter in the message will shift
 */
void decrypt(std::string, int cipherKey);