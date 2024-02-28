// maze path right and down onle go

#include <bits/stdc++.h>
using namespace std;
int maze(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec)
        return 0;
    if (sr == er || sc == ec)
        return 1;
    int rightways = maze(sr, sc + 1, er, ec);
    int downways = maze(sr + 1, sc, er, ec);
    return rightways + downways;
}
void printPath(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    { // destination reched
        cout << s << endl;
        return;
    }
    printPath(sr, sc + 1, er, ec, s + 'R');
    printPath(sr + 1, sc, er, ec, s + 'D');
}
//takinng twoo paramiter for print
void printPath(int sr, int sc,  string s)
{
    if (sr <1 || sc <1)
        return;
    if (sr == 1 && sc == 1)
    { // destination reched
        cout << s << endl;
        return;
    }
    printPath(sr, sc - 1, s + 'R');
    printPath(sr -1, sc, s + 'D');
}
// taking two paramiters only
int maze2(int row, int col)
{
    if (row < 1 || col <1)
        return 0;
    if (row == 1 && col == 1)
        return 1;
    int rightways = maze2(row, col - 1);
    int downways = maze2(row - 1, col);
    return rightways + downways;
}

int main()
{//2 paramiters
    cout << maze2( 3, 3) << " Ways ";
    cout << endl;
    cout << endl<< "Ways in form of" << endl;
    printPath( 3, 3, "");
    // using four paramiters
    cout<< maze(1, 1, 3,3) << " Ways ";
    cout << endl << "Ways in form of" << endl;
    printPath(1, 1, 3,3, "");
}