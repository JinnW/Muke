#include <stdio.h>
/* �����ȡ���������ĺ��� */
int getWordNumber(int n)
{
    if (n == 1)
    {
        return 1;    //��һ��ֻ��1������
    }
    else {
        return getWordNumber(n-1)+n;       //�������ĵ�������
    }
}
int main()
{
    int num = getWordNumber(10);     //��ȡ���˵ĵ�������
    printf("С����10�����:%d�����ʡ�\n", num);
    return 0;
}