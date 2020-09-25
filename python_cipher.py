import re
import sys

# Caeser Cipher in Python!
# Parameters: message - the string to encrypt
#             rotation - How many turns to change each character
def encrypt(message, rotation):
  
  encrypted_message = ""
  
  # Get each individual character and add the rotation
  for el in message:
    index = ord(el) + rotation
    encrypted_message = encrypted_message + chr(index)
    
  return encrypted_message
   
# Display message to Users to start program
print("Instructions: Insert message to encrypt when prompted")
original = input("Insert message to encrypt...")

# Ask if User wants to use their own keys
print("Would you like to use your own key? (y/n)")
choice = input("Enter y/n...")
choice = choice.lower()

# If user chooses their own key, set up new key, otherwise default key is 17
if choice == "y":

  print("Please choose an integer as the key")
  choose_key = input("Enter integer here...")
  # Check for only valid integers including negative sign
  if bool(re.match('^[-1234567890]+$', choose_key)):
      key = choose_key
  else:
      print("You have to choose a whole number!")
      sys.exit()
elif choice == "n":
    key = 3 # Default key
    
result = encrypt(original,int(key))

# Display original message
print("Original Message: " + original + "\n")

# Display encrypted message
print("Encrypted message: " + result)

# Tests
test1 = "Hello World!"
key1 = 12

test2 = "Goodbye..."
key2 = -5

test3 = "$%^&*|></?"
key3 = 1

test4 = "hi"
key4 = -1

print(encrypt(test1, key1) == "Tqxx{,c{~xp-") # Should return true
print(encrypt(test2, key2) == "Bjj_]t`)))") # Should return true
print(encrypt(test3, key3) == "%&_'+}?=0@") # Should return true
print(encrypt(test4, key4) == "gh") # Should return true

print(encrypt(test4, key4) == "ij") # Should return false