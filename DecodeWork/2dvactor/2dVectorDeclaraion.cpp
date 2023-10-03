#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  int arr [3][4]; // ager asa vector bnana hai to niche
    vector<vector<int>> v(3, vector<int>(4, 20)); // ab huaa hai 3*4 ka matrix store kiya h

    // 20 agega sabhi element me
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Total nuber of rows in vector:" << v.size() << endl;
    cout << "Total nuber of coulmn in vector:" << v[0].size() << endl; // 2d vector me jo vector store hsai unka size btata ahai

    return 0;
}