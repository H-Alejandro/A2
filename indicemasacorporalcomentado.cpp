      //programa creado para el peso de la persona usando el peso y la altura
//nombre: Héctor Hurtado
//Curso: Tics "B"
//docente:Ing.Stalin Francis


#include<iostream> //se dice que son componentes de c++ utilizados para que se permita la entrada y salida llamada a librerias
using namespace std; // se permite dar acceso al espacio de nombre donde se encuentra encerrada las librerias estandar
int main()
	{
		float imc,peso,altura; //El float sirve como representacion de coma flotante de un numero en este caso se declaran las variables para el calulo de imc, peso y altura
		cout<<"Ingrese el peso (Kg) : "; cin>>peso;
		cout<<"Ingrese la altura (metros) : "; cin>>altura;  //se determina el ingreso del peso para comprobar el indice de masa corporal
		imc=peso/(altura*altura);
		if(imc<18.5){
			cout<<"Usted tiene bajo peso"<<endl;
		}
		if (imc>=18.5 && imc<24.9){
			cout<<"Usted tiene peso normal"<<endl;                 // esto puede tener ciertas etapas donde el usuario pueda registrase y saber cuando porcentaje tiene en escala de tener un cuerpo saludable
		}
		if(imc>=25 && imc<26.9){
			cout<<"Usted tiene sobrepeso grado I "<<endl;
		}
		if (imc>50){
			cout<<"Usted tiene obesidad tipo iv (extrema)  "<<endl;  // a travez de esto puede determinarse si la persona podria necesitar tratamiento contra el sobrepeso que podria ser letal para su vida
		}
return 0;
	}                                               // Una vez hecho todo esto se da por finalizado el programa

//Programa Finalizado
