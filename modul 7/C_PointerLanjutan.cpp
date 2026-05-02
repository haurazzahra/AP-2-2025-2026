#include<iostream>
using namespace std; 

//fungsi untuk pointer sebagai parameter
void ubahNilai(int *p){ //p menerima alamat x yang berisi 5
    *p = 20; //p = 20 --> ubah isi alamatnya
}

int main(){
    system("CLS");
    // 1. pointer dalam pointer
    cout<<"== pointer dalam pointer =="<<endl;
    int a = 64; 
    int *p = &a; 
    int **pp = &p; //pointer ke pointer p 
    cout<<"nilai a: "<<a<<endl; 
    cout<<"nilai *p: "<<*p<<endl; 
    cout<<"nilai **pp: "<<**pp<<endl; 

    //2. pointer dalam array
    cout<<"== pointer dalam array =="<<endl;
    int arr[3] = {1, 2, 3};
    int *ptr = arr; 
    cout<<"elemen 1: "<<*ptr<<endl; 
    cout<<"elemen 1: "<<*(ptr+1)<<endl;
    cout<<"elemen 1: "<<*(ptr+2)<<endl;  

    //3. pointer dalam string
    cout<<"== pointer dalam string =="<<endl;
    char *organisasi = "ilmu komputer laboratory center";
    cout<<"awal: "<<organisasi<<endl; 

    organisasi += 5; //geser pointer //spasi juga diitung
    cout<<"geser: "<<organisasi<<endl; //setelah +5 //setelah +5 mulai dr K

    //4. pointer sebagai parameter
    cout<<"== pointer sebagai parameter =="<<endl;
    int x = 5; 
    cout<<"sebelum: "<<x<<endl; 
    ubahNilai(&x); //di sini manggil fungsinya
    cout<<"sesudah: "<<x<<endl;
}