#include <iostream>
#include<string>
using namespace std;

int main()
{
  string s = "hello world";
  string final = "";
  for(char c : s)
  {
    if (c == ' ')
      final += "%20";
    else
      final += c;
  }
  cout << final << endl;
}
