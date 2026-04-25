include<iostream>
#include<vector>
using namespace std;
int main(){
    //demgan vector bs suka ati mebghapus atau menambah data
    //vector declaration & initialization
    vector<string> nama_karyawan = {"haura", "mimi","mumu", "momo", "miumiu"}; 
    //menampilkan data 
    //for(int i = 0; i <nama_karyawan.size(); i++){
       // cout<<nama_karyawan[i]<<endl; 
   // }
    //add data to vector
    //nama_karyawan.push_back("mawmaw");
    //for(int i = 0; i <nama_karyawan.size(); i++){
       // cout<<nama_karyawan[i]<<endl; 
    //}
    
    //delete data dr vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3);
    for(int i = 0; i <nama_karyawan.size(); i++){
        cout<<nama_karyawan[i]<<endl; 
    }
    
    
}