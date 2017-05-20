#include <stdio.h>

char * convert_string(char * str, size_t len)
{
	char * start	= str;
	char * end		= str + len -1;
	char ch;

	if(str != NULL){
		while(start < end){
			ch			= *start;
			*start++	= *end;
			*end-- 		=  ch;
		}
	}
	return str;
}

int main()
{
	char src[] = "abcdefg";
	char *d = convert_string(src,3);
	printf("%s",d);
	return 0;
}
