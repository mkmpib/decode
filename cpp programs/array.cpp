#include <iostream>
using namespace std;
int main()
{
	// Arrays in C++:----
	int mathmarks[4];
	mathmarks[0] = 65;
	mathmarks[1] = 85;
	mathmarks[2] = 45;
	mathmarks[3] = 89;
	cout << "These are the mathmarks:--" << endl;
	cout << mathmarks[0] << endl;
	cout << mathmarks[1] << endl;
	cout << mathmarks[2] << endl;
	cout << mathmarks[3] << endl;

	// Example 2:–---
	int marks[4] = {55, 89, 78, 23};
	cout << "These are the marks:--- " << endl;
	// We can also change the value of array
	marks[2] = 69;
	cout << marks[0] << endl;
	cout << marks[1] << endl;
	cout << marks[2] << endl;
	cout << marks[3] << endl;

	// Using loops in array:-----

	int prize[5] = {8, 4, 5, 3, 4};
	cout << "These are the prizes:--" << endl;
	// using for loop:---
	for (int i = 0; i < 5; i++)
	{
		cout << prize[i] << endl;
	}
	// Using while loop:---
	int i = 0;
	while (i < 5)
	{
		cout << prize[i] << endl;
		i++;
	}

	int name[3] = {47, 57, 77};
	int *p = name;
	cout << "The value of *p is:-- " << *p << endl;
	cout << "The value of *(p+1) is:-- " << *(p + 1) << endl;
	cout << "The value of *(p+2) is:-- " << *(p + 2) << endl;

	cout << *(p++) << endl;
	cout << *(++p) << endl;
	return 0;
}