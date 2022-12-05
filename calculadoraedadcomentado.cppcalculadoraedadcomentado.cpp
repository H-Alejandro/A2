//programa que sirve  para calcular edad
//nombre: Héctor  Hurtado
//Curso: Tics "B"
                        //docente:Ing.Stalin Francis

#include<iostream>  //se dice que son componentes de c++ utilizados para que se permita la entrada y salida
using namespace std; // se permite dar acceso al espacio de nombre donde se encuentra encerrada las librerias  estandar
int main() //representa el punto de inicio de su ejecucion


{
	int aa,ma,da,an,mn,dn,a,m,d; //En este caso declaramos las variables pero tambien utilizamos el int que representa todos los numeros enteros en cierto intervalos especificos
	cout<<"ingrese la fecha actual: "; //Se ingresa la fecha actual 
	cin>>aa>>ma>>da;

	cout<<"ingrese la fecha de nacimiento:  "; //Se ingresa la fecha de nacimiento
	cin>>an>>mn>>dn;
	if(da>dn){                        //El float sirve como representacion de coma flotante de un numero
		d=da-dn;

	}else{            //se aplica lo mismo de numeros flotamtes
		da=da+30;
		ma=ma-1;
		d=da-dn;

	}
	if(ma>mn){                // Se aplica otra vez el if en este programa
		m=ma-mn;
	}else{       // se aplica otra vez el else
		ma=ma+12;
		aa=aa-an;
		m=ma-mn;
	}
	a=aa-an;
	cout<<"usted tiene:  "<<a<<"años,"<<d<<"meses,"<<d<<"dias,"<<endl;  //da el resultado de cuantos años, meses dias el usuario puede tener 
	return 0;                               //se da por finalizado el programa y se comprueba si es factible

}
//Programa Finalizado
