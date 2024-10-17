#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){

printf("running smart thermostat\n");


int id = fork();
int fd[2];
pipe(fd);

if(id == 0){
    
    char *args[] ={"./plugin", NULL};
    printf("running plugin\n");
    execv(args[0],args);
    
}
else if( id > 0){
    int count = 0;
    while(count < 100){
        if ((count % 10) == 1)
    printf("smart home device running normally \n");
    count++;
    }

    char buffer [100];
    FILE *filePtr = fopen("./temp.txt", "r");
    if(filePtr == NULL){
        printf("error with fill opening");
    }
    size_t bytesRead = fread(buffer, 1, 100, filePtr);
    fclose(filePtr);
    printf("weather values are as follows %s \n", buffer);
    remove("./temp.txt");
}
else{
    printf(" fork failed");
}

}