#include <stdio.h>
#define n 10
void print(int arr[]){
    int i=0;
    for (i=0 ; i<n;i++){

        printf("%d , ",arr[i]);
    }
}
void selectionsort(int arr[]){

    int i,j,temp;
    int small;
    for (i = 0; i<n-1 ; i++){
        small = i;

        for (j = i+1; j<n; j++){
            if(arr[small] > arr[j]){
                small = j;
            }
        }
            if (i != small){
                temp     = arr[i];
                arr[i] = arr[small];
                arr[small]   = temp;
            }
        
      
        printf("\nAfter iteration %d :",i+1);
        print(arr);

    }
}


int main(){

    int arr[n]={4,7,2,10,15,12,8,9,3,11};

    print(arr);
    selectionsort(arr);
    printf("\n Sorted array\n");
    print(arr);
    return 0;
}