#include <stdio.h>
int main()
{

    int row=11;//i row
    int col=11;//j column
   
   for(int i=1;i<=row;i++)
   {
       for(int j=1;j<=col;j++)
       {
           if(j == 1 || i + j == 8||i-j==4 )
           {
           
               printf("*");
           }else
           {
               printf(" ");
           }
       }
       printf("\n");
   }

    return 0;

}
/*
Output : 

*     *    
*    *     
*   *      
*  *       
* *        
**         
* *        
*  *       
*   *      
*    *     
*     *   


*/