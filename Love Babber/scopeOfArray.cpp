#include <iostream>
using namespace std;

int update(int num[], int n)
{

    cout << "Inside the function" << endl;
    // updating the value ;
    num[0] = 44;
    for (int i = 0; i < 3; i++)
    {

        cout << num[i]<<" ";
    }

    cout << endl;

    cout << "Go to the main function" << endl;
}

int main()
{

    int arr[3] = {1, 2, 3};
    update(arr, 3);
    cout << "Printing the main function" << endl;

    for (int i = 0; i < 3; i++)
    {

        cout << arr[i]<<" ";
    }
    cout << endl;
    return 0;
}