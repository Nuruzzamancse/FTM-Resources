#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, hh, mm , hh1, mm1, cnt=1, arr[24][60]={0};

    scanf("%d",&n);
    //n--;

    //scanf("%d %d",&hh, &mm);

    hh1 = hh;
    mm1 = mm;

    //arr[hh][mm]++;

    while(n--){
        //printf("n=%d\n",n);

        scanf("%d %d",&hh, &mm);
        arr[hh][mm]++;
        if(arr[hh][mm]>cnt)
            cnt = arr[hh][mm];
        hh1 = hh;
        mm1 = mm;

    }

    printf("%d",cnt);

}
