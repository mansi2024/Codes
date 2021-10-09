#include<stdio.h>

#include<stdlib.h>

/*

Input format----

5 //Set1 length

1 2 4 6 18 //Set1 elements

7 //Set2 length

4 6 18 9 14 19 20 //Set2 elements

*/

int main()

{

  int n1,n2,i,j,*Set1,*Set2;

  printf("Enter the size of Set1: ");

  scanf("%d",&n1);

  Set1=(int*)malloc(n1*(sizeof(int)));

  printf("Enter the elements of Set1: \n");

  for(i=0;i<n1;i++)

  {

    scanf("%d",Set1+i);

  }

  printf("Enter the size of Set2: ");

  scanf("%d",&n2);

  Set2=(int*)malloc(n2*(sizeof(int)));

  printf("Enter the elements of Set2: \n");

  for(i=0;i<n2;i++)

  {

    scanf("%d",Set2+i);

  }

  printf("Difference of two sets--\n");

  for(i=0;i<n1;i++)

  {

    for(j=0;j<n2;j++)

    {

      if(*(Set1+i)==*(Set2+j))

      {

        *(Set1+i)=-9999;

        *(Set2+j)=-9999;

      }

    }

  }

  printf("A-B : \n");

  for(i=0;i<n1;i++)

  {

    if(*(Set1+i)!=-9999)

      printf("%d ",*(Set1+i));

  }

  printf("\n");

  printf("B-A : \n");

  for(i=0;i<n2;i++)

  { 

    if(*(Set2+i)!=-9999)

      printf("%d ",*(Set2+i));

  }

  return 0;

}
