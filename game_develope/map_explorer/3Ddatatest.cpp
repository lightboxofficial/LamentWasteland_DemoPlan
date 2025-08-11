#include<iostream>
using namespace std;

int main()
{
    int matrix3d[10][10][10] = {0};
    for(int x = 0; x < 10; x++)
    {
        for(int y = 0; y < 10; y++)
        {
            for(int z = 0; z < 10; z++)
            {
                matrix3d[x][y][z] = 0;
            }
        }
    }
    while(1 != 0)
    {
        cout<<"请输入更改的方块位置（x, y, z）和新值："<<endl;
        cout<<"如果想要退出请输入-1 -1 -1 -1"<<endl;
        int x, y, z, value;
        cin >> x >> y >> z >> value;
        if(x == -1 && y == -1 && z == -1 && value == -1)
        {
            break;
        }
        matrix3d[x][y][z] = value;
    }
    //只是一个简单的3D数组编辑器，可以更改3D数组的值，所以不要叫我蒸馍啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊虽然我只是辣鸡来着
    for(int x = 0; x < 10; x++)
    {
        for(int y = 0; y < 10; y++)
        {
            for(int z = 0; z < 10; z++)
            {
                cout << matrix3d[x][y][z] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
        cout << "\n";
    }
    return 0;
}