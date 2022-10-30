// Creada por kerly_Castillo
#include <iostream>
using namespace std;
int main  ()
{
	float KJCP_x,KJCP_s= 0 ;
	int KJCP_i= 0 ,KJCP_l;
	cout<< " Ingrese cantidad de egrasos (1) : " ;
	cin>>KJCP_l;
	cout<< " Ingrese el saldo inicial (s) : " ;
	cin>>KJCP_s;
	do {
		cout<< " Ingreso egreso (x) : " ;
		cin>>KJCP_x;
		KJCP_i=KJCP_i+ 1 ;
		KJCP_s=KJCP_s+KJCP_x;
	} while (KJCP_i<KJCP_l);
	cout<< " El saldo final es: " <<KJCP_s<<endl;
	return  0 ;

}
