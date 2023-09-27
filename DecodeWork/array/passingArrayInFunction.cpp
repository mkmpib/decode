#include <iostream>
using namespace std;
void display(int arr[])  // arr se direct address pass kar rahe hai
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
void change(int arr[])
{
    arr[2] = 89;
}
int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    display(arr);
    change(arr);
    display(arr);
    return 0;
}