#include<iostream>
using namespace std;
int main(){
    string kalimat; int i;
    system("CLS");
    cout<<"masukkan kalimat: ";
    getline(cin, kalimat);

    for(i=0; i<kalimat.length(); i++){
        switch(kalimat[i]){ 
        case 'a': kalimat[i] = toupper(kalimat[i]); break;
        case 'i': kalimat[i] = toupper(kalimat[i]); break;
        case 'u': kalimat[i] = toupper(kalimat[i]); break;
        case 'e': kalimat[i] = toupper(kalimat[i]); break;
        case 'o': kalimat[i] = toupper(kalimat[i]); break;
        default: break; 
        }
    }   
    cout<<"kalimat dalam huruf kapital: "<<kalimat<<endl;
    return 0; 
}