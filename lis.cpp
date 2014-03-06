#include <iostream>

using namespace std;

int lis(int a[],int n)
{
    int len=1;
    int *d=new int[n];
    int i,j;

    for(i=0;i<n;i++)
    {
        d[i]=1;
        for(j=0;j<i;j++)
        {
          if(a[i]>a[j] && d[i]<d[j]+1)
            d[i]=d[j]+1;
        }
        if(d[i]>len) len=d[i];
    }

    delete[] d;
    return len;
}
int main()
{
    int a[]={5,3};
    cout<<lis(a,2)<<endl;
    return 0;
}
