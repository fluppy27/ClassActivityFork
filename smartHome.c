#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
int count = 0;
while(count < 10){
    printf("checking door status\n");
    count++;
}
int id = fork();
if(id == 0){
    printf("notification to phone sent \n");
}
else if( id > 0){
    printf("the alarm is sounding ring ring\n");
}
else{
    printf("fork failed, please try again later\n");
}
}