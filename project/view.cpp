#include"view.h"


void View::edge()//����߿����
{
	int x1 = 0, y1 = 0;
	for (int i = 0; i < 30; i++)//���д�ӡ��Ϸ�߿�
	{
		y1 = i;
		goto_xy(x1, y1);//������ƶ���i����ʼ��
		if (i == 0 || i == 29)//�ڵ�1,30�д�ӡ���±߿�
		{
			for (int j = 1; j <= 60; j++)
			{
				printf("\033[31m��\033[0m");
			}
		}
		else//������ֻ��ӡ���ұ߿�
		{
			printf("\033[36m��\033[0m");
			x1 = 118;
			goto_xy(x1, y1);
			printf("\033[36m��\033[0m");
			x1 = 0;
		}

	}
}


void View::goto_xy(int x, int y)// ��ȡ���
{
	HANDLE HOut = GetStdHandle(STD_OUTPUT_HANDLE); //��ȡ��׼����ľ��
	COORD pos = { x, y };//�ڿ���̨���λ��x,y 
	SetConsoleCursorPosition(HOut, pos);//APi���ù��λ��
}

void View::oninit()//����ϵͳ��ʼ����
{
	edge();
	goto_xy(44, 3);
	system("color");
	printf("   \33[36m\33[1m  ��ӭʹ�ó�Ʊ����ϵͳ");
	goto_xy(48, 5);
	cout << "      ϵͳ��ʼ����";
	goto_xy(38, 15);
	Sleep(1000);
	cout << "���ڽ���ϵͳ";
	Sleep(800);
	goto_xy(38, 18);
	Sleep(700);
	for (int i = 0; i < 20; i++)
	{
		Sleep(500);
		cout << "\033[1;40;32m>\033[1m";
	}
	goto_xy(38, 20);
	cout << "��������ϵͳ";
	Sleep(2000);
	for (int i = 1; i <= 10; i++)
	{
		if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6)Sleep(350);
		else Sleep(200);
		cout << '.';
	}
	system("cls");

}