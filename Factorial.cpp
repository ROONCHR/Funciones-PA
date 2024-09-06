#include <iostream>

using namespace std;


int factorial(int n){
	int resp;
	if(n==0){
		
		resp= 1;
		
	}else{
		resp= n*factorial(n-1);
	}
	return resp;
}
int main(){
	int x;
	cout<<"INTRODUZA EL NUMERO A EVALUAR SU FACTORIAL:"<<endl<<"NUMERO:  ";
	cin>>x;
	
	cout<<"Resultado: "<<factorial(x);
	return 0;
}

