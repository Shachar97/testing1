#include <stdio.h>
int main(){
    char s1[] = "MyNameIs Shachar";
    char s2[50] = "ILoveIsrael ";
    char s3[] = {'I','L','o','v','e','J','\0'};
    printf("%s\n%s%s",s1,s2,s3);
    return 0;
}