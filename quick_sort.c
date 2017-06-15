#include <stdio.h>
/*
int adjust_array(int s[], int l, int r)
{
    int i=l, j=r;
    int x = s[l];
    while(i < j){
        while(i < j && s[j] > x)
            j--;
        if(i < j){
            s[i] = s[j];
            i++;
        }

        while(i <j && s[i] < x)
            i++;
        if(i < j){
            s[j] = s[i];
            j--;
        }
    }
    s[i] = x;
    return i;
}

int quick_sort(int s[], int l, int r)
{
    if(l < r){
        int i = adjust_array(s, l, r);
        quick_sort(s, l, i-1);
        quick_sort(s, i+1, r);
    }
}
*/

void quick_sort(int s[], int l, int r)
{
    if(l < r){
        int i=l, j=r, x=s[l];
        while(i < j){
            while(i < j && s[j] >= x)
                j--;
            if(i < j)
                s[i++] = s[j];

            while(i<j && s[i] <= x)
                i++;
            if(i < j)
                s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i-1);
        quick_sort(s, i+1, r);
    }
}

int main()
{
    int s[] = {7,5,3,2,1,4,6};
    int len = sizeof(s)/sizeof(int);
    quick_sort(s,0,len-1);
    for(int i=0;i<len;i++){
        printf("%d\t",s[i]);
    }
    return 0;
}
