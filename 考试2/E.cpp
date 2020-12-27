#include <cstring>
#include <iostream>

using namespace std;

void subset(int list[], int tag[], int n,int len) //生成子集 共2^n个
{


    if (n == len)
    {
        cout << "-->";
        for (int i = 0; i < len; i++)
        {
            if (tag[i] == 1)
                cout <<' '<< list[i];
        }

        cout<<endl;
        return;
    }
    tag[n] = 1;
    subset(list, tag, n + 1,len);

    tag[n] = 0;
    subset(list, tag, n + 1,len);
}

int main()
{
    //cout << "请您输入整数的个数:";
    int m;
    cin>>m;
    while(m--)
    {
        int n;
        cin >> n;
        int *number = new int[n];
        int *tag = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> number[i];
        }
//      for (int i = 0; i < n; i++)
//      {
//          cout << number[i];
//      }
//      cout<<endl;
        //memset(tag,1,sizeof(tag[0])*n);
//      for (int i = 0; i < n; i++)
//      {
//          cout << tag[i]<<endl;
//      }
        subset(number, tag, 0,n);
    }
    //system("pause");


    return 0;
}
