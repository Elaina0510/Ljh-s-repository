#include<iostream>
using namespace std;

int main() {

	//选择结构 多行if语句
	//输入工资，大于8000视为富哥

	//1、用户输入工资
	int score = 0;
	cout << "请输入你的工资" << endl;
	cin >> score;

	//2、打印用户输入的工资
	cout << "您输入的工资为" << score << endl;

	//3、判断是否大于8000
		 //if条件后面不要加分号
	if (score > 8000)
	{
		cout << "恭喜你不是穷逼" << endl;
	}
	else //不满足条件执行else后大括号的内容
	{

		cout << "你个穷逼\n";
	}




	system("pause");
	
	return 0;
}