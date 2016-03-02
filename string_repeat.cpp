#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;


bool noRepeatChars(const string& someString)
{
  unordered_map<char,char> repeatChars;
  for(const char& c : someString)
  {
    if(repeatChars[c])
    {
      cout << "Repeat character found";
      return false;
    }
    repeatChars[c] = c;
  }
  return true;
}


int main()
{
  string s = "subbu";
  cout << boolalpha << noRepeatChars(s) << endl;
}
