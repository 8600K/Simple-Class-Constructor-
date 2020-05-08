#include <iostream>
#include <string>


using namespace std;

//Module 5 homework brought to you by Miles Engelbrecht.  
//Enjoy the Star Wars prequel memes.  
//Using Classes and constructors.  

class HomeWork5 {
	string wordFirst, wordLast;
public:
	HomeWork5(string, string);
	string fullString() { return (wordFirst +  " " + wordLast); }
};


HomeWork5::HomeWork5(string x, string y) {
	wordFirst = x;
	wordLast = y;

}

int main() {
	HomeWork5 initialization("Hello", "There");
	HomeWork5 reaction("General", "Kenobi");
	cout << "Obi-Wan-Kenobi: " << initialization.fullString() << endl;
	cout << "General Greivous: " << reaction.fullString() << endl;
	system("pause");
	return 0;
}