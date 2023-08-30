#include <iostream>
using namespace std;

class shop 
{
	int itemid[100];
	int itemprize[100];
	int counter;
	public:
	     void initcounter(void) {counter =0;}
	     void setprize(void);
	     void displayprize(void);	
};
void shop :: setprize(void){
   cout<<"Enter id of item no "<<counter+1<<endl;
   cin>>itemid[counter];
   cout<<"Enter prize of your item  "<<counter<<endl;
   cin>>itemprize[counter];
   counter++;
}
void shop :: displayprize(void){
	for(int i=0; i<counter; i++){
		cout<<"The prize of item with id "<<itemid[i]<<" is "<<itemprize[i]<<endl;
		}	
}
int main(){
	shop dukaan;
	dukaan.initcounter();
	dukaan.setprize();
	dukaan.setprize();
	dukaan.setprize();
	dukaan.displayprize();
	return 0;
}
