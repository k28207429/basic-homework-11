#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
int x,y,z;
printf("�п�J�Ĥ@�ӼƦr:");
scanf("%d",&x);
printf("�п�J�ĤG�ӼƦr:");
scanf("%d",&y);
printf("�п�J�ĤT�ӼƦr:");
scanf("%d",&z);
if((x>y)&&(y>z))
printf("%d %d %d",z,y,x);
else if((y>x)&&(x>z))
printf("%d %d %d",z,x,y);
else if((z>y)&&(y>x))
printf("%d %d %d",x,y,z);
else if((x>z)&&(z>y))
printf("%d %d %d",y,z,x);
else if((y>z)&&(z>x))
printf("%d %d %d",x,z,y);
else
printf("%d %d %d",y,x,z);
system("pause");
return 0 ;	} 
	
