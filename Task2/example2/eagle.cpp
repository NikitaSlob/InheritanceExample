#pragma once
#include "bird.cpp"
#include <iostream>
#include "string"
#include "predator.cpp"
class eagle : public bird, public predator
{
public:
	eagle() : bird() {}
	eagle(const eagle& obj) : bird(obj), animal(obj) {}
	eagle(double _mass, double _speed, double _topfly) : bird("", 0, 0, _topfly), animal("����", _mass, _speed) {}
	// ����������� ���� ������� hunt
	// �.�. hunt ����������, ����� eagle � ������������
	bool hunt(const animal& obj)
	{
		// ������� get_mass ����� ������������� ������� eagle �� ������ animal
		// � ����� ����� bird, � ����� ����� predator
		// ����� �������, ��� ��� ����������� ����� bird
		return obj.get_mass() < get_mass() && obj.get_speed() < get_speed();

	}
};
