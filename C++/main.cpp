/**
 * Filename: main.cpp
 * Author: Kim Tien Vu
 * Description: This file defines the program to run a Caesar Cipher in C. Compile these files 
 * by using the Makefile (Run `make` on the command line to compile). To run this 
 * program, type the executable name `./C_Cipher` followed by either a `y` or `n` to indicate you 
 * wish to choose your own key. If `y` is selected, you must also supply an integer so the program 
 * may run using your key, otherwise it will use a default key.
 * 
 */

#include "C_Cipher.h"

// Run main program here
int main(int argc, char * argv[])
{

  int key = 0;
  
  // Checks the number of arguments (max is 3)
  // Name of program, y (if user wants to choose a key), key
  if(argc == MAX_ARG) {
    
    // Check if 2nd argument is not numeric (y)
    char check_letter = (char) tolower(*argv[1]);
    if(isdigit(*argv[1]) == 0  && strncmp(&check_letter, Y_CHAR, 1) == 0) {
        
      // Check if user inputted an integer for the key (not other invalid argument)
      if(isdigit(*argv[2]) != 0) {
        key = atoi(argv[2]);
      }
    } 
    else {
      printf(LITERAL, ERROR);
      return EXIT_FAILURE;
    }
  } 
  // Name of program, n (user does not want to choose a key) 
  else if (argc == NO_KEY_ARG) {
      
    // Check if user inputted n and use the default key
    char check_letter = (char) tolower(*argv[1]);
    if(isdigit(*argv[1]) == 0 && strncmp(&check_letter, N_CHAR, 1) == 0) {
      key = DEFAULT;
    } 
    else {
      printf(LITERAL, ERROR);
      return EXIT_FAILURE;
    }
  }
  // Invalid/only program name, exit the program
  else {
    printf(LITERAL, ERROR);
    return EXIT_FAILURE;
  }
  
  //Use fgets to get user input message to encrypt
  char message[LENGTH];

  printf(PROMPT);
  char * input = fgets(message, LENGTH, stdin);
  
  // Exit the program if no message
  if(input == NULL || strlen(input) == 1) {
    printf(LITERAL, ERROR);
    return EXIT_FAILURE;
  }

  //Display the original message
  printf(ORIGINAL_MSG, input);
  
  // Display the number of shifts used for the Caesar Cipher
  printf(KEY_MSG, key);
    
  //Display the encrypted message
  printf(ENC_MSG);
  std::string enc_msg = encrypt(input, key);

  // Display the decrypted message
  printf(DEC_MSG);
  decrypt(enc_msg, key);
  
  return EXIT_SUCCESS;
}