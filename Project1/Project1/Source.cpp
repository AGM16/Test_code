//#include<iostream>
#include<stdio.h>
//#include<stdlib.h>
int main(int argc, char** argv)//Argc diu quants argument té i el argv els guarda. ARG te un 1 perque quan s'executa obté 1 i si fos char amb un * només podriem guardar un argument.
{//unsing(sense signe) char (per tant, el char no pot tenir valors negatius i vol dir que tinc el doble de resolució)( 0 positiu i 1 negatiu)-> byte -> 256
//Un char per caracters.
//char *c guarda una posició/direcció de memoria d'una variable. Un punter char es pràctic per guardar cadenas i en el moment que trobi un 0 en la cadena, la cadena s'acaba.
//printf (%s,pc) es per cadenes. Una cadena es un munt de memoria que acaba en '\0'.
	char pc[10] = "Hola";//Estem definin que volem 10 caracters y que en guardi 10.
	printf("%s", &pc[2]);//Per mostrar la paraula. Posan un número i el signe més en la variable ens adelantem a escriure desde la posició número que posem. En aquest cas llegirem desde la posició dos.
	//Formas de decir desde quina posició llegir una cadena:
	//printf("%s", pc + 1); LLegim desde la segona posició
	//printf("%s", &pc[1]); Llegim desde la segona posició també.
	getchar();//com el system("Pause"); 
	return 0;
}
//Un char ocupa un byte i un punter més.
//Cadena = char*.