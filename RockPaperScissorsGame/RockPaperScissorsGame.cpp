#include <iostream>
using namespace std;

int computer() {
	int a;
	a = 1 + rand() % 3;
	return a;
}

int main() {
	int opt; //option
	int v = 0; //number of Victories
	int d = 0; // number of defeats;
	do {
		cout << "Choose:\n1. Rock\n2. Paper\n3. Scissors" << endl;
		cin >> opt;
		system("cls");
		if (opt == 1) {
			switch (computer()) {
			case 1: cout << "Draw" << endl; break;
			case 2: cout << "Defeat" << endl; d++; break;
			case 3: cout << "Victory" << endl; v++; break;
			}
		}
		else if (opt == 2) {
			switch (computer()) {
			case 1: cout << "Win" << endl; v++; break;
			case 2: cout << "Draw" << endl; break;
			case 3: cout << "Defeat" << endl; d++; break;
			}
		}
		else if (opt == 3) {
			switch (computer()) {
			case 1: cout << "Defeat" << endl; d++; break;
			case 2: cout << "Win" << endl; v++; break;
			case 3: cout << "Draw" << endl; break;
			}
		}
	} while (d < 3 && v < 3);

	if (v == 3)
		cout << "Conguragulations You Win!   " << v << "vs" << d << endl;
	else if (d == 3)
		cout << "You Lost :(   " << d << "vs" << v << endl;
}
