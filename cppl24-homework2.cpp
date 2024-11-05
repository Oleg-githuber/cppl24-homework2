#include <iostream>
// using namespace std;		// Обращение к пространсту имён std указано во всём последующем коде. Эта строка не влияет на программу

struct point {
	double m_x;
	double m_y;
	point(double x, double y) {
		m_x = x;
		m_y = y;		// Некорректное обращение к полю класса (структуры)
	}
};		// В конце класса, структуры должна быть точка с запятой

void print_point(const point& point_object);	// "Don't repeat yourself" - Функция реализована ниже. 
												// Либо в этом месте оставить объявление без реализации, либо удалить её в другом месте

int main()		// Язык C++ - регистрозависимый. Точкой входа в программу является функция main, а не Main
{
	int i;	// Переменная используется только в цикле. Незачем объявлять её здесь. Но, в принципе, программу этим не испортишь.
	for (i = 0; i < 5; i++) {		// Была лишняя точка с запятой
		point my_point(i, 2 * i);	// Используется неявное преобразование типов
		print_point(my_point);
	}
	return 0;
}

void print_point(const point& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}