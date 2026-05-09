#include<iostream>
#include<string>
#include<vector>
using namespace std;
//nested struct
struct alamat{
    string jalan, kota; 
    int kodepos;
};

struct mahasiswa {
    string nama;
    int umur;
    float ipk;
    alamat alamat; //nested struct, tipe datanya alamat yg di atas
}; 

int main(){
    system("CLS");
    mahasiswa mhs1;

//     mhs1.alamat.jalan = "jalan amal";
//     mhs1.alamat.kota = "medan";
//     mhs1.alamat.kodepos = 20155;

//    
// cout<<"alamat: "<<mhs1.alamat.jalan<<" "<<mhs1.alamat.kota<<" "<<mhs1.alamat.kodepos;
   vector<mahasiswa> mahasiswa; 
int n; 
    cout<<"masukkan banyak mahasiswa: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<"mahasiswa "<<i+i<<endl;

        cin.get(); 
        cout<<"masukkan nama: "; getline(cin, mhs1.nama);
        cout<<"masukkan umur: "; cin>>mhs1.umur; 
        cout<<"masukkan ipk: "; cin>>mhs1.ipk; 
        mahasiswa.push_back(mhs1);
    }

    for(int i= 0; i<n; i++){
        cout<<"mahasiswa "<<i+i<<endl;
        cout<<"nama: "<<mahasiswa[i].nama<<endl;
        cout<<"umur: "<<mahasiswa[i].umur<<endl;
        cout<<"ipk: "<<mahasiswa[i].ipk<<endl;
    }

}