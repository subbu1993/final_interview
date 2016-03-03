#include <iostream>
#include<string>

using namespace std;

void sort(string& s, int left, int right)
{
  int i = left;
  int j = right;
  char pivot = s[(i+j)/2];
  while (i < j)
  {
    while (s[i] < pivot)
          i++;
    while (s[j] > pivot )
          j--;
    if (i <= j)
    {
      char temp = s[i];
      s[i] = s[j];
      s[j] = temp;
      i++;
      j--;
    }

  }
  if (left < j)
    sort(s,left,j);
  if (i < right)
    sort(s,i,right);
}

bool findRep(const string& s)
{
  for(int i = 0; i < s.length() - 1; i++)
  {
    if(s[i] == s[i+1])
      return false;
  }
  return true;
}
int main()
{
  string s = "mangoa";
  sort(s,0,s.length() - 1);
  cout << boolalpha << findRep(s);
}
