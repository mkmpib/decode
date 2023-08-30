#include <iostream>
#include <string>
using namespace std;

class binary
{
	private:
	 string s;
	public:
	    void read();
	    void chk_bin(); 
	    void ones_compliment();
	    void display();
	
	};
 void binary :: read(void) 
 {
 	cout<<"Enter the number:- "<<endl;
 	cin>>s;
 	} 
void binary :: chk_bin(void)
{
	for(int i=0; i<s.length(); i++)
	{
		if( s.at(i) !='0' && s.at(i)  !='1' )
		{
			cout<<"This is not binary format "<<endl;
		    exit(0);
		}
	}
}

void binary :: ones_compliment(void)
{
    for(int i=0; i<s.length(); i++)
	{
		if(s.at(i) == '0' )
		{
		   s.at(i) = '1';	
		}
			else
			{
			s.at(i) = '0';
			}
		}
}


void binary :: display(void)
{
	cout<<"Display your binary number:--"<<endl;
	for(int i=0; i<s.length(); i++)
	{
		cout<< s.at(i); 
	}
	cout<<endl;
}
int main(){
	binary b;
	b.read();
	b.chk_bin();
	b.display();
	b.ones_compliment();
	b.display();
	
	return 0;
	}