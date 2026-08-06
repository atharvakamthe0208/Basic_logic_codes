#include <stdio.h>
int main()
{


    int num1,num2,add,sub,mul;
    int div;
    int ch,ct;

    do
    {
        printf("\n1.ADD \n2.SUB \n3.MUL \n4.DIV\nEnter Your choice");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter Any two numbers :");
            scanf("%d%d",&num1,&num2);
            add=num1+num2;
            printf("Addition : %d\n",add);
            break;
        case 2:
            printf("Enter Any two numbers :");
            scanf("%d%d",&num1,&num2);
            sub=num1-num2;
            printf("Substraction : %d\n",sub);
            break;
        case 3:
            printf("Enter Any two numbers :");
            scanf("%d%d",&num1,&num2);
            mul=num1*num2;
            printf("Multiplication : %d\n",mul);
            break;
         case 4:
            printf("Enter Any two numbers :");
            scanf("%d%d",&num1,&num2);
            div=num1/num2;
            printf("Division : %d\n",div);
            break;            
        
        default:

            printf("\n");
            break;
        }
        printf("Do you Want to Continue press 1");
        scanf("%d",&ct);

    }while(ct==1);
    printf("\n -----------------THANK YOU-----------------");

    return 0;

}