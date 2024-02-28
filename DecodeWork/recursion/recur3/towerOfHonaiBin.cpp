#include<iostream>
using namespace std;
void honai(int n,char source,char helper,char desti){
    if(n==0)
        return ;
    honai(n - 1, source, desti, helper);
    cout << "move disk from " << source << "-->" << desti << endl;
    honai(n - 1, helper, source, desti);
}


int main(){
    int n = 3;
    honai(n, 'a', 'b', 'c');
    return 0;
}