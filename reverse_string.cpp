#include<iostream>
#include<string>
using namespace std;

int main()
{
  string s = "abcd\0";
  string rev = "\0";
  for(int i = s.length() - 1; i > -1; i-- )
  {
      rev += s[i];
  }
  cout << rev << endl;
}
