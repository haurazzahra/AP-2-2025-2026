#include<iostream>
using namespace std; 

int main(){
    system("CLS");
    //1. operasi penugasan
    cout<<"== operasi penugasan =="<<endl;
    int a = 10;
    int *p; 
    p = &a; //pointer simpen alamat a

    cout<<"nilai a: "<<a<<endl; 
    cout<<"alamat a: "<<&a<<endl;
    cout<<"isi pointer p: "<<p<<endl;
    cout<<"variabel isi pointer p: "<<*p<<endl; 

    // 2. operasi aritmatika
    cout<<"== operasi aritmatika =="<<endl;
    int nilai[3]; //array 3 angka
    int *oke; 

    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750; 

    /*ILUSTRASI
    nilai [0] --> alamat 1000 --> isi 125
    nilai [1] --> alamat 1002 --> isi 345
    nilai [2] --> alamat 1005 --> isi 750
    maka sekarang oke = 1000 */

    oke = &nilai[0]; //menyimpan alamat nilai[0]
    cout<<"nilai "<<*oke<<" ada di alamat"<<oke<<endl;
    cout<<"nilai "<<*(oke+1)<< " ada di alamat"<<(oke+1)<<endl; //geser elemen
    cout<<"nilai "<<*(oke+2)<<" ada di alamat"<<(oke+2)<<endl;

    //3. operasi logika
    cout<<"== operasi logika =="<<endl;
    int x = 5, y = 10;
    int *p1 = &x; //nyimpen alamat x
    int *p2 = &y; //nyimpen alamat y 
    int *p3 = &x; //nyimpen alamat x

    //jadi bisa disimpulkan p1 dan p3 sama
    /* ILUSTRASI
    p1 = 1000 
    p2 = 2000
    p3 = 1000 */

    if(p1 == p3){
        cout<<"p1 dan p3 menunjuk alamat yang sama"<<endl;
    }

    if(p1 != p2){
        cout<<"p1 dan p2 menunjuk alamat yang berbeda"<<endl; 
    }
    
    int *p4 = NULL; //pointer tidak menunjuk ke mana pun 
    if(p4 == NULL){
        cout<<"p4 adalah pointer NULL"<<endl; 
    }
    return 0; 
}