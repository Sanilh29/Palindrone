#include <iostream>

using namespace std;



int main() {
  char input[81];
  char output [81];
  char reverse [81];
  int x = 0;
  cout << "Welcome to Palindrone. Please enter a sentence or a word." << endl;
  cout << "I will tell you if it's a palindrone." << endl;
  cin.get(input,81);

  for (int i = 0; i<81;i++) {
    if (input[i] == '\0'){
      i=82;
      output[x] = '\0';
    }
    if (isalpha(input[i])){
      output[x] = tolower(input[i]);
      x++;
      }
  }
  /*for (int i = 0; i < 81; i++){ //or is it i<x
    output [i] = reverse[x-i];
  } doesnt work
  */
  
  cout << output << endl;
  return 0;
}
