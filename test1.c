//线性表元素查询
//此代码段为实验一代码段
#include<stdio.h>
#include<stdlib.h>
#define date_size 100
#define date_add 10
typedef struct 
{
	int *address;
	int length;
	int size;
}sq;
int sqlistinit(sq *s)
{
	s->address = (int*)malloc(date_size*sizeof(int));
		if(!s->address)
			return 0;
		s->length = 0;
		s->size = date_size;
		return 1;
}
int intput(sq *s)
{
	int i,j,e,*newbase;
	if(i < 1 || i >s->length + 1 )
		return 0;
	if(s->length >= s->size)
	{
		newbase = (int*)realloc(s->address,(s->size +date_add)*sizeof(int));
		if(!newbase)
			return 0;
		s->address = newbase;
		s->size += date_add;
	}
	for(j = s->length-1;j>=i-1;j--)
        s->address[j+1] = s->address[j];
        
		s->address[i-1]= e;
		++s->length;
		return 1;
}
int main()
{
	int i,a;
	sq s;
	sqlistinit(&s);
	for(i=0;i<5;i++)
	{
	printf("请输入第%d个数字\n",i+1);
	scanf("%d",&a);
	intput(&s,i,a);
	}
	printf("当前线性表中的元素依次是:\n");
	for(i=0;i<s.length;i++)
		printf("%d",s.address[i]);

return 0;
}