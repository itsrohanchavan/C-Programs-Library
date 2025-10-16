/* bubble_sort.c */
#include <stdio.h>
int main() {
    int a[] = {5,2,9,1,5,6}, n = 6, i, j, tmp;
    for(i=0;i<n-1;i++)
      for(j=0;j<n-i-1;j++)
        if (a[j]>a[j+1]) { tmp=a[j]; a[j]=a[j+1]; a[j+1]=tmp; }
    printf("Sorted: ");
    for(i=0;i<n;i++) printf("%d ", a[i]);
    return 0;
}
