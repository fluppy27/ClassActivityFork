#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

int id = fork();
int status;
if(id == 0){
    printf("processsing image data\n");
    exit(12); //random status
}
else if( id > 0){
    waitpid(id, &status, 0);
    printf("controling arm now \n");
}
else{
    printf("fork failed, please try again later \n");
}
}
