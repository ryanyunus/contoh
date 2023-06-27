#include <iostream>
using namespace std;
struct Kampus{
    string NamaKampus, alamatKampus;
    int tahunBerdiri; 
};
struct Mahasiswa{
	// komponen // member
	string npm, nama, jurusan;
	int umur;
	string hobi[3];	
    Kampus kps;
    struct AlamatMhs{
        string jalan;
    }alamat; 
};
void cetakdataMhs(Mahasiswa data){
    cout << "NPM Mahasiswa  : " << data.npm << endl;
	cout << "Nama Mahasiswa : " << data.nama << endl;
	cout << "Jurusan Mahasiswa  : " << data.jurusan << endl;
	cout << "Umur Mahasiswa  : " << data.umur << endl;
	cout << "Hobi1 Mahasiswaa  : " << data.hobi[0] << endl;
	cout << "Hobi2 Mahasiswaa  : " << data.hobi[1] << endl;
	cout << "Hobi3 Mahasiswaa  : " << data.hobi[2] << endl << endl;
	cout << "Hobi3 Mahasiswaa  : " << data.alamat.jalan << endl << endl;
}

int main()
{
    
    Mahasiswa mhs[2];
	Kampus kampusUTM = {"Univresitas Terbuka","Indonesia",1993};
	//cara 1
	mhs[0].npm = "202111002";
	mhs[0].nama = "Agus Purniawan";
	mhs[0].jurusan = "Informatika";
	mhs[0].umur = 29;
	mhs[0].hobi[0] = "Mancing";
	mhs[0].hobi[1] = "Belajar";
	mhs[0].hobi[2] = "Makan";
    mhs[0].kps.NamaKampus = "Universitas Terbuka";
    mhs[0].kps.alamatKampus = "Indonesia";
    mhs[0].kps.tahunBerdiri = 2000;
    mhs[0].kps = kampusUTM;
    mhs[0].alamat.jalan = "Jl.Mawar no .18";
    
    cetakdataMhs(mhs [0]);
    cout << "\n\n" << endl;

    mhs[1].npm = "202111002";
	mhs[1].nama = "Fatian";
	mhs[1].jurusan = "Informatika";
	mhs[1].umur = 29;
	mhs[1].hobi[0] = "Mancing";
	mhs[1].hobi[1] = "Belajar";
	mhs[1].hobi[2] = "Makan";
    mhs[1].kps.NamaKampus = "Universitas Terbuka";
    mhs[1].kps.alamatKampus = "Indonesia";
    mhs[1].kps.tahunBerdiri = 2000;
    mhs[1].kps = kampusUTM;
    mhs[1].alamat.jalan = "Jl.Mawar no .18";

    cetakdataMhs(mhs [1]);
	
	
	// 	//cara 2
	// mhs[1] = {"202111004", "Andika Pratama", "TEKNIK ELEKTRO", 20, {"Main Musik", "Ngoding", "Nonton"}};
	
	// cout << "NPM Mahasiswa 2 : " << mhs[1].npm << endl;
	// cout << "Nama Mahasiswa 2 : " << mhs[1].nama << endl;
	// cout << "Jurusan Mahasiswa 2 : " << mhs[1].jurusan << endl;
	// cout << "Umur Mahasiswa 2 : " << mhs[1].umur << endl;
	// cout << "Hobi1 Mahasiswaa 2 : " << mhs[1].hobi[0] << endl;
	// cout << "Hobi2 Mahasiswaa 2 : " << mhs[1].hobi[1] << endl;
	// cout << "Hobi3 Mahasiswaa 2 : " << mhs[1].hobi[2] << endl << endl;
	
	// cara 3
	// mhs[2]= {"202111003", "Wahyu Prasetyo", "Informatika", 23, {"Membaca", "Desaign", "Ngegame"}};
	
	// cout << "NPM Mahasiswa 3 : " << mhs[2].npm << endl;
	// cout << "Nama Mahasiswa 3 : " << mhs[2].nama << endl;
	// cout << "Jurusan Mahasiswa 3 : " << mhs[2].jurusan << endl;
	// cout << "Umur Mahasiswa 3 : " << mhs[2].umur << endl;
	// cout << "Hobi1 Mahasiswaa 3 : " << mhs[2].hobi[0] << endl;
	// cout << "Hobi2 Mahasiswaa 3 : " << mhs[2].hobi[1] << endl;
	// cout << "Hobi3 Mahasiswaa 3 : " << mhs[2].hobi[2] << endl << endl;
	
}
