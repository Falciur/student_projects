
#include <iostream>

using namespace std;


int maxLI








int main(){


	int tab[3];
	cout<<"Podaj wartosc1"<<endl;
	cin>>tab[0];
	cout<<"Podaj wartosc2"<<endl;
	cin>>tab[1];
	cout<<"Podaj wartosc3"<<endl;
	cin>>tab[2];	
	int  max=0;

	for(int i = 0; i<3 ; i++)
	{	
	if(tab[i]>max)
	{		
		max = tab[i];
	}
	
	
	
	}
	cout<<max<<endl;
		

	return 0;
}


//W tablicy wczytujemy 3 wartosci z klawiatury liczbowe
// szukamy maksymalnej i wyswietlamy




