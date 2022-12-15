#include <cstdio>
 #include <iostream>
 using namespace std;
int main(int argc, char *argv[]){
	 int Opc;
	 cout << "......................." << endl;
	 cout << "	MENU" << endl;
	 cout << ".....1. Programa 1....." << endl;
	 cout << ".....2. Programa 2....." << endl;
	 cout << ".....3. Programa 3....." << endl;
	 cout << ".....4. Salir     ....." << endl;
	 cout << "      Elige: " << endl;
	 cin >> Opc;
while(Opc!=4){
if(Opc==1){
	 cout << "........................................" << endl;
	 float a;
	 float b;
	 float c;
	 float d;
	 float e;
	 float mayor;
	 float menor;
	 cout << "5 Numeros enteros e imprime el mayor." << endl;
	 cout << "Digite el primer numero:" << endl;
	 cin >> a;
	 cout << "Digite el segundo numero:" << endl;
	 cin >> b;
	 cout << "Digite el tercer numero:" << endl;
	 cin >> c;
	 cout << "Digite el cuarto numero:" << endl;
	 cin >> d;
	 cout << "Digite el quinto numero:" << endl;
	 cin >> e;
if(a>b){
mayor=a;
}
else{
mayor=b;
}
if(c>mayor){
mayor=c;
}
if(d>mayor){
mayor=d;
}
if(e>mayor){
mayor=e;
}
cout << "El numero mayor es " << mayor << endl;if(a<b){
menor=a;
}
else{
menor=b;
}
if(c<menor){
menor=c;
}
if(d<menor){
menor=d;
}
if(e<menor){
menor=e;
}
cout << "El numero menor es " << menor << endl;}
else if(Opc==2){
	 cout << "........................................" << endl;
	 cout << "Arreglo de 10 numeros e impresion de mayor a menor y visceversa." << endl;
	 int Menor;
	 float Num;
float numeros[10];
	 cout << "........................................" << endl;
	 cout << "Ingresa 10 numeros." << endl;
for(int a=0;a<=9;a=a+1){
	 cout << "Ingrese un numero: " << endl;
	 cin >> Num;
numeros[a]=Num;
}
	 cout << "........................................" << endl;
for(int a3=0;a3<=9;a3=a3+1){
	 int equis;
equis=a3+1;
for(int a4=0;a4<=8;a4=a4+1){
if(numeros[a4]<numeros[equis]){
	 float tmp;
tmp=numeros[equis];
numeros[equis]=numeros[a4];
numeros[a4]=tmp;
}
}
}
	 cout << "........................................" << endl;
	 cout << "Arreglo en orden de mayor a menor:" << endl;
for(int a2=0;a2<=9;a2=a2+1){
cout << numeros[a2]<< endl;
}
	 cout << "........................................" << endl;
	 cout << "Arreglo en orden de menor a mayor:" << endl;
for(int a5=9;a5>=0;a5=a5-1){
cout << numeros[a5]<< endl;
}
	 cout << "........................................" << endl;
}
else if(Opc==3){
	 cout << "........................................" << endl;
	 cout << "Moda, media y mediana de 10 numeros." << endl;
float entrada[10];
float Auxiliar[10];
	 int Numero;
	 int cont;
	 int Posicion;
	 int cont1;
	 int posicionMayor;
	 float Num;
	 cout << "Ingresa 10 numeros: " << endl;
for(int a=0;a<10;a=a+1){
	 cout << "Ingresa un numero: " << endl;
	 cin >> Num;
entrada[a]=Num;
}
for(int cont=0;cont<10;cont=cont+1){
Auxiliar[cont]=0;
}
for(int cont=0;cont<10;cont=cont+1){
Numero=entrada[cont];
Posicion=cont;
for(int cont1=cont;cont1<10;cont1=cont1+1){
if(entrada[cont1]==Numero){
Auxiliar[Posicion]+=1;
}
}
}
	 float Mayor;
	 int Cero;
Cero=0;
Mayor=Auxiliar[Cero];
posicionMayor=0;
for(int cont=0;cont<10;cont=cont+1){
if(Auxiliar[cont]>Mayor){
posicionMayor=cont;
Mayor=Auxiliar[cont];
}
}
	 cout << "........................................" << endl;
	 cout << "..Moda: " << endl;
cout << entrada[posicionMayor]<< endl;
	 int Bandera;
Bandera=0;
for(int a3=0;a3<10;a3=a3+1){
	 int pos;
pos=a3+1;
for(int a4=0;a4<10;a4=a4+1){
if(entrada[a4]<entrada[pos]){
	 float temporal;
temporal=entrada[pos];
entrada[pos]=entrada[a4];
entrada[a4]=temporal;
}
}
}
	 cout << "........................................" << endl;
	 cout << "..Mediana:" << endl;
cout << entrada[5]  << endl;
	 cout << "Y" << endl;
cout << entrada[4]  << endl;
	 float SUMA;
SUMA=0.0;
for(int cont=0;cont<10;cont=cont+1){
SUMA+=entrada[cont];
}
	 float MEDIA;
MEDIA=0.0;
MEDIA=SUMA/10;
	 cout << "........................................" << endl;
cout << "..Media: " << MEDIA << endl;	 cout << "........................................" << endl;
}
else{
	 cout << "Error" << endl;
}
	 cout << "......................." << endl;
	 cout << "	MENU" << endl;
	 cout << ".....1. Programa 1....." << endl;
	 cout << ".....2. Programa 2....." << endl;
	 cout << ".....3. Programa 3....." << endl;
	 cout << ".....4. Salir     ....." << endl;
	 cout << "      Elige: " << endl;
	 cin >> Opc;
}

}

