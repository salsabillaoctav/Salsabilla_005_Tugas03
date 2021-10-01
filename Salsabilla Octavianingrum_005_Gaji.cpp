#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

main() {
	string nama, nik;
	int jenis_kelamin, status_pernikahan, kendaraan;
	long gaji_pokok, uang_makan, tunjangan, transport, gaji_kotor, pajak, gaji_bersih;

	cout << " Menghitung Gaji Karyawan\n\n";
	cout << " Nama : ";
	getline(cin, nama);
	cout << " NIK  : ";
	getline(cin, nik);
	cout << "\n         Jenis Kelamin\n";
	cout << " (Perempuan = 0 dan Laki-laki = 1) : ";
	cin >> jenis_kelamin;
	cout << "\n     Status Pernikahan\n";
	cout << " (Single = 0 dan Menikah = 1) : ";
	cin >> status_pernikahan;
	cout << "\n       Kendaraan\n";
	cout << " (Motor = 0 dan Mobil = 1) : ";
	cin >> kendaraan;
	cout << "\n Gaji Pokok : ";
	cin >> gaji_pokok;
	cout << " Uang Makan : ";
	cin >> uang_makan;
	cout << endl;

	// Tunjangan
	if(jenis_kelamin==1 && status_pernikahan==1) {
		tunjangan = 500;
	}
	else {
		tunjangan = 0;
	}

	// Transport
	if(kendaraan==1) {
		transport = 1000;
	}
	else if(kendaraan==0) {
		transport = 500;
	}
	else {
		transport = 0;
	}

	// Gaji Kotor
	gaji_kotor = gaji_pokok+tunjangan+uang_makan+transport;

	// Pajak
	pajak = (0.05*gaji_kotor);

	// Gaji Bersih
	gaji_bersih = gaji_kotor-pajak;

	cout << " Tunjangan      = " << tunjangan << endl;
	cout << " Uang Transport = " << transport << endl;
	cout << " Gaji Kotor     = " << gaji_kotor << endl;
	cout << " Pajak          = " << pajak << endl;
	cout << " Gaji Bersih    = " << gaji_bersih << endl;

	getch();
	return 0;
}
