#include <iostream>
using namespace std;

void soma (int numero){
	
	int armazena = 0;
	
	do{
		armazena = armazena + (numero % 10);
		numero = numero / 10;
	}while(numero > 0);
	
	cout << "A soma dos d�gitos �: " << armazena;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	cout << "Isira um n�mero: ";
	cin >> numero;
	
	soma(numero);
}
