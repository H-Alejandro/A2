  //programa que sirve  para conocer el saldo final

//Curso: "Tics B"
                        //docemte: Ing.Stalin Francis

#include<iostream> //se dice que son componentes de c++ utilizados para que se permita la entrada y salida
using namespace std; // se permite dar acceso al espacio de nombre donde se encuentra encerrada las librerias estandar
int main()

{
	float x,s=0;  //El float sirve como representacion de coma flotante de un numero
	int i=0,l;     // se declaran variables para poder iniciar con la ejecucion del programa
	cout<<"ingrese cantidad de egreso (l):  "; //se prodece a detallar que al momento que se ejecute se ingreseel  valor
		cin>>l;
        cout<<"ingrese saldo inicial (s):  "; // El saldo inicial se tiene que agregar 
	cin>>s;

	do{ 
	  // el do-while permite una instruccion o una instruccion compuesta                                                 hasta que una expresion especificada sea false

	cout<<"ingrese el valor de x:  ";          // Se ingresa el valor de X       
	cout<<"ingrese egreso (x):  ";      // y se egrese tambien el valor de x
	cin>>x;
	i=i+1; //se utiliza el acumulador por que sirve para incrementar su valor de forma variable dentro de un ciclo                                         
	s=s+x;
	} while(i<l);     //este programa sirve para  calcular lo que viene siendo el saldo final utilizando los contadores y acomuladores        
	cout<<"el saldo final es:  "<<s<<endl;
	return 0;                  //Una vez haber hecho todo el proceso se procede a ejecutar el programa

}
//Programa Finalizado
