#include <iostream>
using namespace std;

int main () {
    int a;
    int b;
    int c;
    int d;
    //input value yang akan ditukar
    cout<< "Silahkan masukkan nilai a :";
    cin>> a;
    cout<< "Silahkan masukan nilai b :";
    cin>> b;

    cout<<"\n";
    //value tiap variable ditukar
    c=a;
    a=b;
    b=c;
    
    //setelah ditukar
    cout<<"Nilai setelah di tukar adalah :\n";
    cout<<"\n";
    cout<< "Nilai a :"<<a<<endl;
    cout<< "Nilai b :"<<b<<endl;

    cout<<"menukar tanpa variabel tambahan"<<endl;


   //menukar tanpa variable tambahan


    cout << "Masukan nilai A: ";
    cin >> c;
    cout << "Masukan nilai b : ";
    cin >> d;

    cout<< "Nilai A : "<<d<<endl;
    cout<< "nilai B : "<<c;


return 0;
}
