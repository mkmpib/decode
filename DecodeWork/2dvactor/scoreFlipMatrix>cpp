#include <bits/stdc++.h>
using namespace std;
 int matrixScore(vector<vector<int>>& grid) {
        int row=grid.size(); /// simply rows ki value grid me daal rahe h
        int col=grid[0].size();

        // making the first coulmn all 1
       for(int i=0;i<row;i++)
       {
       if(grid[i][0]==0)// flip
       {
           for(int j=0;j<col;j++)
           {
               if(grid[i][j]==0)
                   grid[i][j]=1;
               else
                   grid[i][j]=0;
           }
       }
        }
        // flip the coulman whwre noz>noo
        for(int j=0;j<col;j++)
        {
          int  noz=0;  // number of zero
           int  noo=0;  // number of one 1
            for(int i=0;i<row;i++)
            {
                if(grid[i][j]==0)
                    noz++;
                else
                    noo++;
            }  
            if(noz>noo){
              for(int i=0;i<row;i++)
           {
               if(grid[i][j]==0)
                   grid[i][j]=1;
               else          
                   grid[i][j]=0;             
           }  
        }  
     }
     // binay to decimal karne ke liye
        int sum=0;
        for(int i=0;i<row;i++){
            int x=1;
            for(int j=col-1;j>=0;j--){
                sum+=grid[i][j]*x;
                x*=2;
            }
        }
        return sum;

    }
int main()
{
   vector<vector<int>>v;
    int row;
    cout << "Enter the row number: ";
    cin >> row;
    int coulmn;
    cout << "Enter the coulmn number: ";
    cin >> coulmn;

    int arr[row][coulmn];
    cout << "Enter the element of array: ";
    for (int i = 0; i < row; i++)  // i for row
    {
        for (int j = 0; j < coulmn; j++)  // j foer coulmn
        {
            cin >> arr[i][j];
        }
    }
    return 0;
}
