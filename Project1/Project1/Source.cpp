//#include<iostream>
#include<stdio.h>
//#include<stdlib.h>
int main(int argc, char** argv)//Argc diu quants argument t� i el argv els guarda. ARG te un 1 perque quan s'executa obt� 1 i si fos char amb un * nom�s podriem guardar un argument.
{//unsing(sense signe) char (per tant, el char no pot tenir valors negatius i vol dir que tinc el doble de resoluci�)( 0 positiu i 1 negatiu)-> byte -> 256
//Un char per caracters.
//char *c guarda una posici�/direcci� de memoria d'una variable. Un punter char es pr�ctic per guardar cadenas i en el moment que trobi un 0 en la cadena, la cadena s'acaba.
//printf (%s,pc) es per cadenes. Una cadena es un munt de memoria que acaba en '\0'.
	char pc[10] = "Hola";//Estem definin que volem 10 caracters y que en guardi 10.
	printf("%s", &pc[2]);//Per mostrar la paraula. Posan un n�mero i el signe m�s en la variable ens adelantem a escriure desde la posici� n�mero que posem. En aquest cas llegirem desde la posici� dos.
	//Formas de decir desde quina posici� llegir una cadena:
	//printf("%s", pc + 1); LLegim desde la segona posici�
	//printf("%s", &pc[1]); Llegim desde la segona posici� tamb�.
	getchar();//com el system("Pause"); 
	return 0;
}
//Un char ocupa un byte i un punter m�s.
//Cadena = char*.