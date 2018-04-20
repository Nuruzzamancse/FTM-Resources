#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m, d;

    bool flag = true;

    scanf("%d %d %d",&n, &m ,&d);

    int arr[n*m+5];

    for(int i=0;i<n*m;i++){
        scanf("%d",&arr[i]);
        if((arr[i]-arr[0])%d!=0){
            flag = false;
        }

    }

    if(!flag){
        printf("-1");
        return 0;
    }


    sort(arr,arr+n*m);

    int mid1 = (n*m)/2, mid2 = (n*m-1)/2, cnt1 = 0, cnt2 = 0;

    for(int i=0;i<n*m;i++){
            cnt1 += (abs(arr[mid1]-arr[i]))/d;
            cnt2 += (abs(arr[mid2]-arr[i]))/d;
    }

    printf("%d",min(cnt1,cnt2));



    return 0;

}
