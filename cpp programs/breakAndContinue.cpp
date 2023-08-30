#include <iostream>
using namespace std;
int main()
{
	/*
	  Break statement in c++:----*/

	for (int i = 0; i <= 20; i++)
	{
		// cout<<i<<endl;
		if (i == 5)
		{
			break;
		} // If we use cout stetement before the break opretion then it take 5 in output but if we place it after the break statement it cant take 5
		cout << i << endl;
	}
	return 0;
}
