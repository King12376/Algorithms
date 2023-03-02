#include <iostream>
#include <string>
using namespace std;


bool Ispalindrome (string s) {
  for (int i = 0; i < s.length() / 2; i++)  //iterate through the word
    if (s[i] != s[s.length() - i -1 ])      //check from left and right if the letters are the same in the word
    return false;
  
  return true;

}

int main () {
  string name;
  cin >> name;;

 
  if (Ispalindrome(name))     //thats if the condition is true
  cout << name  << "    is a palindrome"<<endl;
  else
  cout << name << " is not a palindrome" <<endl;

}