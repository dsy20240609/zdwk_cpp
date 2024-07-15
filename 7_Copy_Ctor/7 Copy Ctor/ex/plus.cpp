#include <iostream>
using namespace std;

int operator+(int a,int b) {return a-b;}

int main()
{
  int i=5,j=4;
  cout << i+j;
  
  return 0;  
}
