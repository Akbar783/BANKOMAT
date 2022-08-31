#include <iostream>

using namespace std;

double balanse12;
int main()
{
	setlocale(LC_ALL, "rus");

	cout << "\t\t\t    || Добропожаловать в Беларусбанк || " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "\t\t\t    || Достуые карты для банкомата: ||" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "\t\t\t    || Мир,   MasterCard,  VisaGold ||" << endl;

	int yourbalanse;
	int none;
	cout << "-------------------------------------------------" << endl;
	cout << "Пожалуйста введите начальную цифру карты: ";
	cin >> none;

	if (none == 561698)
	{
		int kod;
		cout << "Пожалуйста введите пароль: ";
		cin >> kod;
		if (kod == 1267)
		{
			for (int i = 0; i < 3; i++)
			{
				double yourbalanse = 100246;
				balanse12 = yourbalanse;
				for (int x = 1; x < 10; x++)
				{
					cout << " Карта имени Mир " << endl;
					double withdraw, deposit;
					int choise;
					cout << endl;
					if (x == 1)
					{
						cout << "\t\t || Доступные карты для банкомата: ||" << endl;
						cout << "-------------------------------------------------" << endl;
						cout << "\t\t Мир, MasterCard, VisaGold" << endl;
						cout << "-------------------------------------------------" << endl;
						cout << "\t\t Банкомат" << endl;
						cout << "Выберите действия" << endl;
					}
					{
						cout << "-------------------------------------------------" << endl;
						cout << "\t\t | Главный экран | " << endl;
						cout << "| [1]Проверить баланс" << endl;
						cout << "| [2]Обналичивать" << endl;
						cout << "| [3]Oперация оплаты телефона" << endl;
						cout << "| [4]Пополнить карту" << endl;
						cout << "| [5]Вернуть карту или выйти" << endl;
						cout << endl;
						cout << "-------------------------------------------------" << endl;
						cout << "Выберите действия: ";
						cin >> choise;

						switch (choise)

						{
						case 1:
							cout << "Проверка баланса" << endl;
							cout << "Ваш баланс: " << balanse12 << " BYN " << endl;
							continue;
						case 2:
							cout << " Возможные обналичивание сумму: " << endl;
							cout << " 5 BYN " << endl;
							cout << " 10 BYN " << endl;
							cout << " 15 BYN " << endl;
							cout << " 20 BYN " << endl;
							cout << " 100 BYN " << endl;
							cout << "Введите сумму" << endl;
							int d;
							cin >> d;
							balanse12 = balanse12 - d;
							cout << " Ваш баланс в остатке: " << endl;
							cout << balanse12 << endl;
							continue;
						case 3:
							cout << "Введите номер телефона: ";
							int c, v;
							cin >> c;
							cout << "Ваш номер:  " << c << endl;
							cout << "Введите суму для платежа: " << endl;
							cin >> v;
							balanse12 = balanse12 - v;
							cout << "Вашем балансе:  " << balanse12 << "BYN" << endl;
							continue;
						case 4:
							cout << "Перевод средств" << endl;
							cout << "Введите сумму для пополнения карту" << endl;
							cout << "Введите номер карты: ";
							int с;
							cin >> с;
							cout << "Введите сумму: " << endl;
							int i;
							cin >> i;
							cout << "Ваш баланс: " << balanse12 << endl;
							balanse12 = balanse12 - i;
							continue;
						case 5:
							cout << "Возьмите вашу карту" << endl;
							cout << "Спасибо что выбрали наш банк" << endl;
							return 0;

						}
					}

				}
			}
		}
		else
		{
			cout << " Вы неправильно ввели пароль " << endl;
			cout << " Папробуйте ещё раз " << endl;
		}
	}
	if (none == 561558)
	{
		int kod;
		cout << "Пожадуйста введите пароль: ";
		cin >> kod;
		if (kod == 1267)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << " Карта имени MasterCard " << endl;
				double yourbalanse = 201569;
				balanse12 = yourbalanse;
				for (int x = 1; x < 10; x++)
				{
					double withdraw, deposit;
					int choise;
					cout << endl;
					if (x == 1)
					{
						cout << "\t\t || Достуые карты для банкомата: ||" << endl;
						cout << "-------------------------------------------------" << endl;
						cout << "Мир, MasterCard, VisaGold" << endl;
						cout << "-------------------------------------------------" << endl;
						cout << "\t\t Банкомат" << endl;
						cout << "Выберите действия" << endl;
					}
					{
						cout << "-------------------------------------------------" << endl;
						cout << "\t\t | Главный экран | " << endl;
						cout << "| [1]Проверить баланс" << endl;
						cout << "| [2]Обналичивать" << endl;
						cout << "| [3]Oперация оплаты телефона" << endl;
						cout << "| [4]Пополнить карту" << endl;
						cout << "| [5]Вернуть карту или выйти" << endl;
						cout << endl;
						cout << "-------------------------------------------------" << endl;
						cout << "Выберите действия: ";
						cin >> choise;

						switch (choise)

						{
						case 1:
							cout << "Проверка баланса" << endl;
							cout << "Ваш баланс: " << balanse12 << " BYN " << endl;
							continue;
						case 2:
							cout << " Возможные обналичивание сумму: " << endl;
							cout << " 5 BYN " << endl;
							cout << " 10 BYN " << endl;
							cout << " 15 BYN " << endl;
							cout << " 20 BYN " << endl;
							cout << " 100 BYN " << endl;
							cout << "Введите сумму" << endl;
							int d;
							cin >> d;
							balanse12 = balanse12 - d;
							cout << " Ваш баланс в остатке: " << endl;
							cout << balanse12 << endl;
							continue;
						case 3:
							cout << "Введите номер телефона: ";
							int c, v;
							cin >> c;
							cout << "Ваш номер:  " << c << endl;
							cout << "Введите суму для платежа: " << endl;
							cin >> v;
							balanse12 = balanse12 - v;
							cout << "Вашем балансе:  " << balanse12 << "BYN" << endl;
							continue;
						case 4:
							cout << "Перевод средств" << endl;
							cout << "Введите сумму для пополнения карту" << endl;
							cout << "Введите номер карты: ";
							int с;
							cin >> с;
							cout << "Введите сумму: " << endl;
							int i;
							cin >> i;
							cout << "Ваш баланс: " << balanse12 << endl;
							balanse12 = balanse12 - i;
							continue;
						case 5:
							cout << "Возьмите вашу карту" << endl;
							cout << "Спасибо что выбрали наш банк" << endl;
							return 0;

						}
					}

				}
			}
		}
		else
		{
			cout << " Вы неправильно ввели пароль " << endl;
			cout << " Папробуйте ещё раз " << endl;
		}
	}
	if (none == 596458)
	{
		int kod;
		cout << "Пожадуйста введите пароль: ";
		cin >> kod;
		if (kod == 2348)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << " Карта имени MasterCard " << endl;
				double yourbalanse = 141233;
				balanse12 = yourbalanse;
				for (int x = 1; x < 10; x++)
				{
					double withdraw, deposit;
					int choise;
					cout << endl;
					if (x == 1)
					{
						cout << "\t\t || Достуые карты для банкомата: ||" << endl;
						cout << "-------------------------------------------------" << endl;
						cout << "Мир, MasterCard, VisaGold" << endl;
						cout << "-------------------------------------------------" << endl;
						cout << "\t\t Банкомат" << endl;
						cout << "Выберите действия" << endl;
					}
					{
						cout << "-------------------------------------------------" << endl;
						cout << "\t\t | Главный экран | " << endl;
						cout << "| [1]Проверить баланс" << endl;
						cout << "| [2]Обналичивать" << endl;
						cout << "| [3]Oперация оплаты телефона" << endl;
						cout << "| [4]Пополнить карту" << endl;
						cout << "| [5]Вернуть карту или выйти" << endl;
						cout << endl;
						cout << "-------------------------------------------------" << endl;
						cout << "Выберите действия: ";
						cin >> choise;

						switch (choise)

						{
						case 1:
							cout << "Проверка баланса" << endl;
							cout << "Ваш баланс: " << balanse12 << " BYN " << endl;
							continue;
						case 2:
							cout << " Возможные обналичивание сумму: " << endl;
							cout << " 5 BYN " << endl;
							cout << " 10 BYN " << endl;
							cout << " 15 BYN " << endl;
							cout << " 20 BYN " << endl;
							cout << " 100 BYN " << endl;
							cout << "Введите сумму" << endl;
							int d;
							cin >> d;
							balanse12 = balanse12 - d;
							cout << " Ваш баланс в остатке: " << endl;
							cout << balanse12 << endl;
							continue;
						case 3:
							cout << "Введите номер телефона: ";
							int c, v;
							cin >> c;
							cout << "Ваш номер:  " << c << endl;
							cout << "Введите суму для платежа: " << endl;
							cin >> v;
							balanse12 = balanse12 - v;
							cout << "Вашем балансе:  " << balanse12 << "BYN" << endl;
							continue;
						case 4:
							cout << "Перевод средств" << endl;
							cout << "Введите сумму для пополнения карту" << endl;
							cout << "Введите номер карты: ";
							int с;
							cin >> с;
							cout << "Введите сумму: " << endl;
							int i;
							cin >> i;
							cout << "Ваш баланс: " << balanse12 << endl;
							balanse12 = balanse12 - i;
							continue;
						case 5:
							cout << "Возьмите вашу карту" << endl;
							cout << "Спасибо что выбрали наш банк" << endl;
							return 0;

						}
					}

				}
			}
		}
		else
		{
			cout << " Вы неправильно ввели пароль " << endl;
			cout << " Папробуйте ещё раз " << endl;
		}
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "Вы неправильно ввели номер карты" << endl;
		cout << "Попробуйте ещё раз" << endl;
		cout << "-------------------------------------------------" << endl;
	}
	return 0;
}