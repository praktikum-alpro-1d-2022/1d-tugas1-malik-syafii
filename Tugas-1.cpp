#include <iostream>
using namespace std;

class MHS{
public:
    string npm;
    string Nama_Lengkap;
    string Umur;
    string Kelas;
    string Hobi;
    string Cita_cita;
      printData(){
        cout<<"NPM          \t= "<<npm<<endl;
        cout<<"Nama Lengkap \t= "<<Nama_Lengkap<<endl;
        cout<<"Umur         \t= "<<Umur<<endl;
        cout<<"Kelas        \t= "<<Kelas<<endl;
        cout<<"Hobi         \t= "<<Hobi<<endl;
        cout<<"Cita-cita    \t= "<<Cita_cita<<endl;
        }
};
 
main(){
  int a = 0;
  cout << "ketik angka 1 untuk melihat biodata mahasiswa\n";
  cin >> a;
  switch (a) {
    case 1:
    MHS malik;
    malik.npm="2210631170029";
    malik.Nama_Lengkap="Malik Syafi'i";
    malik.Umur="19 tahun";
    malik.Kelas="1D";
    malik.Hobi="Hobi Mendengarkan musik dan belajar hal baru";
    malik.Cita_cita="menjadi orang yang sukses";
    malik.printData();
    break;
  }

  return 0;
}