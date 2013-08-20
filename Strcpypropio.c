#include<stdio.h>

char copiarcadena(char final[],char origen[])
{
 int i=0;
 while(origen[i])
    {
    final[i]=origen[i];
    i++;
    }


 final[i]='\0';

}

int main()
{
 char uno[]="hola";
 char dos[]="adios";
 char tres[]="buen";

 copiarcadena(dos,uno);
    printf("%s\n",dos);


 copiarcadena(dos,tres);
    printf("%s\n",dos);


 return 0;
}
