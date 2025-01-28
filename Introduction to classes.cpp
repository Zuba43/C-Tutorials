#include<iostream>
using namespace std;
//class Human and ttheir properties
//demo example on animals

class Animal{
	public:
		void Birth(){
			cout<<"\nAll animals produce their young ones alive!...";
		}
		void Live(){
			cout<<"\nAll animals are warm blooded!...";
		}
};
class Camel:public Animal{
	public:
		void Survive(){
			cout<<"\na camel can survive up to 30 days of stervation\nIt has strong cells and tissues that help this functionality.";
		}
};
class Man:public Animal{
	public:
		void Iq(){
			cout<<"\nMan has high IQ compared to all other animals!...\n\tI love that";
		}
};

//other class
//though meaningless

class Unknown:public Man, public Camel{
	public:
		void Say(){
			cout<"I can now reason like a man and stay longer than a camel. I studied about them";
		}
};

int main(){
	Animal anime;
	Camel camel;
	Man man;
	cout<<"Animal object";
	anime.Birth();
	anime.Live();
	
	//object for class Camel
	cout<<"\\n\nCamel object";
	camel.Birth();
	camel.Live();
	camel.Survive();
	
	//man
	cout<<"\n\nMan object";
	man.Birth();
	man.Live();
	man.Iq();
	
	//Multiple inheritance object
	Unknown un;
	cout<<"\n======================================\n";
	cout<<"Multiple inretiance demonstrated";
	un.Say();
	un.Iq();
	un.Survive();
}
