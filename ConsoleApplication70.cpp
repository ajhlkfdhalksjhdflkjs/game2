// ConsoleApplication70.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

int main()
{
    string s1, s2, s3, s4, a;
    int ans = 0, l = 0;
    int n = s1.size();
    int n1 = s2.size();
    int m = s3.size();
    int m1 = s4.size();
    cin >> s1 >> s2 >> s3 >> s4;
    for (int i = 0; i < min(n, n1); i++)
    {
        if (s1[i] == s2[i] 
        && s1[i] >= 'A' && s1[i] <= 'G' 
        && s2[i] >= 'A' && s2[i] <= 'G')
        {
            a[ans++] = s1[i];
        }
    }
    switch (a[0])
    {
    case 'A':
        cout << "MON" << " ";
        break;
    case 'B':
        cout << "TUE" << " ";
        break;
    case 'C':
        cout << "WED" << " ";
        break;
    case 'D':
        cout << "THU" << " ";
        break;
    case 'E':
        cout << "FRI" << " ";
        break;
    case 'F':
        cout << "SAT" << " ";
        break;
    case 'G':
        cout << "SUN" << " ";
        break;
    default:
        break;
    }
    if (a[1] >= '0' && a[1] <= '9')
    {
        cout << "0";
    }
    /*
    for (int i = 0; i < min(m, m1); i++)
    {
        if (s1[i] == s2[i]
            && s1[i] >= 'A' && s1[i] <= 'N'
            && s2[i] >= 'A' && s2[i] <= 'N'
            || s1[i] >= '0' && s1[i] <= '9'
            && s2[i] >= '0' && s2[i] <= '9')
        {
            
        }
    }
    */
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
