#include <stdio.h>
void subset(int list[];int tag[]; int n;int len)
void subset(int list[]; int tag[]; int n;int len) {


    if (n == len)
    {
        printf("-->");
        for (int i = 0; i < len; i++)
        {
            if (tag[i] == 1)
                printf("%d",list[i]);
        }

        printf("\n");
        return;
    }
    if (tag[n] )
    subset(list, tag, n + 1,len);

    else (tag[n] );
    subset(list, tag, n + 1,len);
}

int main()
{
    //cout << "请您输入整数的个数:";
    int m;
    scanf("%d",&m); 
    while(m--)
    {
        int n;
        scanf("%d",&n);
        int *number = new int[n];
        int *tag = new int[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",& number[i]);
        }

        subset(number, tag, 0,n);
    }
   

    return 0;
}
