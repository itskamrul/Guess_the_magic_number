#include <stdio.h>

int main()
{
    int source, target, *m;

    source =10;
    m = &source;
    target = *m;
    // printf("source:%d\nm:%d\ntarget:%d",source,m,target);

    // array
    char s[10];
    s[2]='K';
    s[3]='s';
    printf("%c, %c",s[2],s[3]);
}