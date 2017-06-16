#include <stdio.h>

void select_sort(int s[], int len)
{
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(s[j] < s[i]){
                int tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
}

int main()
{
    int s[] = {7,5,3,2,1,4,6};
    int len = sizeof(s)/sizeof(int);
    select_sort(s,len);
    for(int i=0;i<len;i++){
        printf("%d\t",s[i]);
    }
    return 0;
}
