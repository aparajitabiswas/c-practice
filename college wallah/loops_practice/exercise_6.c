//Question: Display this AP-4,7,10,13,16,.... upto 'n' terms

/*

ap---arithmatic progression
4,7,10,13,16,........
a,a+d,a+2d,a+3d,a+4d,.........,a+(n-1)d    |   here, a = first term     d = common difference     n th = a+(n-1)d
so, a (n) = a+(n-1)d
         = 4+(n-1)3
         = 3n+1

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    for(int i=4; i<=(3*n)+1; i=i+3)
    {
    printf("%d ", i);
    }
    return 0;

}