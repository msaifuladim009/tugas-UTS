#include <iostream>

using namespace std;

int main()
{
     int bilangan;

     // Memberikan informasi agar user memasukkan
     // Sebuah bilangan bulat
     cout<<"\t== Program Bilangan Positif ==\n\n";
     cout<<"Masukkan bilangan : ";

     // Membaca nilai yang dimasukkan dari keyboard
     // Dan disimpan ke variabel Bilangan
     cin>>bilangan;

     // Program ini merupakan contoh if satu kondisi
     // Akan menampilkan sebuah teks jika
     // Bilangan yang dimasukkan > 0
     if(bilangan > 0){
          cout<<"\nAnda memasukkan bilangan Positif\n";
          cout<<"Bilangan tersebut adalah "<<bilangan;
     }

     return 0;
}
