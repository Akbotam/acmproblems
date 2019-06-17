#define mflag '0'
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cstring>
using namespace std;
int main()
{

    char s[255] = { 0 };

    int num = 0;
    while(gets(s)!=" "){
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = i; j < strlen(s); j++)
            if (s[i] == s[j]) num++;
        for (int k = i +1; k < strlen(s); k++)
            if (s[k] == s[i]) s[k] = mflag;
        if (s[i]!=mflag && (s[i]>='a' && s[i]<='z')) printf("%c%c%d \n", s[i],':', num);
        num = 0;
    }
    }
    getch();
    return 0;
}
