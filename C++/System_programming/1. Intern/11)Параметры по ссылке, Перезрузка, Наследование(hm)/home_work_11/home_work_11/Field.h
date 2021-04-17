#pragma once
class Field
{
	public:
		Field(int x, int y);       // ������� ����
		int AddArcher(int x, int y, Archer archer);  // ��������� ������� �� ���� 
		int AddSoldier(int x, int y, Soldier solder); // ��������� ������� �� ����
		const Archer& GetArcherById(int id) const;
		const Soldier& GetSolderById(int id) const;
		void ShowField(); // ������� � ������� ��� ���� �������
};

