#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int nb = 0;

    srand(time(NULL));
    while(1){
        nb = rand() % 900;
        printf("Nombre aléatoire : %d\n", nb);
        sleep(1);
    }



    return 0;
}
