#include<stdio.h>
//#include<stdbool.h>
#define TURE  1
#define FALSE 0
char *find_chars(char const *source,char const *chars);
char *find_chars(char const *source,char const *chars)
{
    char *p1=source;
    char *p2=chars;
    for(;*p2++!=NULL;p1=source)
        for(:*p1++!=NULL;)
            if(*p1=*p2)
                return p1;
    return FALSE;
}
int main()
{
    char source[]={"ABCDEF"};
    char chars[]={"XYZ"};
    if(!find_chars(source,chars))
        printf("%p\n",find_chars(source,chars))
    else printf("NOT FOUND\n");
}