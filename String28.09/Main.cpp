#include <iostream>
#include <string>	// библиотека, позволяющая работать с классом string
using namespace std;

// Возводит строку string в нижний регистр
void to_lower(string &str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
}

// Возводит строку string в верхний регистр
void to_upper(string &str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Строковый массив char
	/*char word[4]{'H', 'i', '!', '\0'};

	// Неправильный вывод
	for (int i = 0; i < 4; i++)
		cout << word[i];
	cout << endl;

	// Правильный вывод
	cout << word << endl;

	// Упрощенный вариант написания строкового массива
	char word2[] = "Hello, world!";
	cout << word2 << endl;*/

	// Строки string
	/*string str; // строковая переменная со значением " "

	cout << str << endl;

	str = "Hello, world!";
	cout << str << endl; // вывод строки

	str = "Bye, world!"; // изменение строки
	cout << str << endl;

	cout << str[1] << str[2] << endl; // обращение к отдельным элементам строки

	string new_str = str + "!!"; // конкатенация строк
	cout << new_str << endl;
	cout << new_str + " :(" << endl;

	new_str += "...";
	cout << new_str << endl;*/

	// Ввод строки
	/*string name;	// ""
	cout << "Как вас зовут (без фамилии)? -> ";
	cin >> name; // ввод до первого разделения
	cout << "Привет, " + name << "!\n";

	cin.ignore(); // очистка буфера ввода

	cout << "Как вас зовут (с фамилией)? -> ";
	getline(cin, name); // ввод всей строки консоли в переменную
	cout << "Привет, " + name << "!\n";*/

	// Задание. Пользователь вводит число, после чего вводит соответствующее количество слов, которые объединяются в одну большу строку
	/*string res;
	cout << "Введите количество слов: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Слово № " << i + 1 << ": ";
		string tmp;
		cin >> tmp;
		res += tmp + ' ';
	}
	res += "\b.";
	cout << "Результат:\n" << res << endl;*/

	// Методы строк
	string mystr = "Hello world!";

	// Методы .size и .lenght. Возвращают длину строки	
	/*cout << mystr.size() << endl;
	cout << mystr.length() << endl;*/

	// Метод .insert(). Вставляет одну строку внутрь другой. Войдовский
	/*mystr.insert(3, "NEW");
	cout << mystr << endl; // HelNEWlo world!*/

	// Метод .replace(). Заменяет часть строки новой строкой. Войдовский
	/*mystr.replace(3, 5, "NEW");
	cout << mystr << endl; // HelNEWrld!*/

	// Метод .find(). Возвращает индекс первого вхождения подстроки в строку
	/*cout << mystr.find("l") << endl; // 2
	cout << mystr.find("l", 5) << endl; // 9
	cout << mystr.find("wo") << endl; // 6
	cout << mystr.find("BYE") << endl; // мусор*/

	// Метод .rfind(). Возвращает индекс последнего вхождения подстроки в строку
	/*cout << mystr.rfind("l") << endl; // 9
	cout << mystr.rfind("l", 6) << endl; // 3
	cout << mystr.rfind("wo") << endl; // 6*/

	// Метод .substr(). Возвращает подстроку, начинающуюся с определенной позиции строки
	/*cout << mystr.substr(7) << endl; // orld!
	cout << mystr.substr(7, 3) << endl;	// orl*/

	// Функции строк
	// Функция to_string
	/*cout << "Введите число: ";
	cin >> n;
	string nstr = to_string(n); // возвращает число, превращенное в строку
	nstr += '!';
	cout << "Итог: " << nstr << endl;*/

	// Функция stoi()
	/*string str2;
	cout << "Введите строку: ";
	getline(cin, str2);
	cout << "Число: " << stoi(str2) << endl; // возвращает число, полученное из строки*/

	// Функция toupper() и tolower()
	/*cout << (char)toupper(mystr[1]) << endl;
	cout << (char)tolower(mystr[0]) << endl;*/
	to_lower(mystr);
	cout << mystr << endl;
	to_upper(mystr);
	cout << mystr << endl;

	return 0;
}