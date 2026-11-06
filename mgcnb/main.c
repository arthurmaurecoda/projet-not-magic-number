#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//main
int main() {


//attribue un nombre random entre 1 et 100 à random_number
    srand(time(NULL));
    int random_number = rand() % 100 + 1; 

    
    int guess;

//dit a l'user d'ecrire un nombre
    printf("choisissez un nombre entre 1 et 100: "); 
//attribue le nombre à guess
    scanf("%d", &guess); 


//boucle tant que le guess n'est pas bon
    while (guess != random_number) {

//tant que le nombre guess est incorrect (inférieur), il redemande de guess
        if (guess < random_number) { 
        printf("C'est plus.\n");
        printf("choisissez un nombre entre 1 et 100: ");
        scanf("%d", &guess);
        } 
        
//tant que le nombre guess est incorrect (supérieur), il redemande de guess
            else if (guess > random_number) {
            printf("C'est moins.\n");
            printf("choisissez un nombre entre 1 et 100: ");
            scanf("%d", &guess);
        }
}

//si le nombre est correct, user est félicité
if (guess == random_number) {
        printf("Félicitations! Vous avez deviné le nombre %d.\n", random_number);
        } 
}