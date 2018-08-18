/* ar2.4.c */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int counts,*arr,i,j,n,p;
printf("Введите размерность матрицы: ");
scanf("%d", &counts);
arr=malloc (counts*counts*sizeof(arr));
if(!arr){
perror("ошибка");
return -1;}
else
{
i=1;p=counts/2;
for (n=1;n<=p;n++)
{
	for (j=n-1;j<counts-n+1;j++)
	 arr[(n-1)+counts*j]=i++;
	for (j=n;j<counts-n+1;j++)
	 arr[j+(counts-n)*counts]=i++;
	for (j=counts-n-1;j>=n-1;--j)
	 arr[(counts-n)+j*counts] = i++;
	for (j=counts-n-1;j>=n;j--)
	 arr[j+(n-1)*counts]=i++;
}
if(counts%2==1)
arr[p+p*counts]=counts*counts;
for(i=0;i<counts;i++)
{
 for(j=0;j<counts;j++)
 {
  printf("%02d ", arr[i+j*counts]);
  if(j==counts-1)printf("\n");
 }
}
}
}
