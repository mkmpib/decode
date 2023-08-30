#include <iostream>
using namespace std;
//Forward Declartion
class Complex;
class Calculator
{
 public:
   int add(int a,int b){
   	return(a+b);
   	}
   int sumRealComplex(Complex ,Complex );
    int sumImgComplex(Complex,Complex);		
};
class Complex
{
   int a,b;
   //when we need to make friend an individual function than we do this:--
 //  friend int Calculator :: sumRealComplex(Complex ,Complex );	
  // friend int Calculator :: sumImgComplex(Complex ,Complex );
  //when we need many function to make friend then we do:---
  friend class Calculator;	
 public:
 	void setnumber(int n1,int n2)
 	{
 	  a=n1;
 	  b=n2;
 	}
	void print()
	{
		cout<<"Your number is "<<a<<" + "<<b<<"i "<<endl;
		}
};
int Calculator :: sumRealComplex(Complex u1 ,Complex u2 ){
	return(u1.a+u2.a);
	}
int Calculator :: sumImgComplex(Complex u1 ,Complex u2 ){
	return(u1.b+u2.b);
	}	
int main()
{
Complex u1,u2;
u1. setnumber(4,6);
u1.print();
u2.setnumber(2,8);
u2.print();

Calculator cal;
int result= cal. sumRealComplex(u1,u2);
cout<<"The sum of real part of u1 and u2 is "<<result<<endl;
int res= cal. sumImgComplex(u1,u2);
cout<<"The sum of img part of u1 and u2 is "<<res<<"i"<<endl;
		return 0;	
}