#include <stdio.h>

void insert(int *arr, int size)
{
    for(int j=1;j<size;j++){
        int key = arr[j];
        int i   = j - 1;
        while(i>=0 && arr[i] > key){
            arr[i+1] = arr[i];
            i--;
        }
        arr[++i] = key;
    }
}

int main()
{
    int arr[5] = {1,3,5,2,8};
    int len = sizeof(arr)/sizeof(int);
    insert(arr,len);
    for(int i=0;i<len;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
