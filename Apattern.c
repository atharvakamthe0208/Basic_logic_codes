#include <stdio.h>
int main()
{

   
    int row=11;// outer loop  rows 
    int col=13;//inner loop   columns
   
   for(int i=1;i<=row;i++)
   {
       for(int j=1;j<=col;j++)
       {
           if(i+j==8||j-i==6||(i==4 && j>=4 && j<=10))
           {
                printf("*");
           }
           else
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

      *      
     * *     
    *   *    
   *******   
  *       *  
 *         * 
*           * 

*/