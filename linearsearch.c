#include <stdio.h>

int findElement(int arr[], int size, int element){
	int i;
    for ( i = 0; i<size; i++)
        if ( arr[i] == element)
            return i;
    return -1;
}

int main(){
    int i;
    int arr[11];
     for(i=0;i<11;i++)
        scanf("%d",&arr[i]);
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int searchElement, result;
    scanf("%d", &searchElement);
    result = findElement(arr, arrSize, searchElement);
    if ( result!= -1)
        printf("Found @ location %d", result+1);
    else
        printf("Not Found");
    return 0;
}

