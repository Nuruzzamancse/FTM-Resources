#include<bits/stdc++.h>

using namespace std;

int main(){

    int zerocnt=0, fivecnt = 0, test;

    scanf("%d",&test);

    for(int i=0;i<test;i++){
        int inpt;
        scanf("%d",&inpt);

        if(inpt==5)
            fivecnt++;
        else
            zerocnt++;
    }

    while(fivecnt){
            int mltpl = 5*fivecnt;

            if(mltpl%9==0)
                break;
            else
                fivecnt--;

    }

    if(fivecnt>0&&zerocnt>0){
        for(int i=0;i<fivecnt;i++)
            printf("5");
        for(int i=0;i<zerocnt;i++)
            printf("0");
    }
    else if(zerocnt>0)
        printf("0");
    else
        printf("-1");



}
