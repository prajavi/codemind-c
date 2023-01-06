#include<stdio.h>
#include<string.h>
int main()
{
	char name1[20],name2[20];
	scanf("%[^
]s",&name1);
	strcpy(name2,name1);
	printf("%s",name2);
}