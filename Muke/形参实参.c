#include <stdio.h>
//因此，形参只有在函数内部有效。函数调用结束返回主调函数后则不能再使用该形参变量。
int getGirth(int a, int b, int c)//这里的abc为形参
{
    if ((a + b) <= c || (a + c) <= b || (b + c) <= a)   //判断是否为三角形
    {
        printf("不构成三角形\n");
        return 0;
    }
    else
    {
        int cirf = a+b+c;     //计算三角形周长
        return cirf;
    }

}

int main() //无论实参是何种类型的量， 在进行函数调用时，它们都必须具有确定的值  下面为实参
{
    /* 定义三角形三边长 */
    int a, b, c;
    a = 3;
    b = 4;
    c = 5;
    printf("三角形的周长是：%d\n", getGirth( a,  b, c));  //调用周长函数
    return 0;
}