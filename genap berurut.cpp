#include <iostream> //Nama Umar Ibnu Zainal M
using namespace std; //NIM 311810909

void logika()  //dari soal array a = array b
{ 				//akan dibuat array b = nilai genap dari nilai array a
	int a[5];
	int b[5];
	int x=1; //variable pengganti looping array a
	for(int i = 1;i<=5;i++)
	{
		cout<<"Masukan nilai indeks ke-"<<i-1<<" : ";
		cin>>a[i];
		if(a[i]%2==0)
		{
			b[x]=a[i];
			x=x+1;
		}
	}
	cout<<"Array a[5] = {";
	for(int j=1;j<=5;j++)
	{
		cout<<a[j]<<",";
	}
	cout<<"\b}\n";
	
	cout<<"Array b[5] = {";
	for(int k=1;k<=5;k++)
	{
		if(b[k]==0)
		cout<<"_,";
		else
		cout<<b[k]<<",";
	}
	cout<<"\b}";
}

int main()
{
	logika();
}
