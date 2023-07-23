#include <stdio.h>
int main()
{
    int arr[] = {25,11,7,75,56};
    int length = sizeof(arr)/(arr[0]);
    int min = arr[0];
    for(int i=0; i < length; i++){
        if(arr[i] < min)
        min = arr[i];
    }
    printf("smallest element present in given array: %d\n", min);
    return 0;
}