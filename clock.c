#include <unistd.h> 
#include <stdio.h> 
int main () {
    int h,m,s;
    scanf("%2d:%2d:%2d",&h,&m,&s);
    printf("hour = %d \nminute = %d \nsecond = %d\n ",h,m,s);
};