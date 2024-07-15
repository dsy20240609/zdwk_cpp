#include "StatFun.h"
#include <iostream>
using namespace std;

int StatFun::j = 2;

void StatFun::sf() 
{ 
  j+=13; 
}

int main()
{
  StatFun::sf();
  StatFun o;
  o.cf();
  o.print();
  
  return 0;
}
