#include<iostream>

using namespace std;
mayuscula(char letra){
	if(letra>='a' and letra<='z' ){
		return letra-('a'-'A');
	}
	return letra;
}

int main(){
	char oracion[100];
	cout<<"Ingrese la oracion que desee colocar la primera letra en mayusculas: \n";
	cin.getline(oracion,100);
	oracion[0]=mayuscula(oracion[0]);
	
	for(int i=1; oracion[i]!='\0';i++){
		if(oracion[i]==' '){
			oracion[i+1]=mayuscula(oracion[i+1]);
		}
	}
	cout<<oracion;
	return 0;
}