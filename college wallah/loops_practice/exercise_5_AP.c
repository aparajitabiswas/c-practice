//Question: Display this AP-1,3,5,7,9,.... upto 'n' terms

/*

ap---arithmatic progression
1,3,5,7,9,11,........
a,a+d,a+2d,a+3d,a+4d,.........,a+(n-1)d    |   here, a = first term     d = common difference     n th = a+(n-1)d
so, a (n) = a+(n-1)d
         = 1+(n-1)2
         = 2n-1

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    for(int i=1; i<=(2*n)-1; i=i+2)
    printf("%d ", i);

    return 0;

}