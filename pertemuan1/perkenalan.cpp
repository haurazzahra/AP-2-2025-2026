#include <iostream> /*header, conio.h, stdio.h*/
#include <conio.h> //header untuk getche() dan getch()//
using namespace std; /*biar nanti ga make std lagi*/
int main ()
{
string nama;
char kom, gender;
int NIM;
float IP;
    cout<<"hello world"<<endl;
    cout<<"masukkan nama: ";
    getline(cin, nama); //agar karakter spasi bisa dibaca

    cout<<"masukkan KOM: ";
    cin>>kom;

    cout<<"masukkan NIM: ";
    cin>>NIM;

    cout<<"masukkan IP: ";
    cin>>IP;

    cout<<"masukkan jenis kelamin (L/P): "; //getche (get char and echo, baca karakter dan tampilkan)
    gender = getche(); //agar karakter langsung tampil, jadi ga perlu tekan enter
    //ini output//
    cout<<"\n" << nama << endl; //ini nanti kespasi//
    cout<<kom<<endl;
    cout<<NIM<<endl;
    cout<<IP<<endl;
    // cout<<gender<<endl; 
    putchar(gender); //untuk menampilkan karakter khsus
    
    getch(); //karakter yg diketik ga ditampilkan di layar
}