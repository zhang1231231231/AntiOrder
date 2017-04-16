/****************************��Ŀ����*************************************/
/* 
*                        
* ��һ�������������������������飬��ǰ��һ�����ں���һ�����֣�
* ���������������һ������ԡ������һ����Ч���㷨��������������е�����Ը�����
* ����һ��int����A�����Ĵ�Сn���뷵��A�е�����Ը�������֤nС�ڵ���5000��
* ����������
* [1, 2, 3, 4, 5, 6, 7, 0], 8
* ���أ�7
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

