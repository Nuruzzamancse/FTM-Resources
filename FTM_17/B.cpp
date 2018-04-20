#include<bits/stdc++.h>

using namespace std;

int main()
{

    int k, arr[15], sum=0, cnt=0;

    bool flag = false;

    scanf("%d",&k);

    for(int i=0; i<12; i++)
        scanf("%d",&arr[i]);

    sort(arr,arr+12);

    if(sum>=k)
    {

        flag = true;

    }

    if(!flag)
    for(int i=11; i>=0; i--)
    {
        sum +=arr[i];
        cnt++;
        if(sum>=k)
        {

            flag = true;
            break;
        }



    }

    if(flag)
        printf("%d",cnt);
    else
        printf("-1");

}
