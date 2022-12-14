#include<stdio.h>
#define L1 6 
#define L2 4 
int x[2*L1-1]={1,2,3,4,5,6,0,0,0,0,0};
int h[2*L2-1]={1,2,3,4,0,0,0,0,0,0,0};
int y[L1+L2-1];
void main()
{
    int i=0,j;
    for(i=0;i<(L1+L2-1);i++){
        y[i]=0;
        for(j=0;j<=i;j++){
            y[i]+=x[j]*h[i-j];
        }
    }
    printf(" Linear convolution values are \n");
    for(i=0;i<(L1+L2-1);i++){
    printf("%d ",y[i]);
    }

}
