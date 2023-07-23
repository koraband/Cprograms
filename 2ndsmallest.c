#include <stdio.h>
int main(){
    int smallest, second_smallest;
    int array[100],size,i;
    printf("\n how many elements do you want to enter :");
    scanf("%d", &size);
    printf("\n enter %d elements :", size);
    for(i = 0; i < size; i++)
    scanf("%d", &array[i]);
    if(array[0], array[1]){
        smallest = array[0];
        second_smallest = array [1];
    }
    else{
        smallest = array[1];
        second_smallest = array[0];
    }
    for(i=2; i < size; i++){
        second_smallest = smallest;
        smallest = array [i];
    }
    printf("\nsecond smallest element is %d, second smallest");
}