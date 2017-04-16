/****************************题目描述*************************************/
/* 
*                        
* 有一组数，对于其中任意两个数组，若前面一个大于后面一个数字，
* 则这两个数字组成一个逆序对。请设计一个高效的算法，计算给定数组中的逆序对个数。
* 给定一个int数组A和它的大小n，请返回A中的逆序对个数。保证n小于等于5000。
* 测试样例：
* [1, 2, 3, 4, 5, 6, 7, 0], 8
* 返回：7
*/
/************************************************************************/
#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class AntiOrder {
public:
	bool isAntiOrder(int curNum,int nextNum)
	{
		return curNum > nextNum;
	}

	int count(vector<int> A, int n) {
		int resultNum = 0;
		// write code here
		for (int i =0;i<n-1;i++)
		{
			for (int j = i+1;j<n;j++)
			{
				if (isAntiOrder(A[i],A[j]))
				{
					resultNum++;
				}
			}
		}
		return resultNum;
	}
};


int main()
{
	int A[] = { 1, 2, 3, 4, 5, 6, 7, 0 };
	vector<int> arr(A, A + 8);
	AntiOrder ant;
	int result = ant.count(arr, arr.size());
	cout << result << endl;
    return 0;
}

