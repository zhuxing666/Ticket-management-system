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
	string shift; // ���
	string departure_time;//����ʱ��
	string departure_station; //���վ
	string terminus; //�յ��վ
	string travel_time; //�γ�
	string rated_load; // �����
	string booked_number; // �Ѿ�Ԥ������

};

class Cbus
{
public:
	void print_all_information(); // ��ӡ���а����Ϣ
	void input_information();   // ��Ӱ��
	void clear_all_information();  //���������Ϣ
	void exit_system(); // �˳�ϵͳ����
private:
	vector<Bus>bus;
	void get_file_out();  //д�ļ�
	void get_file_in(); //���ļ�
};