#include <iostream>
using namespace std;
int main()
{

    int arr1[] = {1, 2, 4, 7};
    int arr2[] = {0, 7, 8, 10};
    int row = 3;    // size of first array
    int coulmn = 4; // size of coulmn array
    int i = 0, j = 0, k = 0;
    int merge[row + coulmn]; // result array
    while (i < row && j < coulmn)
    {
        if (arr1[i] < arr2[j])
        {
            merge[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            merge[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < row)
    {
        merge[k] = arr1[i];
        i++;
        k++;
    }
    while (i < coulmn)
    {
        merge[k] = arr2[j];
        j++;
        k++;
    }
    // printing of array
    cout << "The merge of array in incresing order is: " << endl;
    for (int i = 0; i < row + coulmn; i++)
    {
        cout << merge[i] << " ";
    }
    cout << endl;
    return 0;
}