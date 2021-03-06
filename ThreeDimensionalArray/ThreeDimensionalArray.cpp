// ThreeDimensionalArray.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

int main()
{
	int d1 = 5;
	int d2 = 5;
	int d3 = 5;
	int*** tDA = new int** [d1];
	for (int i = 0; i < d1;i++) {
		tDA[i] = new int*[d2];
		for (int j = 0; j < d2;j++) {
			tDA[i][j] = new int[d3];
		}
	}

	for (int i = 0; i < d3; i++) {
		for (int j = 0; j < d2; j++) {
			for (int k = 0; k < d1; k++) {
				tDA[k][j][i] = k * 100 + j * 10 + i;
			}
		}
	}

	for (int i = 0; i < d3;i++) {
		for (int j = 0; j < d2;j++) {
			for (int k = 0; k < d1;k++) {
				printf("%03d ", tDA[k][j][i]);
			}
			printf("\n");
		}
		printf("\n");
	}
	for (int i = 0; i < d1; i++) {
		for (int j = 0; j < d2; j++) {
			delete[] tDA[i][j];
		}
		delete[] tDA[i];
	}
	delete tDA;
	tDA = NULL;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
