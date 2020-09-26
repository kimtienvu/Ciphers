import java.util.*;  
import java.util.Scanner;

/* Runs a Caesar Cipher to encrypt a message
 * Private variables: message - holds the message the user wants to encrypt
 *                    choice - y/n. Allows the user to choose a key
 *                    key - The rotation to encrypt each charactacter 
 */
public class Cipher{
    
  // Different Output and constants
  private static final String ENTER_MESSAGE = "Enter message to encrypt";
  private static final String ENTER_KEY = "Would you like to specify the key? (y/n)";
  private static final String NO_INPUT = "No input/invalid input, exiting the program...";
  private static final String INVALID_INPUT = "Please enter only 'y' or 'n', exiting the program...";
  private static final String Y_N_REGEX = "[N-Yn-y]{1}";
  private static final String WHITESPACE = "\\s+";
  private static final String Y_CHAR = "y";
  private static final String NULL_CHAR = "";
  private static final String CHOOSE_INT = "Choose an integer for the key!";
  private static final String ORIGINAL = "Original Message: ";
  private static final String AFTER = "After Encrypting: ";
  private static final int DEFAULT_KEY = 3;
  
  // Variables to hold the message and key
  private static String message = null;
  private static String choice = null;
  private static int key;

  // Main method to parse user input and run the encryption program
  public static void main(String []args){
        
    // Create the Scanner Object + read user input
    Scanner scan = new Scanner(System.in);
    System.out.println(ENTER_MESSAGE);
        
    // Try to read user input for message, if there is none, exit the program
    try {
      message = scan.nextLine();
    }
    catch(NoSuchElementException e) {
      System.out.println(NO_INPUT);
      System.exit(1); // Exit the program 
    }
    
    System.out.println(ENTER_KEY);
    // Try to read user input, if there is none, exit the program
    try {
      choice = scan.nextLine();
    }
    catch(NoSuchElementException e) {
      System.out.println(NO_INPUT);
      System.exit(1); // Exit the program 
    }
    
    // Ensures user enters "y" or "n"
    if(choice.matches(Y_N_REGEX)) {
      
      // If user inputs "y", allow the user to choose a key
      // Removes whitespace and ignores case
      if(choice.replaceAll(WHITESPACE, NULL_CHAR).equalsIgnoreCase(Y_CHAR)) {
        
        System.out.println(CHOOSE_INT);
        // If no valid key, exit program
        try {
          key = scan.nextInt();
        }
        catch(NoSuchElementException e) {
          System.out.println(NO_INPUT);
          System.exit(1); // Exit the program 
        }
      } 
      // Otherwise, use default key
      else {
        key = DEFAULT_KEY;
      }
    }
    else {
      System.out.println(INVALID_INPUT);
      System.exit(1); // Exit the program
    }
        
    System.out.println(ORIGINAL + message);
    System.out.println(choice);
    System.out.println(key);
    System.out.println(AFTER + encrypt(message, key));
    scan.close();
 }
     
  /* Method to encrypt the message
   * Parameters: message - the string to encrypt
   *             key - the number of rotations for each character
   * Return Value: An encrypted string
   */
  private static String encrypt(String message, int key) {
      
    String temp_m = message;
    String result = "";
    int temp_k = key;
    
    // Rotate all the characters of the message given the key
    for(int i = 0; i < temp_m.length(); i++) {
        
      char index = temp_m.charAt(i); 
      int rotation = (int) index; // Casting char as int converts to ASCII value
      rotation += temp_k;
      result += (char) rotation; // Casting as char converts back to letter
    }
    return result;
         
  }
}