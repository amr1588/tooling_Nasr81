#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* int i , search;
     int arr[5];
     for(i=0; i <5 ; i++)
     {
         printf("Please enter element %d = " , i);
         scanf("%d" , &arr[i]);
     }

     printf("\nplease enter the number u want to search : \n");
     scanf("%d" , &search);

     for(i=0; i <5 ; i++)
     {
          if(arr[i] == search)
          {
              printf("Element found on index %d\n" , i);
              break;
          }
          else
          {
              printf("Not Found\n");
          }
     }

    */

    /*int i , sum = 0 , avg;

    int arr[6] = {23,6,37,18,18,21};

    for(i=0; i <6 ; i++)
        {
            sum = sum + arr[i];
        }

        avg = sum/i;
        printf("Average is %d" , avg);

        */





    /* int i;

     int arr[6] = {23,6,37,18,18,21};

     for(i=0; i <6 ; i++)
     {
         if(arr[i] == arr[i+1])
         {
             printf("consective dublication detected at index %d and %d\n", i, i+1);
             break;
         }


     }

    */



    int i, j, search;

    int arr[3][3];

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("please enter elemnt[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("\t\t%d", arr[i][j]);

        }
        printf("\n");
    }


    return 0;
}
