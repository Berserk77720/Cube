#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	float IMC, peso, altura;
	char nome [10];
	char opc, des;
	
	
	
	inicio:
	system("cls");	
	
	
	
	cout <<"       ### Software Calculo IMC v1.2 - Desenvolvido Por @Jeann Santtos ###\n\n\n" << des ;
	cout <<"\nInforme seu Nome:  ";
	cin >> nome;
	cout <<"\nInforme seu Peso  \n(ex: 00Kg) :  ";
	cin >> peso;
	cout <<"\nInforme sua Altura \n(ex: 0.00cm) :  ";
	cin >> altura;
	
	system("cls");
	
	IMC = peso / pow (altura,2);
	
	cout <<"       ### Software Calculo IMC v1.2 - Desenvolvido Por @Jeann Santtos ###\n\n\n" << des ;
	cout <<"\nNome: " << nome;

	
	if(IMC <= 16){
		cout <<"\n\n\n### MAGREZA GRAVE! ###  \n\nPossiveis Consequencias:";
	    cout <<"\nInsuficiencia cardiaca, anemia grave, \nenfraquecimento do sistema imunologico.\n\nSeu IMC e: ";
	    
		                                                    }else if(IMC <= 17){
		                                                      cout <<"\n\n\n### MAGREZA MODERADA! ### \n\nPossiveis Consequencias:";
	                                                          cout <<"\nInfertilidade, queda de cabelo, falta da menstruacao.\n\nSeu IMC e: ";
	                                                          cout << IMC;
	        
	        
                                                }else if(IMC <=17.5 or IMC <= 18.5){
			                                      cout <<"\n\n\n### MAGREZA LEVE! ### \n\nPossiveis Consequencias:";
	                                              cout <<"\nEstresse, ansiedade, fadiga.\n\nSeu IMC e: ";
	                                              cout << IMC;
	        
	                                   }else if(IMC <= 19 or IMC <= 25){
			                             cout <<"\n\n\n### SAUDAVEL! ### \n\nPossiveis Consequencias:";
	                                     cout <<"\nMenor risco de doencas.\n\nSeu IMC e: ";
	                                     cout << IMC;
	        
	                           }else if(IMC <= 25.5 or IMC <= 30){
		                  	     cout <<"\n\n\n### SOBREPESO! ### \n\nPossiveis Consequencias:";
	                             cout <<"\nFadiga, varizes, ma circulacao.\n\nSeu IMC e: ";
	                             cout << IMC;
	      
		               }else if(IMC <= 30.5 or IMC <= 35){
		                 cout <<"\n\n\n### OBESIDADE GRAU I ! ### \n\nPossiveis Consequencias:";
	                     cout <<"\nDiabetes, Infarto, angina, aterosclerose.\n\nSeu IMC e: ";
	                     cout << IMC; 
		  
	           }else if(IMC <= 35.5 or IMC <= 40){
			     cout <<"\n\n\n### OBESIDADE GRAU II(Severa)! ### \n\nPossiveis Consequencias:";
	             cout <<"\nApneia do Sono, falta de ar.\n\nSeu IMC e: ";
	             cout << IMC;
		  
		}else if(IMC >=40.5){
		  cout <<"\n\n\n### OBESIDADE GRAU III(Morbida)! ### \n\nPossiveis Consequencias:";
	      cout <<"\nRefluxo, Infarto, AVE, Dificuldade de Locomocao, escaras.\n\nSeu IMC e: ";
	      cout << IMC;  
		   
   }
	
	       {
	     
		 	cout << "\n\n\nDeseja Realizar uma Nova Consulta?  [s/n]: ";
            cin >> opc;
            
       }
	     
		 if(opc == 's' or opc=='S'){
          
		  goto inicio;
         
         	 }else (opc != 's' && opc != 'n' or opc != 'S' && opc != 'N');
	 	 	  
				cout << "\nSISTEMA ENCERRADO!";	
	
	return 0;
}
