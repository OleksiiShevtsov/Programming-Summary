#pragma once
class Field
{
	public:
		Field(int x, int y);       // размеры поля
		int AddArcher(int x, int y, Archer archer);  // добавляет лучника на поле 
		int AddSoldier(int x, int y, Soldier solder); // добавляет лучника на поле
		const Archer& GetArcherById(int id) const;
		const Soldier& GetSolderById(int id) const;
		void ShowField(); // выводит в консоль все поле игроков
};

