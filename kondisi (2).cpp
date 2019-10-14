    #include <iostream>

    using namespace std;

    int main()
    {
         long harga=0;
         char KodeBaju, Ukuran;
         string Merk;

         cout<<"\t== Program Cek Harga Baju ==\n\n";

         cout<<"Masukkan Kode Baju   : ";
         cin>>KodeBaju;

         cout<<"Masukkan Ukuran Baju : ";
         cin>>Ukuran;

         if(KodeBaju=='1'){
              Merk="Terang";
              if(Ukuran=='S' || Ukuran=='s'){
                   harga=200000;
              }
              else if(Ukuran=='M' || Ukuran=='m'){
                   harga=300000;
              }
              else{
                   harga=350000;
              }
         }
         else if(KodeBaju=='2'){
              Merk="Eta Merasuki";
              if(Ukuran=='S' || Ukuran=='s'){
                   harga=250000;
              }
              else if(Ukuran=='M' || Ukuran=='m'){
                   harga=260000;
              }
              else{
                   harga=270000;
              }
         }
         else if(KodeBaju=='3'){
              Merk="Sapi Salto";
              if(Ukuran=='S' || Ukuran=='s'){
                   harga=210000;
              }
              else if(Ukuran=='M' || Ukuran=='m'){
                   harga=220000;
              }
              else{
                   harga=230000;
              }
         }
         else if(KodeBaju=='4'){
              Merk="Mama Dimana";
              if(Ukuran=='S' || Ukuran=='s'){
                   harga=350000;
              }
              else if(Ukuran=='M' || Ukuran=='m'){
                   harga=360000;
              }
              else{
                   harga=370000;
              }
         }
         else if(KodeBaju=='5'){
              Merk="Gajah Tidur";
              if(Ukuran=='S' || Ukuran=='s'){
                   harga=100000;
              }
              else if(Ukuran=='M' || Ukuran=='m'){
                   harga=120000;
              }
              else{
                   harga=130000;
              }
         }
         else{
              Merk="Error";
              cout<<"\n== Salah Input Kode Baju ==";
         }

         cout<<"\n\nMerek Baju  = "<<Merk;
         cout<<"\nUkuran Baju = "<<Ukuran;
         cout<<"\nHarga Baju  = "<<harga;

         return 0;
    }



