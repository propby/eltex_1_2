#include <stdio.h>

int main()
{
    int t;
    printf("Введите t:");scanf("%d", &t);
    int a[t][t] {0};
    int up_edge = 0,left_edge = 0,right_edge = 0,down_edge = 0;

    for (int n = 1,i = 0,j = 0;n <= t*t;)
{while (j <= (t-1 - right_edge) && i == (0 + up_edge) )
       {
           a[i][j] = n;
           n++;
           if ( (j + 1) == (t-1 - right_edge) )
            up_edge++;
           j++;
       }
       if (n == (t*t+1))
        break;
       while  (j == (t-1-right_edge) && i <= (t-1-down_edge))
       {
           a[i][j] = n;
           n++;
           if ( ( i+1) == (t-1-down_edge) )
            right_edge++;
           i++;
       }
       if (n == (t*t+1))
        break;
       while (j >= (0+left_edge) && i == (t-1-down_edge))
       {
           a[i][j] = n;
           n++;
           if ((j-1) == (0+left_edge))
            down_edge++;
           j--;
       }
       if (n == (t*t+1))
        break;
       while (j==(0+left_edge) && i >=  (0+up_edge))
       {
           a[i][j] = n;
           n++;
           if ( (i-1) == (0+up_edge) )
            left_edge++;
           i--;
       }
       if (n == (t*t+1))
        break;

    }
    for (int i = 0;i < t;i++)
    {
        for (int j = 0;j < t;j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }}
