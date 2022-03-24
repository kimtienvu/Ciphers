/**
 * Filename: C_Cipher.c
 * Author: Kim Tien Vu
 * Description: This file defines the methods to run the Caesar Cipher in C.
 * 
 */

#include "C_Cipher.h"

/* 
 * This is the encryption method for the Caesar Cipher.
 * Parameters: msg - The message the encrypt
 *             cipherKey - The number of times each letter in the message will shift
 */
void encrypt(char * msg, int cipherKey)
{
  int size = strlen(msg) - 1;
  char enc_msg[size];
  char letter;
  int ascii;

  // Rotate the characters by the cipherKey
  int i = 0;
  for(i; i < size; i++) {
    
    // Convert to ascii
    ascii = (int) msg[i];
    ascii += cipherKey;

    // Map ascii char to a letter
    letter = (char) ascii;

    // Print to stdout
    printf("%c", letter);
    enc_msg[i] = letter;
  }
  printf("\n");

  // Display the decrypted message
  printf(DEC_MSG);
  decrypt(enc_msg, cipherKey);
}

/* 
 * This is the decryption method for the Caesar Cipher.
 * Parameters: ciphertext - The ciphertext to decrypt
 *             cipherKey - The number of times each letter in the message will shift
 */
void decrypt(char * ciphertext, int cipherKey) 
{
  char letter;
  int ascii;

  // Rotate the characters by the cipherKey
  int i = 0;
  for(i; i < strlen(ciphertext) - 1; i++) {
    
    // Convert to ascii
    ascii = (int) ciphertext[i];
    ascii -= cipherKey;

    // Map to letter
    letter = (char) ascii;

    // Print to stdout
    printf("%c", letter);
  }
  printf("\n");
  
}