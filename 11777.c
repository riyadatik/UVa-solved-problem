#include<stdio.h>
int main()
{
    int n,i,term1,term2,final,att,class_test1,class_test2,class_test3,a,b,c,max,total;
    scanf("%d", &n);
    for(i=1; i <= n; i++)
    {
        scanf("%d%d%d%d%d%d%d", &term1, &term2, &final, &att, &class_test1, &class_test2, &class_test3);
        a=(class_test1 + class_test2)/2;
        b=(class_test1 + class_test3)/2;
        c=(class_test2 + class_test3)/2;
        if(a>b)
        {
            if(a>c)
            {
                max = a;
            }
            else
            {
                max = c;
            }
        }
        else
        {
            if(b>c)
            {
                max = b;
            }
            else
            {
                max = c;
            }
        }
        total = term1 + term2 + final + att + max;
        if(total >= 90)
        printf("Case %d: A\n",i);
        else if(total>=80)
        printf("Case %d: B\n",i);
        else if(total>=70)
        printf("Case %d: C\n",i);
        else if(total>=60)
        printf("Case %d: D\n",i);
        else if(total<60)
        printf("Case %d: F\n",i);
    }

    return 0;
}
