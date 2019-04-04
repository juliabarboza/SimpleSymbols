#include <iostream>
#include <string>
using namespace std;

string SimpleSymbols(string str) { 

  // code goes here
  bool p;
  for(int i = 1; i< str.length()-1;i++)
  {
      if(isalpha(str[i]))
      {
          if(str[i-1]=='+' && str[i+1] =='+')
          {
              p = true;
          }
          if(str[i-1]!='+' && str[i+1] !='+')
          {
             p = false;;
          }
          
      }
  }
  if (p == true)
  {
      str = "true";
  }
  if (p == false)
  {
      str = "false";
  }
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << SimpleSymbols(gets(stdin));
  return 0;
    
}
