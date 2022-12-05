//programa que srive para demostrar el  punto de ventas 
//Curso: "Tics B"
                                     //docente:Ing.Stalin Francis
 
#include<iostream> //se dice que son componentes de c++ utilizados para que se permita la entrada y salida
using namespace std; // se permite dar acceso al espacio de nombre donde se encuentra encerrada las librerias estandar
int main()

{      

	float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn; //El float sirve como representacion de coma flotante de un numero
       // en este caso se utiliza lo que viene siendo los descuentos del iva el cual se lo aplica al momento de ejecutar el programa
      //se declaran las variables 
	int i=0,l;         
	cout<<"ingrese l:  ";cin>>l;  //se prodece a detallar que al momento que se ejecute se ingrese el valor
	do{         // el do-while permite una instruccion o una instruccion compuesta   hasta que una expresion especificada sea false
	
	cout<<"ingrese x:  ";cin>>x;
	i=i+1;
	s=s+x; //se utiliza el acumulador por que sirve para incrementar su valor de forma variable dentro de un ciclo
	                                                 
	
	}while(i<l);
	vb=s;                 //Utilizamos en este momento las variables declaras como el iva y su descuento para poder calcular el total del saldo que se va a cancelar
	viva=vb*piva/100;
	vdesc=vb*pdesc/100;
	vn=vb+viva-vdesc;
	cout<<"el valor a pagar es de:  "<<vn<<endl<<endl;
	return 0;                                              //Se da por finalizado el programa y se procede a ejecutar
                                                     
}

//Programa Finalizado
