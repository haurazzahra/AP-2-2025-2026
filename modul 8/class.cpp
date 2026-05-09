//class adalah ...
/* tingkat akses -> orive = hanya diakses oleh aggota dgn class itu sendiri
protected -> class turunan 
public ->  dimana aja */
#include<iostream>
using namespace std; 

class contohakses {
    private: 
    int privateVar;

    protected:
    int protectedVar; 

    public: 
    int publicVar; 

    //constructor (fungction otomatis as objek dibuat)
contohakses(){
    privateVar = 1; 
    protectedVar = 2;
    publicVar = 3;

}

void tampilkansemua(){
    cout<<"akses dari dalam class: "<<endl; 
    cout<<privateVar<<endl;
    cout<<protectedVar<<endl;
    cout<<publicVar<<endl;
}
}; 

//inheritanca (pewarisan), class turunan
class turunan : public contohakses {
    public: 
    void aksesProtected(){
    //cout<<privateVar<<endl;
    cout<<protectedVar<<endl;
    cout<<publicVar<<endl;

    }
};

int main(){
    contohakses obj;
    obj.tampilkansemua();

    cout<<"\nakses dari luar class: "<<endl;
    // cout<<obj.privateVar<<endl;
    // cout<<obj.protectedVar<<endl;
    cout<<obj.publicVar<<endl;

    cout<<"\nakses dari kelas turunan: "<<endl;
    turunan tur; 
    tur.aksesProtected();
}
