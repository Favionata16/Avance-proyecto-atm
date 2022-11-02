#include <iostream>
#include<stdlib.h>

using namespace std;



int main() {

    int x=0;
	cout<<"Hola bienvenido!\n";
    while(x!=3){
	
    cout<<"* * * * * * * * * * Menu * * * * * * * * * *"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"*          1. Retiro sin tarjeta           *"<<endl;
    cout<<"*          2. Retiro normal                *"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"** * * * * * * * * * * * * * * * * * * * * *"<<endl;
	cout<<"              Ingrese opcion: ";
    cin >> x;
    
	    switch(x){
	    	
			case 1:{
	    	

		    
			system("pause");
			system("cls");
			break;
			}
			
			case 2:{
			
		    
		    
			system("pause");
			system("cls");
			break;
			}
			
			case 3:{
			system("cls");
				cout <<"Saliendo, hasta luego!"<<endl;
			break;
			}
			
			case 16072004:{
	    		system("cls");
			    int x=0;
				cout<<"Hola bienvenido!\n";
			    while(x!=5){
			    cout<<"* * * * * * * * * * Menu * * * * * * * * * *"<<endl;
			    cout<<"*                                          *"<<endl;
			    cout<<"*          1. Retirar bandejas             *"<<endl;
			    cout<<"*          2. Depositar bandejas           *"<<endl;
			    cout<<"*          3. Saldo Actual                 *"<<endl;
			    cout<<"*          4. Resumen del dia              *"<<endl;
			    cout<<"*          5. Regresar                     *"<<endl;
			    cout<<"*                                          *"<<endl;
			    cout<<"** * * * * * * * * * * * * * * * * * * * * *"<<endl;
				cout<<"              Ingrese opcion: ";
			    cin >> x;
			    
				    switch(x){
				    	
						case 1:{
				    	
						
						system("pause");
						system("cls");
						break;
						}
						
						case 2:{
				    	
						
						system("pause");
						system("cls");
						break;
						}
						
						case 3:{
				    	
						
						system("pause");
						system("cls");
						break;
						}
						
						case 4:{
				    	
					
						system("pause");
						system("cls");
						break;
						}
						
						case 5:{
						system("cls");
							cout <<"Regresando...."<<endl;
						break;
						}
						
						default:{
						
							cout<<"Esa opcion no existe!"<<endl;
							system("pause");
							system("cls");
							break;
						}
					}
				}
		    
			system("pause");
			system("cls");
			break;
			}
			
			default:{
			
				cout<<"esa opcion no existe!"<<endl;
				system("pause");
				system("cls");
				break;
			}
		}
	}
    
    return 0;
}