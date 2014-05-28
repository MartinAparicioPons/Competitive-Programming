#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
int a[1000008];
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),compare);
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
