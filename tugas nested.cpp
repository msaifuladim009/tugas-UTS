#include <iostream>

using namespace std;

int main()
{
	long harga=0;
	char KodeBaju, Ukuran;
	string Merk;
}

cout<<"\t== Program Cek Harga Baju ==\n\n";

cout<<"Masukkan Kode Baju :";
cin>>KodeBaju

cout<<"Masukkan Ukuran Baju:";
cin>>Ukuran;

if(KodeBaju=='1'){
	Merk="IMP";
	if(Ukuran=='S'|| Ukuran=='s'){
		harga=220000;
	}
	else if(Ukuran=='M'|| Ukuran=='m'){
		harga=240000;
	}
	else{
		harga=260000;
	}
}
else if(KodeBaju=='2'){
	Merk="Auh Gelap";
	if(Ukuran=='s'||Ukuran=='s'){
		harga=150000;
	}
	else if(Ukuran=='M'||Ukuran=='m'){
		harga=170000;
	}
	else{
		harga=180000p
	}
}
