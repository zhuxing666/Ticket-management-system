#include<iostream>
using namespace std;
#include<cstdio>
#include"view.h"
#include"manage.h"

//��Ʊ������Ϣ
void showMenu()
{
	for (int j = 1; j <= 120; j++)
	    printf("\033[35m#\033[1m");
	printf
	(
		"\n"
		"\n"
		"\n"
		"                                                    ��Ʊ����ϵͳ             \n"
		"\n"
		"\n"
		"\n"
		"                                              ��ѡ����\n"
		"                                            ��1���鿴���а೵��Ϣ\n"
		"                                            ��2����Ӱ೵��Ϣ\n"
		"                                            ��3��������а೵��Ϣ\n"
		"                                            ��4���˳�ϵͳ\n"
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
	
	//�û�ѡ��
	int select = 0;
	while (1)
	{
		showMenu();
		cout << "��ѡ��" << endl;
		cin >> select;;
		switch (select)
		{
		case 1:  // 1���鿴���а೵��Ϣ
			c.print_all_information();
			break;
		case 2:   //2����Ӱ೵
			c.input_information();
			break;
		case 3:  //3��������а೵
			c.clear_all_information();
			break;

		case 4:  // 4���˳�ϵͳ
			c.exit_system();
			break;
		
		default:
			cout << "�����������������룡" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	
	system("pause");
	return 0;
}