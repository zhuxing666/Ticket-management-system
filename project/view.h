#pragma once
#include<iostream>
using namespace std;
#include<ctime>
#include<Windows.h>
#include<cstdlib>
#include<cstdio>

class View
{
public:
	void oninit();//����ϵͳ��ʼ����
private:
	void edge();  //����߿�
	void goto_xy(int x, int y);// ������
};
