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
	void oninit();//登入系统初始界面
private:
	void edge();  //界面边框
	void goto_xy(int x, int y);// 光标加载
};
