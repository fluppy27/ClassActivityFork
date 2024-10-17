#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){

printf(" plugin downlaoded\n");


int id,fd2,num;

char buffer[100];

    printf("plugin complete, sending data\n");
    char * str = "12 degrees, sunny with wind chill";
    //strcpy(buffer, str);
    
    FILE *fp = fopen("temp.txt", "w");
    fprintf(fp, "12 degrees, sunny with wind chill\n");
  
  //printf("test?\n");
    fclose(fp);

}