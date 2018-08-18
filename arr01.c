/* ar1.c */
#include <stdio.h>
#include <stdlib.h>

void printer(int *ar, int n)
{
int i;
for (i=0;i<n;i++)
printf("\n %d символ = %d", i, ar[i]);
}

void changer(int *ar, int n)
{
n--;
int a,i;
printf("n=%d ",n);
for(i=0;i<(n+1)/2;)
{
a=ar[i];
printf ("a=%d ", a);
printf ("ar[i]=%d ",ar[i]);
ar[i]=ar[n-i];
printf("ar[I]=%d \n",ar[i]);
ar[n-i]=a;
i++;
}
}

int main(void)
{
int counts,*arr,i;
printf("Введите количество символов: ");
scanf("%d", &counts);
arr=malloc (counts*sizeof(arr));
if(!arr){
perror("ошибка");
return -1;}
else
{
for (i=0;i<counts;i++)
arr[i]=i;
printer(arr,counts);
printf("\nПосле смены\n");
changer(arr,counts);
printer(arr,counts);
printf("\n ");
}
}
