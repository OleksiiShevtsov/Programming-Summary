#include <string>
using namespace std;
class StarShip{
	private:
		string name;
		int armor;
		int health;
		int damage;
	public:
		void SetTotalName(string);
		void SetTotalArmor(int armor_add);
		void SetTotalHealth(int health_add);
		void SetTotalDamage(int damage_add);
			
		string GetTotalName();
		int GetTotalArmor();
		int GetTotalHealth();
		int GetTotalDamage();
		
		void characteristics();	
};
