#include <iostream>

using namespace std;



int main() {
  char input[81];
  char output [81];
  cout << "Welcome to Palindrone. Please enter a sentence or a word." << endl;
  cout << "I will tell you if it's a palindrone." << endl;
  cin.get(input,81);
  
  for (int i = 0; i<81;i++) {
	input [i] = tolower(input[i]);
  }
  cout << input;
  return 0;
}
