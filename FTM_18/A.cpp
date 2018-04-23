#include<bits/stdc++.h>

using namespace std;

#define SIZE_M 101
#define MAX_SUM 50001

int binary[SIZE_M];
int m, coin[SIZE_M];
int Total, Ans;
int DP[SIZE_M][MAX_SUM];

int abs(int n)
{
    if(n<0)
        return -n;
    return n;
}
void initDP()
{
    int i, j;
    for(i=0;i<SIZE_M; i++)
        for(j=0;j<MAX_SUM; j++)
            DP[i][j] = -1;
}

///1
/*
void solve(int i, int sum1)
{
    int sum2;

    if(i==m){
        sum2 = Total - sum1;
        printf("%d %d\n",sum1, sum2);
        return;
    }

    binary[i] = 0;

    solve(i+1 , sum1);

    binary[i] = 1;

    solve(i+1, sum1 + coin[i]);
}
*/

///2
/*
void solve(int i, int sum1)
{
    int sum2;

    if(i==m){
        sum2 = Total - sum1;
        printf("%d\n",abs(sum1 - sum2));
        return;
    }

    binary[i] = 0;

    solve(i+1 , sum1);

    binary[i] = 1;

    solve(i+1, sum1 + coin[i]);
}
*/

///3

int solve(int i, int sum1)
{
    if(DP[i][sum1] >= 0)
        return DP[i][sum1];

    int sum2, left, right;

    if(i==m){
        sum2 = Total - sum1;
        //printf("%d\n",abs(sum1 - sum2));
        return DP[i][sum1] = abs(sum1 - sum2);
    }

    binary[i] = 0;

    left = solve(i+1 , sum1);

    binary[i] = 1;

    right = solve(i+1, sum1 + coin[i]);

    if(left<right)
        return DP[i][sum1] = left;
    else
        return DP[i][sum1] = right;
}

void readCase()
{

    int i;
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&coin[i]);

}

void solveCase()
{
    Total = 0;

    int i;
    for(i=0; i<m; i++)
        Total += coin[i];

    initDP();

    Ans = solve(0,0);
}

void printCase()
{
    printf("%d\n",Ans);
}

int main()
{
    int n;

    scanf("%d",&n);

    while(n--)
    {
        readCase();
        solveCase();
        printCase();
    }

    return 0;
}
