#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> nama_karyawan = {"nadia", "echa","carlos", "ilham", "alan"}; 
    for(int i = 0; i <nama_karyawan.size(); i++){
       cout<<nama_karyawan[i]<<endl; 
    }
    
    cout<<endl; 
    
   nama_karyawan.push_back("houra");
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 1);
    for(int i = 0; i <nama_karyawan.size(); i++){
       cout<<nama_karyawan[i]<<endl; 
    }
    
    cout<<endl; 
    
    cout<<"data tersisa: "<<nama_karyawan.size(); 
    
}