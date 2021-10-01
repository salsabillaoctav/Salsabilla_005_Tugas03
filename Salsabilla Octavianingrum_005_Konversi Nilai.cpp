#include <iostream>
#include <conio.h>
using namespace std;

main() {
	int nilai;
	string grade;

	cout << " Konversi Nilai\n\n";
	cout << " Masukkan Nilai Anda : ";
	cin >> nilai;

	switch(nilai) {
		case 80 ... 100 : grade = "A"; break;
		case 65 ... 79 : grade = "B"; break;
		case 50 ... 64 : grade = "C"; break;
		case 35 ... 49 : grade = "D"; break;
		case 0 ... 34 : grade = "E"; break;
		default:cout << " Nilai yang Anda Masukkan diluar Jangkauan";
	}

	cout << " \n";
	cout << " Grade Anda = " << grade << endl;
	cout << " \n";
	cout << " A = 80-100\n";
	cout << " B = 65-79\n";
	cout << " C = 50-64\n";
	cout << " D = 35-49\n";
	cout << " E = 0-34\n";
	cout << " \n";

	getch();
}
