#include <iostream>
using namespace std;
struct Zero {
	int i;
	void f();
};

void Zero::f() {}

int main()
{
  struct Student {
    char name[40];
    int score;
  };
  struct Student1 {
    int score;
    char name[5];
	short sh;
	char c;
  };
  
  cout << "sizeof(int)=" << sizeof(int) <<endl;
  cout << "sizeof(char)=" << sizeof(char) <<endl;
  cout << "sizeof(Student)=" << sizeof(Student) <<endl;
  cout << "sizeof(Student1)=" << sizeof(Student1) <<endl;

	
  
	Zero z;
	cout << sizeof(z) <<endl;
	
  return 0;
}
