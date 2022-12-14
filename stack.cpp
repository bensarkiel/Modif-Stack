/*
Judul           : Modifikasi Program Stack
Programmer      : Dwi Prabowo
Kapan & dimana  : 23 September 2022 13.00 WIB di Rumah
*/

#include <iostream>
#include <conio.h>
#define MAX 5
using namespace std;
 
struct Stack {
    int top, data[MAX];
} 
Tumpukan;
 
void init() {
    Tumpukan.top = -1;
}
 
bool isEmpty() {
    return Tumpukan.top == -1;
}
 
bool isFull() {
    return Tumpukan.top == MAX -1;
}
 
void push() {
    if (isFull()) {
        cout<<"==================================="<<endl;
        cout << "\tStack Is Full !!!" << endl;
        cout<<"==================================="<<endl;
    } else {
        Tumpukan.top++;
        cout << "\nMasukkan data = ";
        cin >> Tumpukan.data[Tumpukan.top];
        cout << "\n--- Data '" << Tumpukan.data[Tumpukan.top] << "' masuk ke stack ---"
             << endl;
    }
}
 
void pop() {
    if (isEmpty()) {
        cout<<"==================================="<<endl;
        cout << "\tStack Is Empty !! " << endl;
        cout<<"==================================="<<endl;
    } else {
        cout << "\n--- Data '" << Tumpukan.data[Tumpukan.top] << "' keluar dari stack ---"
             << endl;
        Tumpukan.top--;
    }
}
 
void printStack() {
    if (isEmpty()) {
        cout<<"**************************************"<<endl;
        cout<< "\tBelum Ada Data Tumpukan\n";
        cout<<"**************************************"<<endl;
    } else {
        cout<<"***********************************"<<endl;
        cout << "Data Tumpukan : ";
        for (int i = Tumpukan.top; i >= 0; i--)
            cout << Tumpukan.data[i] << ((i == 0) ? "" : ",");
        cout<<"\n***********************************"<<endl;
    }
}
 
void Clear()
{
    if (isEmpty()){
        cout<<"*****************************************************"<<endl;
        cout<< "\tTidak Ada Data Tumpukan Yang Akan Di CLEAR !\n";
        cout<<"*****************************************************"<<endl;
    }else{  
        Tumpukan.top=-1;
        cout<<"\nSemua Data Dalam Stack Akan Di HAPUS, Silahkan Tekan 'Enter'\n";
    }
}
 
void Hitung()
{
    int maksimum, minimum, total;
     
    total = 0;
    maksimum = Tumpukan.data[0];
    minimum = Tumpukan.data[0];
     
    for(int i = 0; i < Tumpukan.data[i]; i++) 
      {
        if (Tumpukan.data[i] > maksimum)  
        {
            maksimum = Tumpukan.data[i];
        }else if (Tumpukan.data[i] < minimum)
        {
            minimum = Tumpukan.data[i];     
        }
    }
        cout << "\n-Nilai Maksimum Dalam Stack Adalah : " << maksimum << endl;
        cout << "-Nilai Minimum Dalam Stack Adalah    : "<< minimum << endl;
         
    for(int i=0; i<=Tumpukan.data[i]; i++)
        {
            total=total+Tumpukan.data[i];
        }
        cout << "-Total Data Dalam Stack Adalah       : "<< total <<endl;
}
 
void Search()
{
    int cari, ketemu = 0;
    if(isEmpty())
    {
        cout<<"**************************************"<<endl;
        cout<< "\tTidak Ada Data Tumpukan !\n";
        cout<<"**************************************"<<endl;
    }else{
        cout << "\n\nMasukkan nilai data yang akan dicari = "; cin >> cari;
        for (int i = 0; i<Tumpukan.top; i++) {
            if (cari == Tumpukan.data[i]) {
                cout << "\nNilai " << cari << " ditemukan pada index = " << i <<endl;
                ketemu = 1; 
            }
        }
    if (ketemu == 0) cout << "Maaf data yang Anda cari tidak ada !!";
    }
}
 
void Edit()
{
    int ganti;
    if(isEmpty())
    {
        cout<<"**************************************"<<endl;
        cout<< "\tTidak Ada Data Tumpukan !\n";
        cout<<"**************************************"<<endl;
    }else{
        cout << "\n\nMasukkan nilai data yang akan diubah = "; cin >> ganti;
        for (int i = 0; i<Tumpukan.top; i++)
        {
            if (Tumpukan.data[i] == ganti)
            {
                cout << "Masukkan nilai baru = "; cin >> Tumpukan.data[i];
            }
        }
    }
}
 
void Hapus()
{
    int hapus;
    if (isEmpty()){
        cout<<"**************************************"<<endl;
        cout<< "\tTidak Ada Data Tumpukan !\n";
        cout<<"**************************************"<<endl;
    }else{               
        cout<<"\nData yang akan dihapus : ";
        cin>>hapus;
         
        for(int i=0;i<=5;i++)
        {
            if(Tumpukan.data[i]==hapus)
            {
                Tumpukan.data[i]=(Tumpukan.data[Tumpukan.top--]);  
                cout << "\nYakin Ingin Menghapus Data '" << hapus << "' Dari Stack ?" <<endl;     
            }           
        }   
    }
}

int main() {
	int pilihan, data;
	init();
	do {
        cout << "**************************************" << endl;
        cout << "|         DAFTAR KIRIM PAKET         |" << endl;
        cout << "|          AMANDA LOGISTIK           |" << endl;
        cout << "**************************************" << endl;
		printStack();
		cout << "1. Push Data (Input)\n"
			 << "2. Pop Data (Hapus)\n"
			 << "3. Print (Cetak)\n"
			 << "4. Clear Semua Stack\n"
			 << "5. Hitung MAX, MIN, TOTAL\n"
			 << "6. Search Stack\n"
			 << "7. Edit Data Stack\n"
			 << "8. Hapus Salah Satu\n"
			 << "Masukkan Pilihan: ";
		cin >> pilihan;
		switch (pilihan) {
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			printStack();
			break;
		case 4:
			Clear();
			break;
		case 5:
			Hitung();
			break;
		case 6:
			Search();
			break;
		case 7:
			Edit();
			break;
		case 8:
			Hapus();
			break;
		default:
			cout << "Pilihan tidak tersedia" << endl;
			break;
		}
		cout<<"\nTekan 'ENTER' untuk melanjutkan"<<endl;
		getch();
		system("cls");
	} while (pilihan != 9);
}