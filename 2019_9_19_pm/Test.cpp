#include<iostream>
using namespace std;
#include<assert.h>

#if 0
class Date
{

public:

	
	Date()
	{
		_year = 1998;
		_month = 2;
		_day = 6;

	}
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	
		cout << "Date���캯��" << endl;

	}

	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void PrintDate()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
	
private:
	int _year;
	int _month;
	int _day;
	Time _t;

};

class Time
{
public:
	Time(int hour ,int minute , int second)
	{
		_hour = hour;
		_minute = minute;
		_second = second;
	}
private:
	int _hour;
	int _minute;
	int _second;


};
void TestDate() // �����캯�����뺯�����鿴�������������У����캯��һ�������˼���
{
	Date d(2019, 9, 19);
}

int main()
{
	int  t;
	t =10;

	int b(10);


	//d.SetDate(2019,9,19);
	//d.PrintDate();

	TestDate(); //�ڶ��������������ֻ����һ�Ρ�
	system("pause");
	return 0;
}


#endif


typedef int DataType;

class SeqList
{
public :
	SeqList(size_t capacity = 10)
	{
		cout<< "SeqList "<<endl;

		// �Ӷ�������ռ�
		_array = (DataType*)malloc(sizeof(DataType)*capacity);
		if (nullptr == _array)
		{
			assert(0);
			return;
		}
	
		_size = 0;

	};



private:
	DataType* _array;
	size_t _size;
	size_t _capacity;


};
void TestSeqList()
{
	SeqList s;
}
int  main()
{
	TestSeqList();

	_CrtDumpMemoryLeaks();// ����ڴ�й©
	system("pause");
	return 0;
}
