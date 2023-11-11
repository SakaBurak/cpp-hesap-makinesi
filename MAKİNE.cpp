#include <iostream>

using namespace std;

int main(){
	int secim;
	double sayi1, sayi2 , sonuc;
	
	cout<<"1.sayiyi giriniz: ";
	cin>>sayi1;
	cout<<"2.sayiyi giriniz: ";
	cin>>sayi2;
	cout<<"islem seciniz\n 1-TOPLAMA\n 2-CIKARMA\n 3-CARPMA\n 4-BOLME\n";
	cin>>secim;
	cout<<"-------ISLEM SONUCU-------"<<endl;
	cout<<endl;
	
	if(secim==1){
		sonuc=sayi1+sayi2;
		cout<<"sonuc: "<<sonuc<<endl;
	}
	else if(secim==2){
		sonuc=sayi1-sayi2;
		cout<<"sonuc: "<<sonuc<<endl;
	}
	else if(secim==3){
		sonuc=sayi1*sayi2;
		cout<<"sonuc: "<<sonuc<<endl;
	}
	else if(secim==4){
		sonuc=sayi1/sayi2;
	
		cout<<"sonuc: "<<sonuc<<endl;
	}
	else{
		cout<<"Hatali secim girdiniz!"<<endl;
		cout<<"Lutfen seciminizi 1-4 araliginda yapiniz!"<<endl;
	}
	cout<<endl;
	cout<<"-------ISLEM SONUCU-------"<<endl;
	return 0;
}
