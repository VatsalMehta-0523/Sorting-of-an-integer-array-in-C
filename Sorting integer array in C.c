#include <stdio.h>

void printArr(int arr[], int n){
    for (int i = 0 ; i < n; i++){
        printf("%d ",arr[i]);
    }
}


int main(){
    int n ;
    printf("how many elements are present in the array : ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        printf("enter element of array for position %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nOrignal Array : ");
    printArr(arr , n );


    // sorting array ...
    int temp ;
    for (int i = 0 ; i  < n ; i++){

        for (int j = i+1 ; j < n ; j++){
            if (arr[i] > arr[j]){
                temp = arr[i] ;
                arr[i] = arr[j];
                arr[j] = temp ;
            }

        }
    }



    printf("\nArray after sorting : ");
    printArr(arr , n );


    return 0 ;
}
