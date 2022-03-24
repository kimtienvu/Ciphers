# Ciphers
Playing around with Caesar Ciphers. User will input a message when prompted that they wish to encrypt.

Once a message is inputted, users will have the choice to choose an encryption key (positive or negative integer) using either "y", "Y", or "n", "N".

If users input "y"/"Y":
  They will be prompted to choose a key (positive or negative integer).

If users input "n"/"N":
  The default encryption key will be used.

### Python Cipher
- Uses the Ascii chart (not limited to only letters)
- Uses STDIN to get user input

### Java Cipher
- Uses the Ascii chart (not limited to only letters)
- Uses STDIN to get user input

### C/C++ Cipher
- To compile, run `make`
- Uses the Ascii chart (not limited to only letters)
- Uses command line arguments:
* 1st is the program name
* 2nd is "y" or "n" (case insensitive) to indicate if the user would like to choose the key
* If the user chooses "y": the third argument must be an integer (only positive integers work. Negative integers will result in the key being 0, hence there will be no shifting)
* If the user chooses "n": No third argument is needed
- After the user runs the program with command line arguments, they will be prompted to enter a message they would like to encrypt.
* If no message is inputted, program ends.
* If message is provided, Users will be shown the original message, the key, and the encrypted message.

### Javascript Cipher
- Uses the Ascii chart (not limited to only letters)
- Use a javascript compiler (online) if you want to run it. 
- function is called "cipher" and it takes in 2 parameters: a message and a key
- Enter the message in the html script when the javascript method is called and enter a key.
