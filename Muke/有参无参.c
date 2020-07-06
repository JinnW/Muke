#include<stdio.h>
int test()
{
	printf("今天背单词了");

}

int test2(int sum)  //有参函数
{
	while (sum ) {
		printf("已经背了%d次单词了", sum);
		return 0;
	}
}

int main()
{
	test();
	test2(100); //参数更新更加灵活
	return 0;
}
