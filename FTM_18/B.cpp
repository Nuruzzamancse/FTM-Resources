#include<stdio.h>
#define SIZE_N 1001
#define SIZE_G 101

int N;

int P[SIZE_N], W[SIZE_N];

int ANS;

int DP[SIZE_N][SIZE_G];


void initDP()
{
    int i, j;
    for(i=0;i<SIZE_N; i++)
        for(j=0;j<SIZE_G; j++)
            DP[i][j] = -1;
}


int solve(int i, int cap)
{
    if(DP[i][cap] != -1)
        return DP[i][cap];

    if(i==N)
        return DP[i][cap] = 0;
    int left, right;

     left = solve(i+1, cap);

    if(cap>=W[i])
        right = P[i] + solve(i+1, cap - W[i]);
    else
        right = 0;

    if(left>right)
        return DP[i][cap] = left;
    else
        return DP[i][cap] = right;
}

void readCase()
{
    int i;
    scanf("%d",&N);

    for(i=0;i<N; i++)
        scanf("%d %d",&P[i], &W[i]);
}

void solveCase()
{
    int i, G, MW;



    ANS = 0;

    scanf("%d",&G);

    initDP();

    for(i=0; i<G; i++)
        {
            scanf("%d",&MW);
            ANS += solve(0,MW);
        }

        printf("%d\n",ANS);
}

int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        readCase();
        solveCase();
    }
}
