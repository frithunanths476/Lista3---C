#include <iostream>
using namespace std;

int  compara(int n1, int n2){
	if(n1 > n2) {
		cout << "O 1� numero � maior que o 2�";
	} else if (n1==n2){
		cout << "iguais";
	}else{
		cout << "O 2� numero � maior que o 1�";
	}
}

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2;
	
	cout << "Informe o primeiro n�mero: ";
	cin >> n1;
	
	cout << "Informe o segundo n�mero: ";
	cin >> n2;
	
	compara(n1,n2);
}
