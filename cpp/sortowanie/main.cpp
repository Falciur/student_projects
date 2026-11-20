#include <iostream>
#include "sort.cpp"
using namespace std;

int main()
{
	int tablica[5] ={4,2,54,21,23};
	sort(tablica, 5);

	for(int element : tablica){
		cout << element << " ";
	}

	cout<<endl;
	return 0;
}
