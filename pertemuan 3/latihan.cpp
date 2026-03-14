#include<iostream>
using namespace std;
int main()
{
    float berat, BMI; int tinggi;

        system("CLS");
        
    cout<<"masukkan berat badan anda (dalam kilogram): "; cin>>berat;
    cout<<"masukkan tinggi badan anda (dalam meter): "; cin>>tinggi;
    BMI = berat/(tinggi*tinggi);
    cout<<"BMI kamu adalah: "<<BMI<<endl; 
    if (BMI< 18.5) {
        cout<<"berat badan anda kurang"<<endl;
    } else if (BMI>=18.5 & BMI<25) {
        cout<<"berat badan anda normal"<<endl;
    } else if (BMI>=25 & BMI<30) {
        cout<<"berat badan anda berlebih"<<endl;
    } else if (BMI>= 30) {
        cout<<"obesitas"<<endl;
    } else {cout<<"inputan salah"<<endl;}
}
