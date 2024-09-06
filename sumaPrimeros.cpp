#include <iostream>

using namespace std;


int sumaPrimeros(int n){
	int resp;
	if(n==0){
		
		resp= 0;
		
	}else{
		resp= n+sumaPrimeros(n-1);
	}
	return resp;
}
int main(){
	int n;
	cout<<"INTRODUZA LOS n PRIMEROS NUMEROS A SUMAR:"<<endl<<"n:  ";
		cin>>n;
	
	while(n<0){
		cout<<"intente nuevamente: ";
		cin>>n;
	}
	
	cout<<"Resultado: "<<sumaPrimeros(n);
	return 0;
}

