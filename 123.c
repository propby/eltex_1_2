#include <stdio.h>
#include <stdlib.h>

// 1 задание

/*
#define N 3
int main()
{
    int matr[N][N] = { {1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++)
        printf ("%d ",matr[i][j]);
    printf ("\n");
    }
    return 0;
}

*/




//2 задание

/*
#define N 5
int main ()
{
    int ar [N] = {1,2,3,4,5};
    for (int i = 0;i < N;i++)
        printf ("%d ",ar[i]);
    printf ("\n");
    for (int i = N-1;i >= 0;i--)
        printf ("%d ",ar[i]);
}
*/

//3 задание

/*

#define N 4
int main()
{
    int matr [N][N] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++)
        {
            if ( (i+j) < (N-1))
                matr[i][j] = 1;
            else if ( (i+j) > (N-1))
                matr[i][j] = 0;
        }
    }
     for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++)
        printf ("%d ",matr[i][j]);
    printf ("\n");
    }
}

*/
