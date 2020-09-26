#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Global variables
int DEFAULT = 17;
int LENGTH = 100;
char * LITERAL = "%s\n";
char * PROMPT = "Insert Message to Encrypt... ";
char * CHOOSE = "Would you like to choose the key? (y/n) ";
char * ERROR = "No input/invalid input";
int key = 0;


// Method to run the Caesar Cipher
char * encrypt(char * userInput, int cipherKey)
{
    // 
}

// Run main program here
int main()
{
    // 99 characters is plenty for a message right?
    char message[LENGTH]; //NOTE: Need 1 extra character for the end of string!!!!
    char choice[1];
    
    // Get user input for the message to encrypt
    printf(PROMPT);
    char * input = fgets(message, LENGTH, stdin);
    
    printf(input == NULL);
    
    // Check if input is empty
    /*
    if(input[0] == '\0') {
        
        printf(LITERAL, ERROR);
        exit(0);
    }
    printf(LITERAL, input); 
    
    
    //Prompt if they wish to choose the key or if program should choose default key
    printf(CHOOSE);
    char * y_n = fgets(choice, 1, stdin);
    printf(LITERAL, y_n);

    /*
    //Make sure y/n is not case sensitive! 
    choice = tolower(choice);
    
    //If users would like to choose the key (they put "y")
    if(strcmp(choice, "y") == 0) 
    {
        //Prompt user for number, Make sure that the key is an integer!
        //TODO: I think positive or negative integers are okay, need to test them!!!
        print("Please choose an integer for the key");
        //int chooseKey = fgets()
        //Check if the input is an integer!
        //Store this integer as a key
        
    } 
    else
    {
        print("Default key will be used...");
        key = DEFAULT;
    }
    
    //Run the cipher 
    char * result = encrypt(input, key);
    
    //Display before encrypted Message
    print(input);
    
    //Display encrypted message
    print(result);
*/
    return 0;
}

