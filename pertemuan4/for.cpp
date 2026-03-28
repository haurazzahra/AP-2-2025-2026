//for harus punya inisialisasi, kondisi, increase)
#include<iostream>
using namespace std; 
int main(){
// for(int i = 1; i<= 10; i+=2){
//     cout<<"hello world"<<endl;
// }

//(NESTED FOR)
//* * * * * 5X5

for(int i = 1; i<= 5; i++){
    for(int j = 1; j<=5; j++){ //UNTUK YANG BARIS, DI FOR DALAM
    cout<<"* ";}
    cout<<endl; 
} 

//segitiga siku2
for(int i = 1; i<= 5; i++){
    for(int j = 1; j<= i; j++){
        cout<<"* ";
    }
    cout<<endl;
}
}