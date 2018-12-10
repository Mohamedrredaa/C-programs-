#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x,y,AA=0,BB=0,CC=0;
    char s[3]      ={'A','M','W'};
    int ID[3]      ={1234,5678,9870};
    int PASSWORD[3]={7788,5566,1122};
    printf("please enter your ID: ");
    scanf("%d",&x);
    if(x != ID[0] && x != ID[1] && x != ID[2])
        printf("you are not registered");
    else if(x == ID[0]){
        printf("please enter the password");A:
        scanf("%d",&y);

            if(y == PASSWORD[0])
                printf("Welcome %c",s[0]);
            else
            { printf("incorrect password,try again");AA++;
                if(AA==3)
                {
                    printf("3 times for wrong password ,no more trails");//break;
                }
                else
                    goto A;
            }
    }
    else if(x == ID[1]){
        printf("please enter the password");B:
            scanf("%d",&y);

            if(y == PASSWORD[1])
                printf("Welcome %c",s[1]);
            else
            { printf("incorrect password,try again");BB++;
            if(BB==3){

                    printf("3 times for wrong password ,no more trails");//break;
                }
            else
                goto B;

            }
    }
    else if(x == ID[2]){
        printf("please enter the password");C:
            scanf("%d",&y);

            if(y == PASSWORD[2])
                printf("Welcome %c",s[2]);
            else
            {
                printf("incorrect password,try again");CC++;
                if(CC==3)
                {
                    printf("3 times for wrong password ,no more trails");// break;
                }
            else
                goto C;
            }
            }

    return 0;
}
