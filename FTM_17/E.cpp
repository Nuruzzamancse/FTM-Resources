#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    set<int> st;

    map<int,int> mp;

    scanf("%d %d",&n,&m);

    int  arr[n+5];

    for(int i=1;i<=n; i++)
        scanf("%d",&arr[i]);

    for(int i=n;i>=1;i--)
    {
        st.insert(arr[i]);

        mp[i] = st.size();
    }

    for(int i=0;i<m; i++)
    {
        int query;

        scanf("%d",&query);

        printf("%d\n",mp[query]);
    }
}
