#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;

int main(){
	int a, b, pil;
	float hasil;
	char opr, yn;

	awal :
	cout<<" KALKULATOR "<<endl;
	cout<<"   "<<endl;
	cout<<" 1. penjumlahan"<<endl;
	cout<<" 2. pengurangan"<<endl;
	cout<<" 3. perkalian"<<endl;
	cout<<" 4. pembagian"<<endl;
	cout<<" 5. modulus"<<endl<<endl;
	cout<<" operasi bilangan = "; cin>>pil;
	cout<<" bilangan pertama "; cin>>a;
	cout<<" bilangan kedua "; cin>>b;

	switch(pil){
		case 1 : hasil=a+b;
			opr='+';
			break;
		case 2 : hasil=a-b;
			opr='-';
			break;
		case 3 : hasil=a*b;
			opr='*';
			break;
		case 4 : hasil=a/b;
			opr='/';
			break;
		case 5 : hasil=a%b;
			opr='%';
			break;
		default :
			cout<<"Operasi yang anda masukkan salah"<<endl;
	}

	cout<<"     "<<endl;
	cout<<""<<a<<opr<<b<<" = "<<hasil<<endl;

	getch();
}
