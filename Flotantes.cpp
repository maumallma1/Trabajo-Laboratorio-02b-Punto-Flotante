#include<iostream>
#include<bitset>
#include<cmath>
#include<math.h>

using namespace std;
int main(){
	
	cout<<"Punto Float"<<endl;
	float a; //solo valores positivos
	cout<<"Ingresa el valor flotante: "; cin>>a; cout<<"\n";//Se ingresa el valor
	float a2 = a-floor(a); //representa la parte flotante
	float a1 = floor(a); //representa la parte entera
	int i1 = 0; // futuro exponente de 2
	for(int j = 0; j < 32; j++){//determina cuantos bits se usaran para normalizacion
		if(pow(2,j)>a1){
			i1 = j-1;
			break;
		}
		if(pow(2,j)==a1){
			i1 = j;
			break;
		}
	}
	int flotante[23-i1];//array del significando (sin contar los de la normalizacion)
	
	cout<<"\nSu Numero en Patron binario es: ";//Comenzamos a mostrar el numero
	if (a>=0){//Si es positivo o negativo para el primer digito
		cout<<0<<" ";
	}
	else {
		cout<<1<<" ";
	}
	
	int z = 127 + i1;//Numero de exponente de nuestro flotante binario
	bitset<8> z1(z);//mediante bitset seleccionamos el valor Z y lo volvemos binario
	cout<<z1<<" ";//mostramos el exponente final
	
	for(int o = 1;o < 8;o++){//bucle para determinar desde que bit se tomara para rellenar la normalizacion
		if (o == 1 && pow(2,o)>a1){//comprueba si el numero de bits corresponde 
			bitset<0> a1_1(a1);
			cout<<a1_1;
			break;
		}
		else if (o == 2 && pow(2,o)>a1){
			bitset<1> a1_1(a1);
			cout<<a1_1;
			break;
		}	
		else if (o == 3 && pow(2,o)>a1){
			bitset<2> a1_1(a1);
			cout<<a1_1;
			break;
		}
		else if (o == 4 && pow(2,o)>a1){
			bitset<3> a1_1(a1);
			cout<<a1_1;
			break;
		}
		else if (o == 5 && pow(2,o)>a1){
			bitset<4> a1_1(a1);
			cout<<a1_1;
			break;
		}
		else if (o == 6 && pow(2,o)>a1){
			bitset<5> a1_1(a1);
			cout<<a1_1;
			break;
		}
		else if (o == 7 && pow(2,o)>a1){
			bitset<6> a1_1(a1);
			cout<<a1_1;
			break;
		}
	}
	
	for(int i = 0 ; i < 23-i1; i++){//bucle para comparar si la parte flotante del numero al ser multiplicada
		a2 = a2*2;					//por dos es superior o no a 1, de ser el caso de le aumenta 1 al array 
		if(a2<1){					//del significando y se le resta 1, en el caso sea menor a 1, se le agrega
			flotante[i] = 0;		//0 al array del significando
		}
		if(a2>1){
			flotante[i] = 1;
			a2 = a2-1;
		}
		if(a2==1.00){
			flotante[i] = 1;
		}
	}
	for(int i = 0 ; i < 23-i1; i++){//bucle para mostrar el significando
		cout<<flotante[i];
	}
	cout<<endl;
	//Una diferencia que encontre con el float, es que existen ciertos numeros que no se representan como deberían
	//El 0.72 se representa como 0.720001, lo cual hace el final del significando varie con relacion al correcto
	
	cout<<"Punto Double"<<endl;//se hizo exactamente lo mismo pero se cambio el tamaño que soportan las variable
								//y se modificaron el nombre de las variables para que estas no se cruzaran con
								//las variables anteriores
	double aa ;
	cout<<"Ingresa el valor flotante: "; cin>>aa; cout<<"\n";
	double aa2 = aa-floor(aa); //0.15
	double aa1 = floor(aa); 
	
	int ii1 = 0;
	for(int jj = 0; jj < 64; jj++){
		if(pow(2,jj)>aa1){
			ii1 = jj-1;
			break;
		}
		if(pow(2,jj)==aa1){
			ii1 = jj;
			break;
		}
	}
	int Doble[52-ii1];
	
	cout<<"\nSu Numero en Patron binario es: ";
	if (aa>=0){
		cout<<0<<" ";
	}
	else {
		cout<<1<<" ";
	}
	
	int zz = 1023 + i1;
	bitset<11> zz1(zz);
	cout<<zz1<<" ";
	
	for(int oo = 1;oo < 11;oo++){
		if (oo == 1 && pow(2,oo)>aa1){
			bitset<0> aa1_1(aa1);
			cout<<aa1_1;
			break;
		}
		else if (oo == 2 && pow(2,oo)>aa1){
			bitset<1> aa1_1(aa1);
			cout<<aa1_1;
			break;
		}	
		else if (oo == 3 && pow(2,oo)>aa1){
			bitset<2> aa1_1(aa1);
			cout<<aa1_1;
			break;
		}
		else if (oo == 4 && pow(2,oo)>aa1){
			bitset<3> aa1_1(aa1);
			cout<<aa1_1;
			break;
		}
		else if (oo == 5 && pow(2,oo)>aa1){
			bitset<4> aa1_1(aa1);
			cout<<aa1_1;
			break;
		}
		else if (oo == 6 && pow(2,oo)>aa1){
			bitset<5> aa1_1(aa1);
			cout<<aa1_1;
			break;
		}
		else if (oo == 7 && pow(2,oo)>aa1){
			bitset<6> aa1_1(aa1);
			cout<<aa1_1;
			break;
		}
		else if (oo == 8 && pow(2,oo)>aa1){
			bitset<7> aa1_1(aa1);
			cout<<aa1_1;
			break;
		}
		else if (oo == 9 && pow(2,oo)>aa1){
			bitset<8> aa1_1(aa1);
			cout<<aa1_1;
			break;
		}
		else if (oo == 10 && pow(2,oo)>aa1){
			bitset<9> aa1_1(aa1);
			cout<<aa1_1;
			break;
		}
	}
	
	for(int ii = 0 ; ii < 52-ii1; ii++){
		aa2 = aa2*2;
		if(aa2<1){
			Doble[ii] = 0;
		}
		if(aa2>1){
			Doble[ii] = 1;
			aa2 = aa2-1;
		}
		if(aa2==1.00){
			Doble[ii] = 0;
		}
	}
	for(int ii = 0 ; ii < 52-ii1; ii++){
		cout<<Doble[ii];
	}
	cout<<endl;
	//En el caso de la conversion del Double, en una porción diminuta del final del significando, este varia, pero 
	//por error mio a la hora de interpretarlo, no fui capaz de conocer el verdadero motivo tras este error, pero 
	//solo varia en un poco de precision, mas del 90% del numero esta bien representado
	//Comparandolo con el float, el double repite exactamente lo mismo que el float, pero lo complementa como es
	//debido, ya sea con ceros o continuando la representacion de su parte flotante x2.
	
	cout<<"Float a Double"<<endl;
	float a22 = a-floor(a); //variable float con el valor del primer float que hicimos
	int i11 = 0; //futuro exponente
	for(int j = 0; j < 32; j++){//futuro espacio que usara el proximo exponente
		if(pow(2,j)>a1){
			i11 = j-1;
			break;
		}
		if(pow(2,j)==a1){
			i11 = j;
			break;
		}
	}
	int flotanteD[52-i1];//array del significando
	
	cout<<"\nSu Numero en Patron binario es: ";//comprobacion si es positivo o negativo
	if (a>=0){
		cout<<0<<" ";
	}
	else {
		cout<<1<<" ";
	}
	
	int zZ = 127 + i1;//operacion para determinar exponente en float
	bitset<11> z1Z(zZ);//pero en un espacio de un double
	cout<<z1Z<<" ";
	
	for(int oo = 1;oo < 11;oo++){//mismo procedimiento que en cada conversion
		if (oo == 1 && pow(2,oo)>aa1){
			bitset<0> a1_11(a1);
			cout<<a1_11;
			break;
		}
		else if (oo == 2 && pow(2,oo)>aa1){
			bitset<1> a1_11(a1);
			cout<<a1_11;
			break;
		}	
		else if (oo == 3 && pow(2,oo)>aa1){
			bitset<2> a1_11(a1);
			cout<<a1_11;
			break;
		}
		else if (oo == 4 && pow(2,oo)>aa1){
			bitset<3> a1_11(a1);
			cout<<a1_11;
			break;
		}
		else if (oo == 5 && pow(2,oo)>aa1){
			bitset<4> a1_11(a1);
			cout<<a1_11;
			break;
		}
		else if (oo == 6 && pow(2,oo)>aa1){
			bitset<5> a1_11(a1);
			cout<<a1_11;
			break;
		}
		else if (oo == 7 && pow(2,oo)>aa1){
			bitset<6> a1_11(a1);
			cout<<a1_11;
			break;
		}
		else if (oo == 8 && pow(2,oo)>aa1){
			bitset<7> a1_11(a1);
			cout<<a1_11;
			break;
		}
		else if (oo == 9 && pow(2,oo)>aa1){
			bitset<8> a1_11(a1);
			cout<<a1_11;
			break;
		}
		else if (oo == 10 && pow(2,oo)>aa1){
			bitset<9> a1_11(a1);
			cout<<a1_11;
			break;
		}
	}
	
	for(int i = 0 ; i < 52-i1; i++){//bucle que determinara el signficando, pero no lo llenara por completo
									//y mostrara ceros cuando el bucle termine
		a22 = a22*2;
		if(a22<1){
			flotanteD[i] = 0;
		}
		if(a22>1){
			flotanteD[i] = 1;
			a22 = a22-1;
		}
		if(a22==1.00){
			flotanteD[i] = 0;
		}
	}
	for(int i = 0 ; i < 52-i1; i++){//mostrara el significando
		cout<<flotanteD[i];
	}
	//En mi caso, fui capaz de rellenar los valores float en el double, pero los espacios restantes los rellene con 
	//ceros, esto es correcto en el exponiente, pero no estoy del todo seguro si sera correcto en el lado del 
	//significando, C++ lo que hace es simplemente igualarlos, entonces no hay comparacion con el ordenamiento 
	//IEE-754
}