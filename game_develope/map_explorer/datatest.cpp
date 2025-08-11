#include<iostream>
using namespace std;
int main()
{
    struct
    {
        int matrix [10][10];
    }matrix[10];
    //这是一只山寨版的3D数组，实现方法是在结构体数组中嵌套数组（二维数组）
    //注意：这里的matrix是一个结构体数组，每个元素是一个二维数组
    //仅仅是一个测试，为了后面的3D地图的实现做铺垫（3D地图的实现会使用到类似的结构）
    //还说我是蒸馍吗哈哈哈哈哈哈哈

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            matrix[i].matrix[j][j] = i + j; 
        }
    }
    //将每个二维数组的对角线元素赋值为i+j
    //也就是说，这个《地图》的对角线是被《填充》的
    //接下来，我们来打印一下这个《地图》
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << matrix[i].matrix[j][j] << " ";
        }
        cout << endl;
    }
    //打印每个二维数组的对角线元素
    //可以看到这个《地图》的每一层（拍CT喽）大雾橙色预警
    return 0;
}