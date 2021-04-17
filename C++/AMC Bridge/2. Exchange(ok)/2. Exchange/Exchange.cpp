#include <iostream>
#include <iomanip>
using namespace std;

class Exchange{
	public:
		Exchange() {
			
			int num, num2;
			
			for (int i = 0; ; i++) {
				
				cin >> num;
				if (num == -1) { break; }
				
				switch (num){
					case 1: cin >> num2; Product = num2; break;
					case 2: cin >> num2; Stock = num2; break;
					case 3: cin >> num2; Futures = num2; break;
					default: break;
				}
			}
		}

		Exchange(int get_Product, int get_Stock, int get_Futures) {
			
			int num;
			cin >> num;
			
			if (num == 0) {
				Product = get_Product;
				Stock = get_Stock;
				Futures = get_Futures;
				
				int minus_one;
				cin >> minus_one;

			} else {
				
				int num, num2;
				
				for (int i = 0; ; i++) {
					cin >> num;
					if (num == -1) { break; }
					
					switch (num){
						case 1: cin >> num2; Product = num2; break;
						case 2: cin >> num2; Stock = num2; break;
						case 3: cin >> num2; Futures = num2; break;
						default: break;
					}
				}

				Product = Product + get_Product;
				Stock = Stock + get_Stock;
				Futures = Futures + get_Futures;
			}
		}

		int get_Product() {
			return Product;
		}

		int get_Stock() {
			return Stock;
		}

		int get_Futures() {
			return Futures;
		}

		double Output(int USD_exchange_rate) {
			double Cost_Product, Cost_Stock, Cost_Futures, Revenue_Product, Revenue_Stock, Revenue_Futures;
			Cost_Product = USD_exchange_rate * Product;
			Cost_Stock = USD_exchange_rate * Stock;
			Cost_Futures = USD_exchange_rate * Futures;
			Revenue_Product = Cost_Product * 1.2;
			Revenue_Stock = Cost_Product * Stock / 2;
			Revenue_Futures = Cost_Futures * 1.5;
			return Revenue_Product - Cost_Product + Revenue_Stock - Cost_Stock + Revenue_Futures - Cost_Futures;
		}
		
	private:
		int Product = 0;
		int Stock = 0;
		int Futures = 0;
};

int main() {

	Exchange ex1;
	
	int Initial_USD_exchange_rate;
	cin >> Initial_USD_exchange_rate;
	
	Exchange ex2(ex1.get_Product(), ex1.get_Stock(), ex1.get_Futures());
	
	int New_USD_exchange_rate;
	cin >> New_USD_exchange_rate;

	Exchange ex3(ex2.get_Product(), ex2.get_Stock(), ex2.get_Futures());
	
	int Final_USD_exchange_rate;
	cin >> Final_USD_exchange_rate;

	cout << setiosflags(ios::fixed) << setprecision(8) << ex1.Output(Initial_USD_exchange_rate) << " ";
	cout << setiosflags(ios::fixed) << setprecision(8) << ex2.Output(New_USD_exchange_rate) << " ";
	cout << setiosflags(ios::fixed) << setprecision(8) << ex3.Output(Final_USD_exchange_rate);
	
	return 0;
}
