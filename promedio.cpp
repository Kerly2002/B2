// Creada por kerly_Castillo
#include<iostream>
using namespace std;
int main()
{
	float KJCP_x,KJCP_pm;
	int KJCP_i=0,KJCP_l;
	cout<<"Ingrese l: ";
	cin>>KJCP_l;
	do{
		cout<<"Ingrese x: ";
		cin>>KJCP_x;
		KJCP_i=KJCP_i+1;
		if(KJCP_x>KJCP_pm){
			KJCP_pm=KJCP_x;
		}
	}while(KJCP_i<KJCP_l);
	cout<<"El promedio maximo de el curso fue: "<<KJCP_pm<<endl<<endl;
	return 0;
}
