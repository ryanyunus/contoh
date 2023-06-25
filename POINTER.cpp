#include <iostream>

using namespace std;

int main(){

//     string nama = "Yunus Febriansyah";
//     cout << nama << " berada pada alamat : " << &nama << endl;

//    // string *ptrNama 1;
//    // ptrNama1 = &nama;   


//     string *ptrNama = &nama;

//     // cout <<"ptrNilai1 : " << ptrNama1 << endl;
//     // cout <<"ptrNilai2 : " << ptrNama2 << endl;

//     cout << "ptrNama : " << ptrNama << endl;
//     cout << "nilai pada alamat ptrNama " << *ptrNama << endl;

//     *ptrNama = "Budi";
//     cout << "Nilai pada variabel nama : " << nama << endl;
//     cout << "Nilai pada alamat ptrnama : " << *ptrNama << endl;

    int nilai = 5;
    int *ptrNilai = &nilai;
    cout << "Alamat dari variabel nilai : " << ptrNilai << endl;
    cout << "Isi dari variabel nilai : " << nilai << endl;
    (*ptrNilai)++;
    cout << "Alamat dari variabel nilai : " << ptrNilai << endl;
    cout << "Isi dari variabel nilai : " << nilai << endl;
    
    
}