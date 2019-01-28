/*leggere e aggiornare un file di testo con nuovi valori*/
#include <stdio.h>

int main () 
{
    int valore,somma;
    FILE *file;
    
    printf("inserisci un valore intero");
    scanf("%d",&valore);
   
    file = fopen("file", "r");
    if (!file) 
        printf("file inesistente: creazione in corso");
    else 
    {
        fscanf(file, "%d", &somma);
        somma += valore;
    }
    
    fclose(file);

    file = fopen("file", "w");
    fprintf(file, "%d", somma);

    fclose(file);

    return 0;

}
    

    