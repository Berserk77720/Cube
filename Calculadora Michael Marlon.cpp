#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

float x,y;
float adic, subtrac, mult, div;
int op;

cout << "Digite a opcao desejada: " << endl;
cout << "========================" << endl;
cout << "(1) Adicao" << endl;
cout << "(2) Subtracao" << endl;
cout << "(3) Multiplicacao" << endl;
cout << "(4) Divisao" << endl;
cout << endl;
cin >> op;

cout << "Digite o primeiro numero: " << endl;
cin >> x;
cout << "Digite o segundo numero: " << endl;
cin >> y;

switch(op){
case 1:
adic = x + y;
cout << "A adicao e: " << adic << endl;
break;

case 2:
subtrac = x - y;
cout << "A subtracao e: " << subtrac << endl;
break;

case 3:
mult = x * y;
cout << "A multiplicacao é: " << mult << endl;
break;

case 4:
div = x / y;
cout << "A Divisao e: " << div << endl;
break;

default:
cout << "Opcao invalida!" << endl;
break;
}
system("PAUSE");
return 0;
}
