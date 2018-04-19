
#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	int i,j,m,k;
	cout<<"	Piramide #3"<<endl;
	do{
		
	cout<<"\nIngrese la altura: "; cin>>m;
	cout<<endl;
	for (i=0;i<m;i++) {
		for (j=0;j<m-i;j++) {
			cout <<" ";
			}
			for (k=0;k<=i*2;k++)
			{
			cout <<"*";
			}
			cout<<endl;
	}
	}
	while(m!=0);
	getch();
	return 0;
}

