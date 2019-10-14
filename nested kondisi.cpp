 #include<iostream>
using namespace std;
#define phi 3.14
int main()
{
char lagi;
int pilih;
float a,t,r,p,l,luas;
menu:
system ("cls");
            cout<< "================================\n";
            cout<< "| Menghitung Luas Bangun Datar |\n";
            cout<< "================================\n";
            cout<< "|    1. Luas segitiga          |\n";
            cout<< "|    2. Luas lingkaran         |\n";
            cout<< "|    3. Luas persegi panjang   |\n";
            cout<< "|    4. Keluar                 |\n";
            cout<< "================================\n";
            cout<< "Masukkan pilihan anda [1..4]? ";
            cin>>pilih;
            cout<< "\n";
if (pilih==1)
{
            cout<< "Luas Segitiga \n";
            cout<< "====================\n";
            cout<< "Masukkan alas    : ";
            cin>>a;
            cout<< "Masukkan tinggi  : ";
            cin>>t;
            luas = (a*t)/2;
            cout<< "Luas segitiga    : "<<luas;
            cout<<"\n\n";
            cout<< "Masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == 'y')
            goto menu;
            else goto keluar;
}
else if (pilih==2) {
            cout<< "Luas Lingkaran \n";
            cout<< "=====================\n";
            cout<< "Masukkan jari-jari    : ";
            cin>>r;
            luas = phi*(r*r);
            cout<< "Luas lingkaran        : "<<luas;
            cout<<"\n\n";
            cout<< "Masih lanjut [y/t]? ";
            cin>>lagi;
            if (lagi == 'y')
            goto menu;
            else goto keluar;
}
else if (pilih==3) {
            cout<< "Luas Persegi panjang \n";
            cout<< "===========================\n";
            cout<< "Masukkan panjang    : ";
            cin>>p;
            cout<< "Masukkan lebar      : ";
            cin>>l;
            luas = p*l;
            cout<< "Luas persegi panjang: "<<luas;
            cout<< "\n\n";
            cout<< "Masih lanjut [y/t]? ";cin>>lagi;
            if (lagi == 'y')
            goto menu;
            else goto keluar;
}
else if (pilih==4) {
            keluar:
            cout<< "\n Terima kasih.";
}
else {
            cout<< "Maaf input yang anda masukkan salah, silahkan coba lagi \n\n";
            goto menu;
}
return 0;          
}
