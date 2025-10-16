/* linear_search.c */
#include <stdio.h>
int main() {
    int arr[] = {3,6,1,9,2}, n=5, i, key=9;
    for(i=0;i<n;i++){
        if (arr[i]==key) { printf("Found at index %d\n", i); return 0; }
    }
    printf("Not Found\n");
    return 0;
}
