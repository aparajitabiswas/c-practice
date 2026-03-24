#include<stdio.h>
int main(){
    int i = 1;
    arpa:  //label
    printf("%d\n", i);
    i++;

    if(i<=30)
    goto arpa;

  return 0;
}