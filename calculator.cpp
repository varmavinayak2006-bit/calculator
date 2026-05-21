#include<stdio.h>
int main ()
{
    float num1,num2,Ans;
    char oper;
    printf("enter the number \n");
    scanf("%f",&num1);
    printf("enter the operator \n");
    scanf(" %c",&oper);
    printf("enter the number \n");
    scanf("%f",&num2);

    switch(oper){
        case '+' : 
        Ans = num1 + num2 ;
        break;
        case '*' : 
        Ans = num1 * num2 ;
        break;
        case '/' : 
        if (num2 == 0)
            printf("ERROR");
        else
        Ans = num1 / num2 ;
        break;
        case '-' : 
        Ans = num1 - num2 ;
        break;
        default :
        printf("wrong output");

    }
    printf("%0.3f",Ans);
    return(0);
}