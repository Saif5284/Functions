#include <iostream>
using namespace std;

class student{
	private:
		string name;
		int age;
		public:
		string result;
		int Marks;
		void setData(string name,int age);
		void getData(){
			cout<<"Student Name = "<<name<<endl;
			cout<<"Student Age = "<<age<<endl;
			cout<<"Student Result = "<<result<<endl;
			cout<<"Student Obtained Marks = "<<Marks<<endl;
		}
		
}; 
void student :: setData(string name, int age){
	name=name;
	age=age;
	}
int main() {
	student s1;
	s1.Marks;
	s1.result;
	s1.getData();

	return 0;
}
