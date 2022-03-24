/**
 * Filename: C_Cipher.cpp
 * Author: Kim Tien Vu
 * Description: This file defines the encryption and decryption methods to run the Caesar Cipher 
 * in C++.
 */

#include "C_Cipher.h"

/* 
 * This is the encryption method for the Caesar Cipher.
 * Parameters: msg - The message the encrypt
 *             cipherKey - The number of times each letter in the message will shift
 */
std::string encrypt(char * msg, int cipherKey)
{
  int size = strlen(msg) - 1;
  string enc_msg = "";
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
    enc_msg += letter;
  }
  printf("\n");
  return enc_msg;
}

/* 
 * This is the decryption method for the Caesar Cipher.
 * Parameters: ciphertext - The ciphertext to decrypt
 *             cipherKey - The number of times each letter in the message will shift
 */
void decrypt(std::string ciphertext, int cipherKey) 
{

  char letter;
  int ascii;

  // Rotate the characters by the cipherKey
  int i = 0;
  for(i; i < ciphertext.size(); i++) {
    
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