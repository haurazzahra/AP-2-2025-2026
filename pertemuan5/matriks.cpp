#include<iostream>
#include<string>
#include<array>
using namespace std;

int main()
{
    //array declaration & initialization
    //2 cara buat array
    
    //array kosong 
    //string nama[5]; 
    //nama[0] = "haura";
    //nama[1] = "houra";
    //nama[2] = "aiyla";
    
    //nampilin data dlm array
    //cout << nama[0] <<endl; 
    //cout << nama[2] <<endl;
    
    //cara 2 : array lgsg isi
    //string nama[5] = {"haura","houra", "aiyla", "nyanya", "nyonyo"};
    // string nama[] = ] = 
    
    //menggunakan looping 
    //for(int i = 0; i<5; i++){
     //   cout<<nama[i]<<endl; 
    //}
    //descending
    //for(int i = 4; i>=0; i--){
     //  cout<<nama[i]<<endl;  
    //}
    
    //multidimensional array
    // 1 2 3 
    // 4 5 6
    
    //int matriks[2][3] = {{1, 2, 3}, {4, 5, 6}}; //2 baris 3 kolom
    //for(int i = 0; i < 2; i++){
    //for(int j = 0; j < 3; j++){
    //   cout<<matriks[i][j]<<" ";
   // } cout<<endl; 
   // } 
    
    //LATIHAN
    int matriks1 [2][2];
    int matriks2 [2][2];
    int hasil[2][2];
    
    cout<<"matriks 1"<<endl; 
    for(int i = 0; i < 2;i++){
        for(int j = 0; j <2; j++){
            cout<<"masukkan elemen baris: "<<i + 1<<"kolom"<<j + 1<< " : ";
            cin>>matriks1[i][j]; 
        }
    }
    
    cout<<"matriks 2"<<endl; 
    for(int i = 0; i < 2;i++){
        for(int j = 0; j <2; j++){
            cout<<"masukkan elemen baris: "<<i + 1<<"kolom"<<j + 1<< " : ";
            cin>>matriks2[i][j]; 
        }
    }
    
    //hasil
    cout<<"hasil penjumlahan "<<endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            hasil[i][j] = matriks1[i][j] + matriks2 [i][j];
            cout<<hasil[i][j]<<" "; 
        }
        cout<<endl;
    }
    
}
