#include <stdio.h>
#include <stdlib.h>
int max(int x[4])
{
    int max = x[0];
    for (int i = 0;i<4;i++)
    {
        if(max<x[i])
            max = x[i];
    }
    return max;
}
int min(int x[4])
{
    int min = x[0];
    for (int i = 0;i<4;i++)
    {

        if(min>x[i])
            min = x[i];
    }
    return min;
}
void main(){
    int average ;
    int x[10];
    for(int i = 0;i<10;i++){
        printf("please enter number : ");
        scanf("%i",&x[i]);
    }


        for(int i = 0;i<10;i++)
           printf("number : %i\n",x[i]);
    printf("------------------------------------------------\n");
    for(int i = 0;i<10;i++){
           for(int j = 0;j<9;j++){
            if(x[j]>x[j+1]){
                average = x[j+1];
                x[j+1] = x[j];
                x[j] = average;
                }
           }
    }

        for(int i = 0;i<10;i++){
           printf("number : %i\n",x[i]);

    }


}
