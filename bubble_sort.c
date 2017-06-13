#include <stdio.h>

void bubble(int *arr, int size)
{
    for(int i=0; i<size; i++)
        for(int j=0;j<size-i-1;j++)
            if(arr[j]>arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
}

int main()
{
    int arr[5] = {1,3,5,2,8};
    int len = sizeof(arr)/sizeof(int);
    bubble(arr,len);
    for(int i=0;i<len;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n%d\n",cnt);
    return 0;
}
