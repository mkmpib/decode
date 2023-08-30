
#include <iostream>
using namespace std;
class student {
 public:
 char name[50];
 int roll;
 char grade;
} s[3];
int main() {
 cout << "Enter information of students: " << endl;
 // storing information
 for(int i = 0; i < 3; ++i)