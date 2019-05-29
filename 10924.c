#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, k, len1, len2, s, s1, s2, d, c;
    char a[30],b[30];
    while(scanf("%s",&a)!=EOF)
    {
        gets(b);
        k=0;
        len1=strlen(a);
        len1=len1-1;
        len2=strlen(b);
        len2=len2-1;
        for(i=0; i<=len1; i++)
        {
            if(a[i]=='a'||a[i]=='A')
            k=k+1;
            else if(a[i]=='b'||a[i]=='B')
            k=k+2;
            else if(a[i]=='c'||a[i]=='C')
            k=k+3;
            else if(a[i]=='d'||a[i]=='D')
            k=k+4;
            else if(a[i]=='e'||a[i]=='E')
            k=k+5;
            else if(a[i]=='f'||a[i]=='F')
            k=k+6;
            else if(a[i]=='g'||a[i]=='G')
            k=k+7;
            else if(a[i]=='h'||a[i]=='H')
            k=k+8;
            else if(a[i]=='i'||a[i]=='I')
            k=k+9;
            else if(a[i]=='j'||a[i]=='J')
            k=k+10;
            else if(a[i]=='k'||a[i]=='K')
            k=k+11;
            else if(a[i]=='l'||a[i]=='L')
            k=k+12;
            else if(a[i]=='m'||a[i]=='M')
            k=k+13;
            else if(a[i]=='n'||a[i]=='N')
            k=k+14;
            else if(a[i]=='o'||a[i]=='O')
            k=k+15;
            else if(a[i]=='p'||a[i]=='P')
            k=k+16;
            else if(a[i]=='q'||a[i]=='Q')
            k=k+17;
            else if(a[i]=='r'||a[i]=='R')
            k=k+18;
            else if(a[i]=='s'||a[i]=='S')
            k=k+19;
            else if(a[i]=='t'||a[i]=='T')
            k=k+20;
            else if(a[i]=='u'||a[i]=='U')
            k=k+21;
            else if(a[i]=='v'||a[i]=='V')
            k=k+22;
            else if(a[i]=='w'||a[i]=='W')
            k=k+23;
            else if(a[i]=='x'||a[i]=='X')
            k=k+24;
            else if(a[i]=='y'||a[i]=='Y')
            k=k+25;
            else if(a[i]=='z'||a[i]=='Z')
            k=k+26;
        }
        s1=0;
        while(k!=0)
        {
            d=k%10;
            s1=s1+d;
            k=k/10;
        }
        if(s1>9)
        {
            k=s1;
            s1=0;
            while(k!=0)
            {
                d=k%10;
                s1=s1+d;
                k=k/10;
            }
        }
        j=0;
        for(i=0; i<=len1; i++)
        {
            if(b[i]=='a'||b[i]=='A')
            j=j+1;
            else if(b[i]=='b'||b[i]=='B')
            j=j+2;
            else if(b[i]=='c'||b[i]=='C')
            j=j+3;
            else if(b[i]=='d'||b[i]=='D')
            j=j+4;
            else if(b[i]=='e'||b[i]=='E')
            j=j+5;
            else if(b[i]=='f'||b[i]=='F')
            j=j+6;
            else if(b[i]=='g'||b[i]=='G')
            j=j+7;
            else if(b[i]=='h'||b[i]=='H')
            j=j+8;
            else if(b[i]=='i'||b[i]=='I')
            j=j+9;
            else if(b[i]=='j'||b[i]=='J')
            j=j+10;
            else if(b[i]=='k'||b[i]=='K')
            j=j+11;
            else if(b[i]=='l'||b[i]=='L')
            j=j+12;
            else if(b[i]=='m'||b[i]=='M')
            j=j+13;
            else if(b[i]=='n'||b[i]=='N')
            j=j+14;
            else if(b[i]=='o'||b[i]=='O')
            j=j+15;
            else if(b[i]=='p'||b[i]=='P')
            j=j+16;
            else if(b[i]=='q'||b[i]=='Q')
            j=j+17;
            else if(b[i]=='r'||b[i]=='R')
            j=j+18;
            else if(b[i]=='s'||b[i]=='S')
            j=j+19;
            else if(b[i]=='t'||b[i]=='T')
            j=j+20;
            else if(b[i]=='u'||b[i]=='U')
            j=j+21;
            else if(b[i]=='v'||b[i]=='V')
            j=j+22;
            else if(b[i]=='w'||b[i]=='W')
            j=j+23;
            else if(b[i]=='x'||b[i]=='X')
            j=j+24;
            else if(b[i]=='y'||b[i]=='Y')
            j=j+25;
            else if(b[i]=='z'||b[i]=='Z')
            j=j+26;
        }
        s2=0;
        while(j!=0)
        {
            c=j%10;
            s2=s2+c;
            j=j/10;
        }
        if(s2>9)
        {
            j=s2;
            s2=0;
            while(j!=0)
            {
                c=j%10;
                s2=s2+c;
                j=j/10;
            }
        }
        if(s1>s2)
        s=(float)s2*100/(float)s1;
        else
        s=(float)s1*100/(float)s2;
        printf("%0.2f %%\n",s);
    }
    return 0;
}
