#include <iostream>
#include <string.h>
#include <ctype.h>
/*Program: return if an input is a palinrome or not
  Author:Dieter Voegels
  date: 9/19
 */


using namespace std;
//main function
int main(){
  //initialize
  char in[80];
  char newstr[80];
  char out[80];
  char check;
  int count = 0;
  memset (in, '\0', 80);
  //get input
  cin.get(in, 80);
  //get rid of anything that is not a letter
  for (int i = 0; i < 80; i++){
    check = in[i];
    if (isalpha(check)){
      check = tolower(check);
      newstr[count] = check;
      count++;
    }
  }
  //insert null character
  newstr[count] = '\0';
  out[count] = '\0';
  count--;
  cout << newstr << endl;
  //check if its a palindrome
  for (int i = 0; i < 80; i++){
    if (count >= 0){
      out[i] = newstr[count];
      count--;
    }
  }
  cout << out << endl;
  //return answer
  if(strcmp(newstr,out) == 0){
    cout << "Palindrome" << endl;
  }
  else{
    cout << "Not a palindrome" << endl;
  }

  return 0;
}
