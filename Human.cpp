#include<iostream>
using namespace std;

//create a custom class
class Human{
	string name;
	int age;
	public: Human(string Name,int Age){
			this.name=Name;
			this.age=Age;
		}
};
int main(){
	Human h("John",25);
	cout<<h.name;
}
