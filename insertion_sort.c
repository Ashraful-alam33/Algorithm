#include<stdio.h>
# define ananna 90

int a [ananna] ={15,4,17,2,1,,8}

void insertion_sort()
{
    for (int j=1; j<ananna ;j++)
    {
        int key= a[j];
        int i= j-1;
        while(i>=0  && a[i] >key)
        { 
            a[i+1]= a[i];
            i--;
            
        }
        a[i+1]= key;
    }
}

int main ()
{
  
}
