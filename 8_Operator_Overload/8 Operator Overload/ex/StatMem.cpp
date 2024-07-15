#include "StatMem.h"
#include <iostream>
using namespace std;

int StatMem::m_h = 0;

int main()
{
  StatMem sm1;
  StatMem sm2;
  sm1.setHeight(12);
  cout << sm2.getHeight() << endl;
  sm1.setWeight(21);
  cout << sm2.getWeight() << endl;
  cout << &sm1 << '\t' << &(sm1.m_w) << '\t' << &(sm1.m_h) << endl;
  cout << &sm2 << '\t' << &(sm2.m_w) << '\t' << &(sm2.m_h) << endl;
  cout << sizeof(StatMem) << endl;
  
  return 0;
}
