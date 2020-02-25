#pragma once
#include "animal.cpp"
#include <iostream>
#include "string"
class predator : virtual public animal
{
protected:
	predator() {}
public:
	~predator() {}
	// ����� ����������� ������� hunt ����� ����������
	// ����������� ����������� �������,
	// ������� �� ������� ����������� �� ������ (obj)
	virtual bool hunt(const animal& obj) = 0;
	// �.�. hunt ����� �����������, ����� predator �������� �����������
};