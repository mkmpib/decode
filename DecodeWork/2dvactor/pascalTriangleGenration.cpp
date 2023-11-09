// // givrn an integer numsRows genrate pascal triangle

// #include <bits/stdc++.h>

// using namespace std;
// vector<vector<int>> pascalTriangle(int n)
// {
  
//     vector<vector<int>> pascal(n);
//     for (int i = 0; i < n; i++)
//     {
//         pascal[i].resize(i + 1);// vector ke size ke liye hia hmara agag alag row me vector ka size alg alg hoga

//         // vector<int> ith_vector=pascal[i];
//         // ith_vector.resize(i+1);

//         for (int j = 0; j < i + 1; j++)
//         {
//             if (j == 0 || j == i)
//             {
//                 pascal[i][j] = 1;
//             }
//             else
//             {
//                 pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
//             }
//         }
//     }
//     return pascal;
// }

// int main()
// {
//     int n;
//     cout << "Enter the size: ";
//     cin >> n;

//     vector<vector<int>> ans;
//     // ans = pascalTriangle(n);
//     ans = pascalTriangle(n);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// givrn an integer numsRows genrate pascal triangle

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<vector<int>> pascal(n);
    for (int i = 0; i < n; i++)
    {
         pascal[i].resize(i + 1);  // vector ke size ke liye hia hmara agag alag row me vector ka size alg alg hoga

        // vector<int> ith_vector=pascal[i];
        // ith_vector.resize(i+1);

        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
