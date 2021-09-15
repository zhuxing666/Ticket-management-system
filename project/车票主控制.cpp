#include<iostream>
using namespace std;
#include<cstdio>
#include"view.h"
#include"manage.h"

//车票界面信息
void showMenu()
{
	for (int j = 1; j <= 120; j++)
	    printf("\033[35m#\033[1m");
	printf
	(
		"\n"
		"\n"
		"\n"
		"                                                    车票管理系统             \n"
		"\n"
		"\n"
		"\n"
		"                                              请选择功能\n"
		"                                            【1】查看所有班车信息\n"
		"                                            【2】添加班车信息\n"
		"                                            【3】清空所有班车信息\n"
		"                                            【4】退出系统\n"
		"\n"
		"\n"
	);
	for (int j = 1; j <= 120; j++)
		printf("\033[35m#\033[1m");
	
}
int main()
{
	View v;
	v.oninit();
	Cbus c;
	
	//用户选择
	int select = 0;
	while (1)
	{
		showMenu();
		cout << "请选择：" << endl;
		cin >> select;;
		switch (select)
		{
		case 1:  // 1、查看所有班车信息
			c.print_all_information();
			break;
		case 2:   //2、添加班车
			c.input_information();
			break;
		case 3:  //3、清空所有班车
			c.clear_all_information();
			break;

		case 4:  // 4、退出系统
			c.exit_system();
			break;
		
		default:
			cout << "输入有误，请重新输入！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	
	system("pause");
	return 0;
}