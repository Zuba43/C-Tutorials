#include<iostream>
using namespace std;
//class Human and ttheir properties
class Human{
	string slogan;
	string origin;
	int height;
	string eyes;
	
	public:
		void Setup();
		void Display();
};
void Human::Setup(){
	cout<<"\nYour slogan: ";
	cin>>slogan;
	
	cout<<"\nHeight: ";
	cin>>height;
	
	cout<<"\nEye size: ";
	cin>>eyes;
	if (slogan=="beautiful" && height>=160){
		origin="Arabia";
	} else if(slogan=="small" && height<=160){
		origin="China or Japan or Phillipines";
	}else if(slogan=="black" && height<=160){
		origin="Africa";
	}else{
		origin="Europe or Asia";
	}
}

void Human:: Display(){
	cout<<"Slogan: \t"<<slogan;
	cout<<"\nOrigin: \t"<<origin;
	cout<<"\nHeight: \t"<<height;
}

int main(){
	Human human;
	human.Setup();
	human.Display();
}
