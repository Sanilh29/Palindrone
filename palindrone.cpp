//Sanil Hattangadi, 9/27/16, the code works to check if a phrase or word is a palindrone
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char input[81]; //input can be 80 characters max, which sets the output and reverse to 80 characters max
  char output [81]; 
  char reverse [81];
  int x = 0; //amount of characters in string
  cout << "Welcome to Palindrone. Please enter a sentence or a word." << endl;
  cout << "I will tell you if it's a palindrone." << endl;
  cin.get(input,81); //get the string and save 81 spaces for it

  for (int i = 0; i<81;i++) { //go through string (81 times) because 81 characters
    if (input[i] == '\0'){ //if blank space
      i=82;//quit for loop
      output[x] = '\0';//put a space at the end of output
    }
    if (isalpha(input[i])){ //if input is letter
      output[x] = tolower(input[i]);//put it in output string making it to lowercase
      x++;
      }
  }
  for (int i = 0; i < x; i++){//go through letters until youve reached x letters (amount of letters in string)
    reverse[x-i-1] = output[i]; //reverse the string
  } 
  reverse[x+1] = '\0'; //put spae at end

  if (strcmp (output, reverse) !=0){//compare the strings
    cout << "not a palindrone" << endl;
  }
  else {
    cout << "palindrone" << endl;
    }
}
