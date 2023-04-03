#include<stdio.h>
#include<stdlib.h>


int main(){


float ag,by,sc;


    printf("agirlik  girin:");
    scanf("%f",&ag);
    printf("boy girin:");
    scanf("%f",&by);


    sc=(ag/(by*by))*10000;


    if(sc<18){
        printf("a little eat ");

    }
    else{
        if(sc<24){
            printf("normal");
        }
        else{
            if(sc<29){
                printf("above ideal weight");
            }
            else{
                if(sc<39){
                    printf("well above ideal weight ");
                }
                else{
                        if(sc>40){
                    printf("well above ideal weight");
                        }
                }

            }
        }
    }

    printf("\n VKI: %f",sc);


 return 0;
}
