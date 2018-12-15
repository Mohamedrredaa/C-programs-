#include <stdio.h>
#include <stdlib.h>
void main(){
    int xx = 0;
    int average ;
    int x[10];
    for(int i = 0;i<10;i++){
        printf("please enter number : ");
        scanf("%i",&x[i]);
    }

    printf("------------------------------------------------\n");
    printf("please enter a number to search for : ");
    scanf("%i",&average);

    for(int i = 0;i<10;i++){
          if(x[i] == average)
               {
                    xx = 1;
                    break;
               }
    }
if(xx == 1)
    printf("the value you entered exist");
else
    printf("the value you entered not exist");


}
