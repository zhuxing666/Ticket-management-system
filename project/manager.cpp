#include"manage.h"



void Cbus::print_all_information()// 打印所有班次信息
{
	get_file_in();
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	if (!bus.empty())
	{
		cout << endl << endl << "                   ";
		cout << "    班次\t";
		cout << "    发车时间\t";
		cout << "  起点站\t";
		cout << "   终点站\t";
		cout << "   行车时间\t";
		cout << "   额定载量\t";
		cout << "    已定票人数\t" << endl;
		for (vector<Bus>::iterator it = bus.begin(); it != bus.end(); it++)
		{
			cout << "     " << "                   ";
			cout << (*it).shift << "  \t      ";
			cout << (*it).departure_time << " \t   ";
			cout << (*it).departure_station << "   \t  ";
			cout << (*it).terminus << "     \t  ";
			cout << (*it).travel_time << "    \t     ";
			cout << (*it).rated_load << "     \t     ";
			cout << (*it).booked_number << endl;
		}
		cout << endl << endl;

	}

	else
	{
		cout << endl << endl;
		cout << "                                                    ";
		cout << "没有班车信息！" << endl << endl;

	}

	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");

	string sign;
	cout << endl << "                                                    ";
	cout << "请选择功能：" << endl;
	cout << "                                                    ";
	cout << "【1】结束程序" << endl;
	cout << "                                                    ";
	cout << "【2】返回桌面" << endl;
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "输入错误！";
			cout << endl << "请重新输入：";
			continue;
		}
	}
	if (sign == "1")exit(0);
	else if (sign == "2")system("cls");

}


void Cbus::input_information()  // 添加班次
{
	get_file_in();
	Bus t; //实列化
	
	while (true)
	{
		for (int j = 1; j <= 120; j++)
			printf("\033[31m#\033[0m");
		int num;
		cout << "                                                    ";
		cout << "请输入录入班车的数量：";
		cin >> num;

		for (int i = 1; i <= num; i++)
		{
			system("cls");
			for (int j = 1; j <= 120; j++)
				printf("\033[31m#\033[0m");
			cout << "                                                    ";
			cout << "请输入第" << i << "辆车的信息" << endl;
			cout << "                                                    ";
			cout << "请输入班次：";
			cin >> t.shift;
			cout << "                                                    ";
			cout << "请输入发车时间：";
			cin >> t.departure_time;
			cout << "                                                    ";
			cout << "请输入起点站：";
			cin >> t.departure_station;
			cout << "                                                    ";
			cout << "请输入终点站：";
			cin >> t.terminus;
			cout << "                                                    ";
			cout << "请输入行车时间：";
			cin >> t.travel_time;
			cout << "                                                    ";
			cout << "请输入额定载量：";
			cin >> t.rated_load;
			cout << "                                                    ";
			cout << "请输入已定票人数：";
			cin >> t.booked_number;
			bus.push_back(t); //放入容器


		}
		cout << "                                                    ";
		cout << "录入信息完成，是否继续录入？" << endl;
		cout << "                                                    ";
		cout << "【1】是" << endl;
		cout << "                                                    ";
		cout << "【2】否" << endl;
		string sign;
		while (1)
		{
			cin >> sign;
			if (sign == "1" || sign == "2")
			{
				break;
			}
			else
			{
				cerr << "输入错误！";  // cerr 程序错误信息输出 符
				cout << endl << "请重新输入：";
				continue;
			}
		}

		if (sign == "1")
		{
			system("cls");
			continue;
		}
		else if (sign == "2")break;


	}

	get_file_out();//写文件
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << "                                                    ";
	cout << "请选择功能：" << endl;
	cout << "                                                    ";
	cout << "【1】结束程序" << endl;
	cout << "                                                    ";
	cout << "【2】返回桌面" << endl;
	string sign;
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "输入错误！";
			cout << endl << "请重新输入：";
			continue;
		}
	}
	if (sign == "1")
	{
		system("cls");
		exit(0);
	}
	else if (sign == "2")system("cls");

}


void Cbus::clear_all_information() //清空所有信息
{
	ofstream ofs;
	ofs.open("班车信息.txt", ios::trunc);//以trunc 删除重新创建方式
	ofs.close();
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << endl << endl;
	cout << "                                                    ";
	cout << "已清空所有信息!" << endl << endl;
	string sign;
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << endl;
	cout << "                                                    ";
	cout << "请选择功能：" << endl;
	cout << "                                                    ";
	cout << "【1】结束程序" << endl;
	cout << "                                                    ";
	cout << "【2】返回桌面" << endl;
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "输入错误！";
			cout << endl << "请重新输入：";
			continue;
		}
	}
	if (sign == "1")exit(0);
	else if (sign == "2")system("cls");

}

void Cbus::exit_system()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	system("cls");
	exit(0);
}

void Cbus::get_file_out()  //写文件
{
	ofstream ofs;
	ofs.open("班车信息.txt", ios::out);
	if (!ofs.is_open())  
	{
		cout << "文件不存在！" << endl;
	}
	else
	{
		for (vector<Bus>::iterator it = bus.begin(); it != bus.end(); it++)
		{
			ofs << it->shift << " "
				<< it->departure_time << " "
				<< it->departure_station << " "
				<< it->terminus << " "
				<< it->travel_time << " "
				<< it->rated_load << " "
				<< it->booked_number << endl;

		}
		ofs.close();
	}

}
void Cbus::get_file_in() //读文件
{
	vector<Bus>().swap(bus);
	ifstream ifs;
	ifs.open("班车信息.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
	}
	else
	{
		Bus b;
		while (ifs >> b.shift &&
			ifs >> b.departure_time &&
			ifs >> b.departure_station &&
			ifs>> b.terminus &&
			ifs>> b.travel_time &&
			ifs >> b.rated_load &&
			ifs >> b.booked_number)
		{
			bus.push_back(b);
		}
		ifs.close();
	}
}