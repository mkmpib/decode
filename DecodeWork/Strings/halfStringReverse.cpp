// input astring of  even lenth and return 1st half of it

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "MohitKumar";
    cout<<"string before first reverse: "<<s<<endl;
    int n=s.length();
    reverse(s.begin(),s.begin()+n/2);
  
    cout<<"string after first reverse: "<<s<<endl;

// reverse from positin 2 to 5 
cout<<endl<<endl<<endl;
string st="rakasingh";
 cout<<"string before first reverse: "<<st<<endl;
reverse(st.begin()+1,st.begin()+5);  // indexing 0 se suru hogi
 cout<<"string after first reverse: "<<st<<endl;
    return 0;
}