#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int invertirCadena(char cadena[]);

int ordenarCaracteres(char cadena[]);

int main()
{
    char cadena[200];

   printf("Introduce una cadena de texto: \n");
    gets(cadena);
    printf("\nLa cadena introducida es: %s\n\n", cadena);

    invertirCadena(cadena);


    printf("%s",cadena);

    return 0;
}

int invertirCadena(char cadena[]){

int todoOk = 0;
    int i = 0;
    int j;

if (cadena != NULL){

    while(cadena[i]!= '\0'){
        i++;
    }
    printf("La cadena al reves es:\n\t");
    for (j=i-1; j>=0; j--){
        printf("%c", cadena[j]);
    }
   todoOk = 1;
}

return todoOk;
}

int ordenarCaracteres(char cadena[]){

int todoOk = 0;
int cantidad = strlen(cadena);
 char aux;


 if (cadena != NULL){

    for(int i = 0; i < cantidad ; i++ ){
     for(int j = 1; j < cantidad; j++){


        if(cadena[i] > cadena[j]){

            aux = cadena[i];
            cadena[i] = cadena[j];
            cadena[j] = aux;


        }

    }

    }


 todoOk = 1;
    }



 return todoOk;
}
