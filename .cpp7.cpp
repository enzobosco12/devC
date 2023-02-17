#include <iostream>

using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "*************************" << endl ;
	cout << "*********Vamos caçar o Thanos!!!*********" << endl ;
	cout << "*************************" << endl ;
	
	float n,t;
	system("cls");
	
	cout << "selecione o nivel:" <<endl;
	cout << "1= Fácil:" <<endl;
	cout << "2= Médio:" <<endl;
	cout << "3= Difícil:" <<endl;
		cin >> n;
	if( n ==1){
		t = 15;
			cout << "A dificuldade selecionada foi Fácil, você tem" <<t<< "tentativas" << endl ;
	}
	else if (n ==2){
		t = 10;
			cout << "A dificuldade selecionada foi Médio, você tem" <<t<< "tentativas" << endl ;
	}
	else if (n ==3){
		t = 4;
			cout << "A dificuldade selecionada foi Difícil, você tem" <<t<< "tentativas" << endl ;
	}
	
	else{
		cout << "A dificuldade é entre 1 e 3 paiaço, game over" << endl ;
	}
	
	system ("pause");
	system ("cls");
	
	for ( int i=8; i<=t; i++) ;
}
	
	
	
	
