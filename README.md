# Cube
#include <iostream>
#include <stdlib.h>

using namespace std;

/*

4. Calcular a quantidade de dinheiro gasta por um fumante.
Dados: o numero de anos que ele fuma, o numero de cigarros fumados
por dia e o preco de uma carteira.

### EXERCICIO RESOLUCAO - JEANN ICON CODE 21/03/2018 ###

*/

float carteira1, carteira2;

int main ()
{
	int dinheiro, cigarro1, cigarro2, ano1, ano2, ano3, dias;
	float price1, price2;
	char opc;
	string nome;


    inicio:

	system("cls");



	cout <<"\n\nInforme o preco unitario do cigarro(ex. 0.00):    ";
	cin >> price1;
	cout <<"\n\nEm qual ano voce comecou a fumar? :   ";
	cin >> ano1;
	cout <<"\n\nQuantos cigarros em media voce fuma no dia? :   ";
	cin >> cigarro1;

	{
		ano2 = (2018-ano1);
		price2 = (price1 * cigarro1);

		cout <<"\n\nA quantidade de dinheiro gasta por voce, em cigarros e:   ";
		cout <<price2;
		cout <<"\n\nO tempo em anos que voce fuma e:   ";
		cout <<ano2;
}
		dias = 365;
		ano3 = (ano2 * dias);
		carteira1 = (ano3 * cigarro1) / 40;

		cout <<"\n\nA quantidade de carteiras consumidas:   ";
		cout <<carteira1;

		{

		carteira2 = (carteira1 * price1);

		cout <<"\n\nEm carteiras de cigarros voce gastou a quantia:   ";
	    cout << carteira2;
	}

	 {

	cout << "\n\n\n\nDeseja continuar no Sistema? [s/n]: ";
     cin >> opc;
 }
	if(opc == 's' or opc=='S'){

		  goto inicio;

         	 }else (opc != 's' && opc != 'n' or opc != 'S' && opc != 'N');

				cout << "\nSISTEMA ENCERRADO!";


	return 0;
}
