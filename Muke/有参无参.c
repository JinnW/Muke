#include<stdio.h>
int test()
{
	printf("���챳������");

}

int test2(int sum)  //�вκ���
{
	while (sum ) {
		printf("�Ѿ�����%d�ε�����", sum);
		return 0;
	}
}

int main()
{
	test();
	test2(100); //�������¸������
	return 0;
}
