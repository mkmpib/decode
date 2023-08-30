#include <iostream>
using namespace std;

class mohit
{
private:
    int weight;

public:
    char color;

    void setdata(int k)
    {
        weight = k;
    }

    void getdata()
    {
        cout << "the weight of mk is:" << weight << endl;
    }
};

int main()
{

    mohit mk;
    mohit rk;
    // mk.weight = 56;
    mk.setdata(5808);
    mk.getdata();
    rk.color = 'r';
    // cout << "the weight of rohan is : " << mk.weight << endl;
    cout << "the color of rohan is : " << rk.color << endl;
    return 0;
}
