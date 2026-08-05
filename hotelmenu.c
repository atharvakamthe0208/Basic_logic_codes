
#include <stdio.h>

int main()
{
   int tot=0,cnt=0,ch=0,c;
    float finaltotal,cgst,sgst;
    
    MENU :

    printf("enter your choice to Order \n1.starter\n2.Non-veg\n3.Veg");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
            starter:
                printf("select the starter \n1.item1-------200\n2.item-------300\n3.item-------400");
                scanf("%d",&ch);
                
                switch(ch)
                {
                    case 1 :
                        tot=tot+200 ;
                        cnt++;
                        break;
                    case 2 :
                        tot=tot+300 ;
                        cnt++;
                        break;
                    case 3 :
                        tot=tot+400 ;
                        cnt++;
                        break;
                    default :
                        printf("\nThank you starter end.....!");
                       
                }printf("\nDo you want to continue(1/2)");
                scanf("%d",&c);
                if(c==1)
                {
                    goto starter;
                }
            break;    
        case 2 :
            non_veg:
                printf("select the non_veg\n1.a-------500\n2.b-------800\n3.c-------1500 ");
                scanf("%d",&ch);
                
                switch(ch)
                {
                    case 1:
                        tot=tot+500 ;
                        cnt++;
                        break;
                    case 2:
                        tot=tot+800 ;
                        cnt++;
                        break;
                    case 3:
                        tot=tot+1500 ;
                        cnt++;
                        break;
                    default:
                        printf("Thank you non_veg menu end.....!");
                        
                }printf("\nDo you want to Continue press(1))");
                        scanf("%d",&c);
                        if(c==1)
                        {
                            goto non_veg;
                        }
            break;                
        case 3:
            veg :
                printf("Select the Veg\n1.a-------350\n2.b-------700\n3.c-------1000");
                scanf("%d",&ch);
                
                switch(ch)
                {
                    case 1:
                        tot=tot+350 ;
                        cnt++;
                    case 2:
                        tot=tot+700 ;
                        cnt++;
                    case 3:
                        tot=tot+1000 ;
                        cnt++;
                    default :
                        printf("thank you Veg menu end.....!");
                        
                }printf("\n do you want to continue press (1)");
                        scanf("%d",&c);
                        if(c==1)
                        {
                            goto veg;
                        }
            break;                
        default :
            printf("invalid choice");

    }
    printf("\n do you want to continue press (1)");
    scanf("%d",&c);
    if(c==1)
    {
        goto MENU;
    }
        
    sgst=tot*0.06;
    cgst=tot*0.06;
    finaltotal=tot+sgst+cgst;
    if(cnt>0)
    {
        printf("\n==================================================");
        printf("\n----------------------menu------------------------");
        printf("\nItem         =%d",cnt);
        printf("\nTotal        =%d",tot);
        printf("\nSGST         =%f",sgst);
        printf("\nCGST         =%f",cgst);
        printf("\nFinal total  =%f",finaltotal);
        printf("\n====================================================");
    
    }

        



    return 0;
}