// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "SnackSort.h"

bool findNextPos(int point[], int &width, int &height, int &direction) {
	if (direction > 0) {
		if (point[0] - 1 >= 0 && point[1] + 1 < height) {
			point[0]--;
			point[1]++;
			return true;
		}
		else if (point[1] + 1 < height) {
			point[1]++;
			direction = 0;
			return true;
		}
		else if (point[0] + 1 < width) {
			point[0]++;
			direction = 0;
			return true;
		}
	}
	else {
		if (point[0] + 1 < width&&point[1] - 1 >= 0) {
			point[0]++;
			point[1]--;
			return true;
		}
		else if (point[0] + 1 < width) {
			point[0]++;
			direction = 1;
			return true;
		}
		else if (point[1] + 1 < height) {
			point[1]++;
			direction = 1;
			return true;
		}
	}

	return false;
}

int main()
{
	std::cout << "Hello World!\n";

	int width = 5;
	int height = 10;
	int direction = 1;

	int ** cube = new int*[width];//动态创建一个指针数组(第一维度表示横向坐标)
	for (int i = 0; i < width; i++) {
		cube[i] = new int[height];//初始化每个元素为一个数组（作为值的数组的维度用来表示纵向坐标）
	}
	//初始化第一个位置的数字
	**cube = 1;//通过指针赋值，先通过*cube取到第一列数组，再用一个*取到该列第一个元素的地址，直接赋值
	cube[0][0] = 1;//这里通过数组的方式赋值，是一样的
	int latestPos[] = { 0,0 };
	for (int i = 2; i <= width * height*2; i++) {
		if (findNextPos(latestPos, width, height, direction)) {
			//cube[latestPos[0]][latestPos[1]] = i;
			*(*(cube + latestPos[0]) + latestPos[1]) = i;
		}
	}
	//打印结果
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			printf("% 4d", cube[x][y]);
		}
		printf("\n");
	}
	//释放内存
	for (int i = 0; i < width; i++) {
		delete[]cube[i];
	}
	delete cube;
	cube = NULL;

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
