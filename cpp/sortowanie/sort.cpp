#include <iostream>
using namespace std;


void sort(int tab[], int n)
{
	
	for (int i=0; i<n-1 - 1; i++)
	{
		for (int j=0; j<n-i-1; j++)
		{
		
			if(tab[j] > tab[j + 1]) 
			{	
				int temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}




} 
