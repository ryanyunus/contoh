#include <iostream>
using namespace std;

struct Mahasiswa{
	// komponen // member
	string npm, nama, jurusan;
	int umur;
	string hobi[3];	
}mhs1, mhs2;

int main()
{
	
	//cara 1
	mhs1.npm = "202111002";
	mhs1.nama = "Agus Purniawan";
	mhs1.jurusan = "Informatika";
	mhs1.umur = 29;
	mhs1.hobi[0] = "Mancing";
	mhs1.hobi[1] = "Belajar";
	mhs1.hobi[2] = "Makan";

	cout << "NPM Mahasiswa 1 : " << mhs1.npm << endl;
	cout << "Nama Mahasiswa 1 : " << mhs1.nama << endl;
	cout << "Jurusan Mahasiswa 1 : " << mhs1.jurusan << endl;
	cout << "Umur Mahasiswa 1 : " << mhs1.umur << endl;
	cout << "Hobi1 Mahasiswaa 1 : " << mhs1.hobi[0] << endl;
	cout << "Hobi2 Mahasiswaa 1 : " << mhs1.hobi[1] << endl;
	cout << "Hobi3 Mahasiswaa 1 : " << mhs1.hobi[2] << endl << endl;
	
		//cara 2
	mhs2 = {"202111004", "Andika Pratama", "TEKNIK ELEKTRO", 20, {"Main Musik", "Ngoding", "Nonton"}};
	
	cout << "NPM Mahasiswa 2 : " << mhs2.npm << endl;
	cout << "Nama Mahasiswa 2 : " << mhs2.nama << endl;
	cout << "Jurusan Mahasiswa 2 : " << mhs2.jurusan << endl;
	cout << "Umur Mahasiswa 2 : " << mhs2.umur << endl;
	cout << "Hobi1 Mahasiswaa 2 : " << mhs2.hobi[0] << endl;
	cout << "Hobi2 Mahasiswaa 2 : " << mhs2.hobi[1] << endl;
	cout << "Hobi3 Mahasiswaa 2 : " << mhs2.hobi[2] << endl << endl;
	
	// cara 3
	Mahasiswa mhs3 = {"202111003", "Wahyu Prasetyo", "Informatika", 23, {"Membaca", "Desaign", "Ngegame"}};
	
	cout << "NPM Mahasiswa 3 : " << mhs3.npm << endl;
	cout << "Nama Mahasiswa 3 : " << mhs3.nama << endl;
	cout << "Jurusan Mahasiswa 3 : " << mhs3.jurusan << endl;
	cout << "Umur Mahasiswa 3 : " << mhs3.umur << endl;
	cout << "Hobi1 Mahasiswaa 3 : " << mhs3.hobi[0] << endl;
	cout << "Hobi2 Mahasiswaa 3 : " << mhs3.hobi[1] << endl;
	cout << "Hobi3 Mahasiswaa 3 : " << mhs3.hobi[2] << endl << endl;
	
}
