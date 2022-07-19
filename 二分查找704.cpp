#include <iostream>
using namespace std;

//给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  
//写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1
int main()
{
	//数组
	int num[100] = {0};

	//目标值
	int target = 0;
	
	//地址
	int pos = 0;

	//输入端读数据,放入数组
	int a;
	int i = 0;
	while(cin>>a)
	{
		cin >> num[i];
	}

	cin >> target;

	//数组元素数量
	int size = sizeof(num) / sizeof(num[0]);

	cout << size<< endl;
	cout << target << endl;

	return 0;


	////二分查找
	////查询中间值
	//int flag = num[size / 2];
	//if (flag == target)
	//{
	//	cout << size / 2;
	//	return 0;
	//}
	//else
	//{
	//	//设置指针
	//	int* left = &flag;
	//	int* right = &flag;

	//	for (int i = size / 2; i < size; i++)
	//	{
	//		if (*right == target)
	//		{
	//			cout << i;
	//			return 0;
	//		}
	//		else
	//		{
	//			right++;
	//		}
	//	}

	//	for (int j = size / 2; j != 0; j--)
	//	{
	//		if (*left == target)
	//		{
	//			cout <<j;
	//			return 0;
	//		}
	//		else
	//		{
	//			right++;
	//		}
	//	}

	//}








}