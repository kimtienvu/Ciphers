// Method for cipher
function cipher(message, key) {
  
  //Need to check if key is a valid integer
  if(Number.isInteger(key) == false) {
    return;
  }
  
  var letter;
  var ascii;
  var result;
  var encrypted = "";
  
  //Get each character in the message and rotate according to key
  var i;
  for(i = 0; i < message.length; i++) {

    letter = message[i];
    ascii = letter.charCodeAt(0);
    ascii = ascii + key;
    result = String.fromCharCode(ascii);
    encrypted = encrypted + result;
  }
  return encrypted;

}
