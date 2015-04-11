#include <iostream>
#include <string>
using namespace std;

class Cat {
	string name;
	int Hitpoint;
public:
	Cat(string);
	int eat();
	int naku();
};

Cat::Cat(string n) {
	name = n;
	Hitpoint = 10;
}

int Cat::eat() {
	cout << "”L‚É—^‚¦‚éHŽ–‚Ì—Ê‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;
	int x;
	cin >> x;
	Hitpoint -= x;
	cout << "”L‚ÍHŽ–‚ð‚µ‚Ü‚µ‚½B" << endl;
	return Hitpoint;
}

int Cat::naku() {
	cout << "”L‚Í–Â‚«‚Ü‚µ‚½B" << name << endl;
	Hitpoint -= 5;
	return Hitpoint;
}

int main() {
	Cat neko("dora");
	neko.eat();
	neko.naku();
	return 0;
}