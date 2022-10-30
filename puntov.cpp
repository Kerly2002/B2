//Creado por Kerly_Castillo
#include<iostream>
using namespace std;
int main()
{
	float KJCP_x,KJCP_s=0,KJCP_vb,KJCP_piva=12,KJCP_viva,KJCP_pdesc=10,KJCP_vdesc,KJCP_vn;
	int KJCP_i=0,KJCP_l;
	cout<<"Ingrese l: ";
	cin>>KJCP_l;
	do{
		cout<<"Ingrese x: ";
		cin>>KJCP_x;
		KJCP_i=KJCP_i+1;
		KJCP_s=KJCP_s+KJCP_x; 
	}while(KJCP_i<KJCP_l);
	KJCP_vb=KJCP_s;
	KJCP_viva=KJCP_vb*KJCP_piva/100;
	KJCP_vdesc=KJCP_vb*KJCP_pdesc/100;
	KJCP_vn=KJCP_vb+KJCP_viva-KJCP_vdesc;
	cout<<"El valor a pagar es de: "<<KJCP_vn<<endl;
	return 0;
	
}
