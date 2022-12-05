// programa que sirve y es creado para contar monedas
                           
// Curso: Tics "B"
// docente: Ing. Stalin Francis


# include < iostream >   // se dice que son componentes de c++ utilizados para que se permita la entrada y salida
utilizando el espacio de  nombres  estándar ;  // se permite dar acceso al espacio de nombre donde se encuentra encerrada las librerias estandar
int  main () // representa el punto de inicio de su ejecucion

{
	flotante x= 0 ,s= 0 ,c1= 0 ,s5= 0 ; // El float sirve como representacion de coma flotante de un numero
				 // en este caso al programa se le agrega par de variables lo cual sirve para el programa que se igualan a 0 con la finalidad de que al momento de ejecutar el programa pueda dar el valor exacto
	int s1= 0 ,l,i1= 0 ,i5= 0 ;
	cout<< " ingrese l:   " ; cin>>l;
	hacer {  
	 // el do-while permite una instrucción o una instrucción compuesta hasta que una expresión especificada sea falsa
	cout<< " ingrese x:   " ; cin>>x;
	i1=i1+ 1 ; // En este momento utilizamos los contadores que nos sirven para incrementar su valor  
	s=s+x;
	if (x== 1 ){ // el if únicamente se especifica y siempre es utilizado cuando se cumple una condición determinada se cumple o también ejecutar muchas condiciones
	i1=i1+ 1 ;
	s1=s1+x;            // Se utiliza ahora si los contadores
	} else {                // la funcion del else es lo mismo verificar si es si o no
	i5=i5+ 1 ;                    // y se utiliza los contadores para poder comprobar si el programa cuenta monedas esta correcto
	s5=s5+x;
	}
	} mientras (i1==l);
	cout<< " la cantidad de monedas fue:   " <<i1<<endl;
	cout<< " el valor fue:   " <<s<<endl;

	cout<< " la cantidad de monedas de s1 fue:   " <<i1<<endl; // la cantidad de la primera moneda
	cout<< " el valor fue:   " <<s<<endl;

	cout<< " la cantidad de monedas s5 fue: " <<i5<<endl; // la cantidad de la segunda moneda
	cout<< " el valor fue: " <<s5<<endl;
	devolver  0 ;                               // se da por finalizado el programa

}
// Programa Finalizado

