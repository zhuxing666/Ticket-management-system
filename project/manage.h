#pragma once
#include<iostream>
using namespace std;
#include<cstdio>
#include<fstream>
#include<string>
#include<vector>
#include<cstdlib>

struct Bus
{
	string shift; // 班次
	string departure_time;//出发时间
	string departure_station; //起点站
	string terminus; //终点点站
	string travel_time; //形成
	string rated_load; // 额定载量
	string booked_number; // 已经预订人数

};

class Cbus
{
public:
	void print_all_information(); // 打印所有班次信息
	void input_information();   // 添加班次
	void clear_all_information();  //清空所有信息
	void exit_system(); // 退出系统功能
private:
	vector<Bus>bus;
	void get_file_out();  //写文件
	void get_file_in(); //读文件
};