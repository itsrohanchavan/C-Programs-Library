/* factorial_recursion.c */
#include <stdio.h>
long fact(int n){ if(n<=1) return 1; return n*fact(n-1); }
int main(){
    int n = 6;
    printf("fact(%d) = %ld\n", n, fact(n));
    return 0;
}
