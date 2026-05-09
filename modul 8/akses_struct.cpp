//struct mirip record(dlm pascal)
//struct menyimpan banyak variabel dengan tipe yg berbeda
//ada operator (.) dan (->)
#include<iostream>
#include<string> //karena make string, apakah wajib(?)
using namespace std; 

struct mahasiswa {
    string nama;
    int umur;
    float ipk;
}; 
int main(){
    mahasiswa mhs1; 
    mhs1.nama = "haura";
    mhs1.umur = 18;
    mhs1.ipk = 4;

    cout<<"akses dengan tanda (.)"<<endl;
    cout<<"nama: "<<mhs1.nama<<endl;
    cout<<"umur: "<<mhs1.umur<<endl;
    cout<<"ipk: "<<mhs1.ipk<<endl;

    mahasiswa *ptrmhs = &mhs1; 
    cout<<"akses dengan tanda (->)"<<endl;
    cout<<"nama: "<<ptrmhs->nama<<endl;
    cout<<"umur: "<<ptrmhs->umur<<endl;
    cout<<"ipk: "<<ptrmhs->ipk<<endl;
}