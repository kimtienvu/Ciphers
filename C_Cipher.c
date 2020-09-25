#include <stdio.h>

//Global variables
int DEFAULT = 17;
int LENGTH = 100;
int key = 0;

// Method to run the Caesar Cipher
encrypt(string userInput, int cipherKey)
{
    // 
}

// Run main program here
int main()
{
    // 99 characters is plenty for a message right?
    char message[LENGTH]; //NOTE: Need 1 extra character for the end of string!!!!
    
    // Get user input for the message to encrypt
    print("Insert Message to Encrypt...");
    //char input = fgets(message, LENGTH, stdin);
    
    //Prompt if they wish to choose the key or if program should choose default key
    print("Would you like to choose the key? (y/n)");
    //char choice = y;//y/n would be stored here
    
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
    char result = encrypt(input, key);
    
    //Display before encrypted Message
    print(input);
    
    //Display encrypted message
    print(result);

    return 0;
}
