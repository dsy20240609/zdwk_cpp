#ifndef _STAT_FUN_
#define _STAT_FUN_

#include <iostream>
using namespace std;

class StatFun {
public:
  StatFun():i(1) {};
  void cf() { i = j+12; };
  static void sf(); 
  void print() { cout <<i <<'\t' <<j <<endl; }
private:
  int i;
  static int j;
};

#endif
