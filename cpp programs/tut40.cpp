#include <iostream>
using namespace std;

class Student
{
   protected:
     int roll_number;
   public:
     void set_roll_number(int r) {
        roll_number = r;	
     }  	
	 void get_roll_number(){
	     cout<<"The Roll Number is : "<<roll_number<<endl;	
	 }
};
class Exam : public Student
{
  protected:
    float math;
    float physics;
  public:
     void set_marks(float m , float p){
       	math = m;
       	physics = p;
      }
      void get_marks(){
       	cout<<"The obtained math marks are: "<<math<<endl;
       	cout<<"The obtained physics marks are: "<<physics<<endl;
      }
       	
};

class Result : public Exam
{
     float percentage;
 public:
      void display_result(){
         get_roll_number();
         get_marks(); 	
         cout<<"The percentage of maths and physics marks are: "<<(math+physics)/2<<"%"<<endl; 	
       }
};
int main(){
	Result mohit;
	mohit.set_roll_number(465);
	mohit.set_marks(94.57,98.58);
	mohit.display_result();
     return 0;	
}