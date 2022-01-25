#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int pil, panjang, lebar, jari, phi, luas, volume;
	do{
		system("cls");
		cout<<endl;
		cout<<"==========================="<<endl;
		cout<<"          =Tabung=         "<<endl;
		cout<<"==========================="<<endl;
		cout<<" 1. Hitung luas selimut    "<<endl;
		cout<<" 2. Hitung volume tabung   "<<endl;
		cout<<" 3. Hitung keduanya        "<<endl;
		cout<<" 4. Keluar                 "<<endl;
		cout<<"==========================="<<endl;
		cout<<"Masukkan pilihan : "; cin>>pil;
		switch(pil){
			case 1: system("cls");{
				float panjang, lebar;
				cout<<"Masukkan panjang : ";
				cin>>panjang;
				cout<<"Masukkan lebar : "; 
				cin>>lebar;
				luas = panjang * lebar;	
				cout<<"\nDik : panjang = "<<panjang;
				cout<<"\n\tlebar = "<<lebar;
				cout<<"\nDit : luas selimut ?";
				cout<<"\nPenyelesaian : ";
				cout<<"\nluas selimut = panjang x lebar";
				cout<<"\n\t= "<<luas;
				break;
			}
			case 2: system("cls");{
				float phi = 3.14;
				float jari, lebar;
				cout<<"Masukkan jari : ";
				cin>>jari;
				cout<<"Masukkan lebar : "; 
				cin>>lebar;
				volume = phi * jari * jari * lebar;
				cout<<"\nDik : lebar = "<<lebar;
				cout<<"\n\tjari = "<<jari;
				cout<<"\nDit : volume tabung ?";
				cout<<"\nPenyelesaian : ";
				cout<<"\nvolume = phi x jari x jari x lebar";
				cout<<"\n\t= "<<volume;
				break;
			}
			case 3: system("cls");{
				float phi = 3.14;
				float panjang, lebar, jari, luas, volume;
				cout<<"Masukkan panjang :";
				cin>>panjang;
				cout<<"Masukkan jari : ";
				cin>>jari;
				cout<<"Masukkan lebar : "; 
				cin>>lebar;
				
				luas = panjang * lebar;
				volume = phi * jari * jari * lebar;
	
				cout<<"\nDik : panjang = "<<panjang;
				cout<<"\n\tlebar = "<<lebar;
				cout<<"\n\tjari = "<<jari;
				cout<<"\nDit : luas selimut ?";
				cout<<"\n\tvolume tabung ?";
				cout<<"\nPenyelesaian : ";
				cout<<"\nluas selimut = panjang x lebar";
				cout<<"\n\t= "<<luas;
				cout<<"\nvolume = phi x jari x jari x lebar";
				cout<<"\n\t= "<<volume;
				break;
			}
			case 4: system("cls");{
				return 0;
				break;
			}
		}
		getch();
	}
	while(pil!=4);
}
