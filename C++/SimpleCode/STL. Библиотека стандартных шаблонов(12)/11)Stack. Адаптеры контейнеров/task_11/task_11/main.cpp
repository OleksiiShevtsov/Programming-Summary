#include <iostream>
#include <vector>
#include <list>
#include <deque>
//подключение библеотеки стек
#include <stack>

//stack - очередь
//stack не самостоятельный контейнир а адаптер для контейнера
//Контейнер ограничиваеться функционалом stack!!!

//принцып реализации: последний вошел, первый вышел

//Перебрать элементы в stack нельзя!!!

using namespace std;

int main() {

	//реализация - stack
	stack<int, vector<int>> st;

	//создает метод с копированием
	st.push(20);
	st.push(30);
	st.push(40);
	//создает метод без копированием
	st.emplace(50);
	//pop - извлекает последний элемент 
	st.pop();//(в данном случае 50)
	//top() - возвращяет ссылку на последний елемент в очереди
	cout << st.top() << endl;

	//перебор элементов с извлечением
	/*
	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}
	*/

	//_Get_container() - возвращает контейнер в сыром виде
	//по умолчанию это - deque
	auto a = st._Get_container();

	int exit; cin >> exit; return 0;
}