/*leggere e aggiornare un file di testo con nuovi valori*/
#include <stdio.h>

int main () 
{
    int valore = 0,somma = 0;
    FILE *file;
    
    printf("inserisci un valore intero");
    scanf("%d",&valore);
   
    file = fopen("file", "r");
    if (!file) 
        printf("file inesistente: creazione in corso");

    else 
        fscanf(file, "%d", &somma);
    
    fclose(file);

    somma = somma + valore;

    file = fopen("file", "w");
    fprintf(file, "%d", somma);

    fclose(file);

    return 0;

}
    

    