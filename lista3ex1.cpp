#include <iostream>
using namespace std;

int  compara(int n1, int n2){
	if(n1 > n2) {
		cout << "O 1º numero é maior que o 2º";
	} else if (n1==n2){
		cout << "iguais";
	}else{
		cout << "O 2º numero é maior que o 1º";
	}
}

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2;
	
	cout << "Informe o primeiro número: ";
	cin >> n1;
	
	cout << "Informe o segundo número: ";
	cin >> n2;
	
	compara(n1,n2);
}
