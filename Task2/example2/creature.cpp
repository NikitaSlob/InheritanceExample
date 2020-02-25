#pragma once
#include <iostream>
#include "string"
using namespace std;
class  creature
{
private:
	string title;
	double mass; //kg
protected:
	creature() : mass(0.0) {}
	creature(const creature& obj) : title(obj.title), mass(obj.mass) {}
	creature(const string& _title, double _mass) : title(_title), mass(_mass) {}
	// ���������� (�������� ��� �����������)
	virtual ~creature()
	{
		cout << " creature deleted" << endl << endl;
	}
	// ����������� ������� ��� ������ ���������� �� �������
	virtual void _print() const
	{
		cout << "title: " << title << ", mass: " << mass;
	}

public:

	// �������� ������� ��� ������ ���������� �� �������
	void print() const
	{
		cout << typeid(*this).name() << ": (";
		// ����� ����������� �������
		// �.�. ������� _print �����������, ���������� ��� �����
		// �� ������ �� �������� ������, �� � �� �����������,
		// � ����������� �� ����, ��� ������ ������� �������������� �����
		_print();
		cout << ")" << endl;

	}
	double get_mass() const
	{
		return mass;
	}
};