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
	cout << "猫に与える食事の量を入力してください。" << endl;
	int x;
	cin >> x;
	Hitpoint -= x;
	cout << "猫は食事をしました。" << endl;
	return Hitpoint;
}

int Cat::naku() {
	cout << "猫は鳴きました。" << name << endl;
	Hitpoint -= 5;
	return Hitpoint;
}

int main() {
	Cat neko("dora");
	neko.eat();
	neko.naku();
	return 0;
}