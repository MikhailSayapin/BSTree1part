#include <iostream>
#include <string>
#include <fstream>
#include "BSTree.h"
#include <stdlib.h>

using namespace std;
using namespace BSTree;

void MenuOut()
{
	cout << "\n\nВыберите одну из операций:" << endl;
	cout << "1. Вывести дерево на экран" << endl;
	cout << "2. Вывести список узлов дерева:" << endl;
	cout << "   a. Прямой обход" << endl;
	cout << "   b. Поперечный обход" << endl;
	cout << "   c. Обратный обход" << endl;
	cout << "3. Добавить узел в дерево" << endl;
	cout << "4. Удалить узел из дерева" << endl;
	cout << "5. Сохранить дерево в файл" << endl;
	cout << "6. Загрузить дерево из файла" << endl;
	cout << "7. Проверить наличие узла" << endl;
	cout << "8. Завершение работы" << endl;
	cout << "9. Удалить дерево" << endl << endl;

}
void Menu_for_case2()
{
	cout << "a - Прямой обход" << endl;
	cout << "b - Поперечный обход" << endl;
	cout << "c - Обратный обход" << endl;
}
int main(int argc, char * argv[])
{
	setlocale(LC_ALL, "Russian");
	Tree *tree = new Tree;
	for (int i = 0; i < argc - 1; i++)
	{
		tree->add_node(atoi(argv[i + 1]));
	}
	while (true)
	{
		MenuOut();
		unsigned int ch;
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
			tree->print_tree();
			break;
		}
		case 2:
		{
			char ch;
			Menu_for_case2();
			cin >> ch;
			if (ch == 'a')
			{
				tree->straight();
				break;
			}

			if (ch == 'b')
			{
				tree->symmetric();
				break;
			}

			if (ch == 'c')
			{
				tree->inverce();
				break;
			}

			else
			{
				cout << "Неправильный ввод" << endl;
			}
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			break;
		}
		case 5:
		{
			break;
		}
		case 6:
		{
			break;
		}
		case 7:
		{
			break;
		}
		case 8:
		{
			string *exit = new string;
			cout << "Вы хотите выйти?" << endl;
			cin >> *exit;
			if ((*exit == "y") || (*exit == "Y") || (*exit == "yes") || (*exit == "Yes") || (*exit == "YES"))
			{
				return 0;
			}

			if ((*exit == "n") || (*exit == "N") || (*exit == "no") || (*exit == "No") || (*exit == "NO"))
			{
				cout << endl;
				break;
			}

			else
			{
				cout << "Неверный ввод" << endl << endl;
			}
			delete exit;
			break;
		}
		default:
		{
			cout << "Неверный ввод" << endl << endl;
			return 0;
		}
		}
	}

}
