#include <iostream>

using namespace std;


int multiplicacion(int m, int n){
	int resp;
	if(n==0){
		
		resp= 0;
		
	}else{
		resp= m+multiplicacion(m,n-1);
	}
	return resp;
}
int main(){
	int x, y;
	cout<<"multiplicando: ";
	cin>>x;
	cout<<endl<<"multiplicador: ";
	cin>>y;
	cout<<endl;
	
	cout<<"Resultado: "<<multiplicacion(x,y);
	return 0;
}

