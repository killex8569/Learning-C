#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>
#include <signal.h>
#include <sys/shm.h>
#include <sys/stat.h>

int main()
{
    srand(time(NULL));
    int nb = rand() % 100;
    int rep = 0, tentatives = 0;

    
    while (rep != nb){
        printf("Votre nombre : ");
        scanf("%d", &rep);
        sleep(1);
        if (rep > nb){
            printf("Votre nombre est trop grand !\n");
            tentatives++;
        } else if (rep < nb){
            printf("Votre nombre est trop petit\n");
            tentatives++;
        }else{
            printf("Vous avez trouver le nombre, vous avez gagner !\n");
            printf("vous avez eu besoins de : %d\n", tentatives+1);
        }

    }

    return 0;
}
