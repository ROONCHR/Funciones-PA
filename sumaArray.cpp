#include <iostream>

using namespace std;


int sumaenArray(int lista[],int x){
	int resp;
	if(x==0){
		resp=lista[x];
	}else{
		resp=lista[x]+sumaenArray(lista,x-1);
	}

	return resp;
}
int main(){
	int indice=4;
	int lista[5]={16,5,3,-2,1};
	cout<<"Elementos de la lista:{ ";
	for(int i=0;i<5;i++){
		if(i==4){
			cout<<lista[i];
		}else{
			cout<<lista[i]<<" , ";
		}
		
	}
	cout<<"}"<<endl;
	cout<<"Resultado de suma: "<<sumaenArray(lista,indice);
	return 0;
}

