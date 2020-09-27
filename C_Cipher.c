#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define  DEFAULT 17
#define  MAX_ARG 3
#define  NO_KEY_ARG 2
#define  KEY_ARG 2
#define  LENGTH 100
#define  SIZE 2
#define  LITERAL "%s\n"
#define  PROMPT "Insert Message to Encrypt... "
#define  CHOOSE "Would you like to choose the key? (y or n) "
#define  ERROR "No input or invalid input"
#define  Y_CHAR "y"
#define  N_CHAR "n"
#define  BEFORE "Original message: %s\n"
#define  AFTER "Encrypted message: "

//Global variables
int key = 0;

// Method to run the Caesar Cipher
void encrypt(char * userInput, int cipherKey)
{
  char encrypted_text[] = "";
  char letter;
  int ascii;

  // Rotate the characters by the cipherKey
  for(int i = 0; i < strlen(userInput) - 1; i++) {
    
    ascii = (int) userInput[i];
    ascii += cipherKey;
    letter = (char) ascii;
    printf("%c", letter);
  }
}

// Run main program here
int main(int argc, char * argv[])
{
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
      exit(1);
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
      exit(1);
    }
  }
  // Invalid/only program name, exit the program
  else {
    printf(LITERAL, ERROR);
    exit(1);
  }
   
  //Use fgets to get user input message to encrypt
  char message[LENGTH];
       
  printf(PROMPT);
  char * input = fgets(message, LENGTH, stdin);
  
  // Exit the program if no message
  if(input == NULL || strlen(input) == 1) {
    printf(LITERAL, ERROR);
    exit(1);
  }

  //Display before encrypted Message
  printf(BEFORE, input);
  
  printf("The key is: %d\n", key);
    
  //Display encrypted message
  printf(AFTER);
  encrypt(input, key);
  
  return 0;
}

