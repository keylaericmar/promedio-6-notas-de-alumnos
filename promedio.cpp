promedio-6-notas-de-alumnos

#include <iostream.h>
#include <conio.h>
int main() {
  char nombre [20], apellido [20];
  int nota1, nota2, nota3, nota4, nota5, nota6;//Declarar variables de las notas
  double pn1, pn2, pn3, pn4, pn5, pn6, promedio;//Declarar las variables del porcentaje
  char resp;

  do{
  cout<<"Ingresar el Nombre y Apellido: ";//Escribir el nombre y apellido
  cin>> nombre>>apellido;
  cout<<"Hola, "<<nombre<<" "<< apellido<<". ";

  cout<<"Ingresar tus notas"<<endl;//Escribir las notas

  cout<<"Nota 1: ";
  cin>> nota1;
	if( nota1>20 ) cout<< "ERROR...!! ingrese notas hasta el 20"<<endl;

  cout<<"Nota 2: ";
  cin>> nota2;
	if( nota2>20 )cout<< "ERROR...!! ingrese notas hasta el 20"<<endl;

  cout<<"Nota 3: ";
  cin >> nota3;
	if( nota3 >20 ) cout<< "ERROR...!! ingrese notas hasta el 20"<<endl;

  cout<<"Nota 4: ";
  cin>> nota4;
	if( nota4>20 )cout<< "ERROR...!! ingrese notas hasta el 20"<<endl;

  cout<<"Nota 5: ";
  cin>> nota5;
	if( nota5>20 ) cout<< "ERROR...!! ingrese notas hasta el 20"<<endl;

  cout<<"Nota 6: ";
  cin>> nota6;
	if( nota6>20 ) cout<< "ERROR...!! ingrese notas hasta el 20"<<endl;

  pn1=0.10*nota1; //Porcentaje de la nota al 10%.
  pn2=0.20*nota2; //Porcentaje de la nota al 20%.
  pn3=0.15*nota3; //Porcentaje de la nota al 15%.
  pn4=0.15*nota4; //Porcentaje de la nota al 15%.
  pn5=0.20*nota5; //Porcentaje de la nota al 20%.
  pn6=0.20*nota6; //Porcentaje de la nota al 20%.

  promedio=pn1+pn2+pn3+pn4+pn5+pn6; //promedio total, es la suma de los porcentaje de las 6 notas.
  cout<<"Estes es tu promedio final, "<<nombre<<" "<<apellido<<" :"<<promedio<<endl;

  if( promedio >20 ) cout<< "¡.ERROR.! verifique los Datos ingresado"<<endl;

  cout<<"Deseas consultar otra nota? (si/no) "<<endl;
  resp = getche();

  }
  while (resp=='s'|| resp=='S');

  getch();

  }
