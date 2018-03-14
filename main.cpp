#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int swap_(int *d,int *c){
    int temp = *d;
    *d = *c;
    *c = temp;
    return 0;
}

int main(){

    int a = 3, b = 5;

    swap_(&a,&b);
    printf("a: %d\nb: %d\n", a,b);

}

