#include <iostream>
using namespace std;

class A {
  int i;
  void f() {}
};

class B {
  int i;
  virtual void f() {}
  virtual void g() {}
};

int main() {
  cout << "Class A" << sizeof(A) <<endl;
  cout << "Class B" << sizeof(B) <<endl;
  return 0;
}
