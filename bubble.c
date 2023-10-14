#include <stdio.h>
#include <stdlib.h>

int temp,len=10,i;
int Arr[10];
int bubble()
   {
    for (i=0; i<len; i++)
    {
        Arr[i]=rand()%50;
        printf ("%d ",Arr[i]);
    }
   for (int i=0; i<len-1; i++) 
   {
      
    for (int j=0; j<len-i-1; j++) 
    {
    
      if (Arr[j] > Arr[j+1]) 
      {
      
        temp = Arr[j];
        Arr[j] = Arr[j + 1];
        Arr[j + 1] = temp;
      }
    }
  }
  printf(" \n\n  || : Final bubble sorted Array : ||\n\n");
   for (int i=0; i<len; i++) 
  {
      printf("%d ",Arr[i]);
  }
  return 0;
}
int main()
{
    bubble();
}