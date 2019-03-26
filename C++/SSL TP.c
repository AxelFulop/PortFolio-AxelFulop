/*
 ============================================================================
 Name        : SSL.c
 Author      :Fulop Axel 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int esDNC(int c){ //Preguntar por el tipo que recive
   if (c>='1' && c<='9')
      return 1;
      else
         return 0;
}
int esD (int c){
   if (c>='0' && c<='9')
      return 1;
   else
      return 0;
}
int sufijoUnsigned (int c){
   if (c=='u' || c=='U')
      return 1;
      else
         return 0;
}
int sufijoLong (int c){
   if (c=='l' || c=='L')
      return 1;
      else
         return 0;
}
int sufijo(int c){
   if (sufijoUnsigned(c)==1 || sufijoLong(c)==1)
      return 1;
   else
      return 0;
}

int columna(int caracter){
   if(i==0){
      if(esDNC(caracter[i]))
         return 0;
      else
         return 5;
   }
   if(esD(caracter))
      return 1;
   if(sufijo(caracter)){
      if(sufijoUnsigned(caracter))
         return 2;
      if(sufijoLong(caracter))
         return 3;
   }
      }
}
int analizarCadena(char cadena[]){
   int i=0;
   for(i=0;cadena[i]!='\0';i++){
      if(columna(cadena[i])==5)
         return 0;
   }
   return 1;
}

/* Hecho sin la funcion columna
   if (esDNC(cadena [0])==0) //Etapa 0
      return 0;
   for (i=1;esD(cadena[i])==1;i++){ //Etapa 1
   }
   if (sufijo(cadena[i])==0 && cadena [i]!='\0')
      return 0;
   if (sufijo(cadena[i])==1){
      if (sufijoUnsigned(cadena[i])==1) //Etapa 2
         if (sufijoSigned(cadena[i+1])==1 && cadena[i+2]=='\0') //Etapa 4
            return 1;
      if (sufijoSigned(cadena[i])==1) //Etapa 3
         if (sufijoUnsigned(cadena[i+1])==1 && cadena[i+2]=='\0') //Etapa 4
            return 1;
   }
   if (cadena [i]=='\0')
      return 1;
   else
      return 0; //Rechazo
}*/

int main(void) {
	char *cadenas[]={"123","4567L","5a23"};
	while(cadenas!=""){
	   analizarCadena (*cadenas);
	   *cadenas++;
	}

	return 1;
}
