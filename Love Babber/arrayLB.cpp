#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "printing the array:" << endl;

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl
         << "printing Done" << endl;
}
int main()
{

    cout << " Without using function" << endl;
    int arr[5] = {1, 12, 32, 45, 56};
    cout << "printing the array:" << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;

    cout << "Using the loop" << endl;
    int n = 4;
    for (int i = 0; i < 4; i++)
    {

        cout << arr[i] << endl;
    }
    cout << "printing is done" << endl;

    cout << "Using the funtion" << endl;
    printArray(arr, 5);
    /*int ram[10] = {2};
    printArray(ram, 10);

    int ramsize = sizeof(ram) / sizeof(int);
    cout << "The size of array is:" << ramsize << endl;

    cout << "  Charcter array" << endl;
    char ch[5] = {'M', 'O', 'H', 'I', 'T'};
    cout << ch[4] << endl;

    for (char i = 0; i < 5; i++)
    {

        cout << ch[i];
    }

    cout << endl
         << "Everything is fine";*/
    return 0;
}