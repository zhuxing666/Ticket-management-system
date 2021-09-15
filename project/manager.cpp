#include"manage.h"



void Cbus::print_all_information()// ��ӡ���а����Ϣ
{
	get_file_in();
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	if (!bus.empty())
	{
		cout << endl << endl << "                   ";
		cout << "    ���\t";
		cout << "    ����ʱ��\t";
		cout << "  ���վ\t";
		cout << "   �յ�վ\t";
		cout << "   �г�ʱ��\t";
		cout << "   �����\t";
		cout << "    �Ѷ�Ʊ����\t" << endl;
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
		cout << "û�а೵��Ϣ��" << endl << endl;

	}

	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");

	string sign;
	cout << endl << "                                                    ";
	cout << "��ѡ���ܣ�" << endl;
	cout << "                                                    ";
	cout << "��1����������" << endl;
	cout << "                                                    ";
	cout << "��2����������" << endl;
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "�������";
			cout << endl << "���������룺";
			continue;
		}
	}
	if (sign == "1")exit(0);
	else if (sign == "2")system("cls");

}


void Cbus::input_information()  // ��Ӱ��
{
	get_file_in();
	Bus t; //ʵ�л�
	
	while (true)
	{
		for (int j = 1; j <= 120; j++)
			printf("\033[31m#\033[0m");
		int num;
		cout << "                                                    ";
		cout << "������¼��೵��������";
		cin >> num;

		for (int i = 1; i <= num; i++)
		{
			system("cls");
			for (int j = 1; j <= 120; j++)
				printf("\033[31m#\033[0m");
			cout << "                                                    ";
			cout << "�������" << i << "��������Ϣ" << endl;
			cout << "                                                    ";
			cout << "�������Σ�";
			cin >> t.shift;
			cout << "                                                    ";
			cout << "�����뷢��ʱ�䣺";
			cin >> t.departure_time;
			cout << "                                                    ";
			cout << "���������վ��";
			cin >> t.departure_station;
			cout << "                                                    ";
			cout << "�������յ�վ��";
			cin >> t.terminus;
			cout << "                                                    ";
			cout << "�������г�ʱ�䣺";
			cin >> t.travel_time;
			cout << "                                                    ";
			cout << "������������";
			cin >> t.rated_load;
			cout << "                                                    ";
			cout << "�������Ѷ�Ʊ������";
			cin >> t.booked_number;
			bus.push_back(t); //��������


		}
		cout << "                                                    ";
		cout << "¼����Ϣ��ɣ��Ƿ����¼�룿" << endl;
		cout << "                                                    ";
		cout << "��1����" << endl;
		cout << "                                                    ";
		cout << "��2����" << endl;
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
				cerr << "�������";  // cerr ���������Ϣ��� ��
				cout << endl << "���������룺";
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

	get_file_out();//д�ļ�
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << "                                                    ";
	cout << "��ѡ���ܣ�" << endl;
	cout << "                                                    ";
	cout << "��1����������" << endl;
	cout << "                                                    ";
	cout << "��2����������" << endl;
	string sign;
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "�������";
			cout << endl << "���������룺";
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


void Cbus::clear_all_information() //���������Ϣ
{
	ofstream ofs;
	ofs.open("�೵��Ϣ.txt", ios::trunc);//��trunc ɾ�����´�����ʽ
	ofs.close();
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << endl << endl;
	cout << "                                                    ";
	cout << "�����������Ϣ!" << endl << endl;
	string sign;
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << endl;
	cout << "                                                    ";
	cout << "��ѡ���ܣ�" << endl;
	cout << "                                                    ";
	cout << "��1����������" << endl;
	cout << "                                                    ";
	cout << "��2����������" << endl;
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "�������";
			cout << endl << "���������룺";
			continue;
		}
	}
	if (sign == "1")exit(0);
	else if (sign == "2")system("cls");

}

void Cbus::exit_system()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	system("cls");
	exit(0);
}

void Cbus::get_file_out()  //д�ļ�
{
	ofstream ofs;
	ofs.open("�೵��Ϣ.txt", ios::out);
	if (!ofs.is_open())  
	{
		cout << "�ļ������ڣ�" << endl;
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
void Cbus::get_file_in() //���ļ�
{
	vector<Bus>().swap(bus);
	ifstream ifs;
	ifs.open("�೵��Ϣ.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
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