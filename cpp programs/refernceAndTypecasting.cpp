 #include <iostream>
 using namespace std;
   int c=78;
   //*********Scope reveluation operator ( :: )
 int main() {
 	int a,b,c;
 	cout<<"Enter the value of a: "<<endl;
 	cin>>a;
 	cout<<"Enter the value of b: "<<endl;
 	cin>>b;
 	c=a+b;
 	cout<<"The sum is: "<<c<<endl;
 	cout<<"The global c is: "<<::c<<endl;
 	
 	////*********Float ,double and lomg double literrals******
 	//<<sizeof(function)
 	 
 	float d=34.4f;
 	long double e=34.4l;
 	cout<<"the size of 34.4 is: "<<sizeof(34.4)<<endl; 
 	cout<<"the size of 34.4f is: "<<sizeof(34.4f)<<endl;
 	cout<<"the size of 34.4F is: "<<sizeof(34.4F)<<endl;
 	cout<<"the size of 34.4l is: "<<sizeof(34.4l)<<endl;
 	cout<<"the size of 34.4L is: "<<sizeof(34.4L)<<endl;
 	cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e<<endl;
 	 cout<<endl<<endl;
 	 
 	 //***************Reference variable**************
 	//rohan das---- Rohu----- monty----dangerous coder
 	int k=56;
 	int & l=k;
 	cout<<k<<endl;
 	cout<<l<<endl;
 	cout<<endl<<endl;
 	
 	
 	//**************** Typing casting **********
 	
 	int m=45;
 	float n=45.56;
 	cout<<"The value of m is: "<<float(n)<<endl;
 	cout<<"The value of m is: "<<(float)n<<endl;
 	
 	cout<<"The value of n is: "<<int(m)<<endl;
 	cout<<"The value of n is: "<<(int)m<<endl;
 	int o=int (n);
 	cout<<"The exprestion is: "<<m+n<<endl;
 	cout<<"The exprestion is: "<<m+int(n)<<endl;
 	cout<<"The exprestion is: "<<m+(int)n<<endl;
 	return 0;
 	}  