#include<stdio.h>
#include<string.h>
int main()
{
    int i=1;
    char a[14];
    while(gets(a))
    {
        if(strcmp(a,"#")==0)
        {
            break;
        }
        else if(strcmp(a,"HELLO")==0)
        {
            printf("Case %d: ENGLISH\n",i);
            i=i+1;
        }
        else if(strcmp(a,"HOLA")==0)
        {
            printf("Case %d: SPANISH\n",i);
            i=i+1;
        }
        else if(strcmp(a,"HALLO")==0)
        {
            printf("Case %d: GERMAN\n",i);
            i=i+1;
        }
        else if(strcmp(a,"BONJOUR")==0)
        {
            printf("Case %d: FRENCH\n",i);
            i=i+1;
        }
        else if(strcmp(a,"CIAO")==0)
        {
            printf("Case %d: ITALIAN\n",i);
            i=i+1;
        }
        else if(strcmp(a,"ZDRAVSTVUJTE")==0)
        {
            printf("Case %d: RUSSIAN\n",i);
            i=i+1;
        }
        else
        {
            printf("Case %d: UNKNOWN\n",i);
            i=i+1;
        }
    }
    return 0;
}
