// Creada por kerly_Castillo
#include<iostream>
using namespace std;
int main()

{
	float k=0,c=0,c1=0,s5=0;
	int s1=0,l,i1=0,i5=0;
	cout<<"ingrese l:  "; cin>>l;
	do{
	
	cout<<" ingrese k:  "; cin>>k;
	i1=i1+1;
	c=c+k;
	if(k==1){
	i1=i1+1;
	s1=s1+k;
	}else{
	i5=i5+1;
	s5=s5+k;
	}
	}while(i1==l);
	cout<<"la cantidad de monedas fue:  " <<i1<<endl;
	cout<<"el valor fue:  "<<c<<endl;
	
	cout<<"la cantidad de monedas de s1 fue:  "<<i1<<endl;
	cout<<"el valor fue:  "<<c<<endl;

	cout<<"la cantidad de monedas s5 fue: "<<i5<<endl;
	cout<<"el valor fue: "<<s5<<endl;
	return 0;

}
