#include <iostream>
#include <Windows.h>





int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int pizza[5]{};
	double cena_pizza[5] = { 60, 70,80,50,95 };
	int zacuski[3]{};
	double cena_zacuski[3] = { 199,150,99 };
	int napitok[4]{};
	double cena_napitci[4] = { 59,59,149,149 };
	int povtor = 1;
	int vibor = 0;
	int col_p = 0;
	int col = 0;
	int col_n = 0;
	double cena = 0;
	int i = 0;

	while (true)
	{
		std::cout << "\n1)пипирони - 60\n2)сырная - 70\n3)гречиская - 80\n4)деревенская - 50\n5)фридей - 95\n6)дальше \n";
		std::cin >> vibor;
		if (vibor == 6)
		{
			break;
		}
		else
		{
			int colic = 0;
			std::cout << "введите количество: \n";
			std::cin >> colic;
			pizza[vibor - 1]+=colic;
		}
	}
	col_p = pizza[1] + pizza[2] + pizza[3] + pizza[0] + pizza[4];
	while (true)
	{
		std::cout << "\n1)цезарь - 199\n2)окрошка - 150\n3)зимний салат - 99\n4)дальше \n";
		std::cin >> vibor;
		if (vibor == 4)
		{
			break;
		}
		else
		{
			int colic = 0;
			std::cout << "введите количество: \n";
			std::cin >> colic;
			napitok[vibor - 1]+=colic;
		}
	}

	while (true)
	{
		std::cout << "\n1)кокакола мал. - 59\n2)лимон-лайм мал. - 59\n3)кокакола бол. - 149\n4)лимон-лайм бол. - 149\n5)дальше \n";
		std::cin >> vibor;
		if (vibor == 5)
		{
			break;
		}
		else
		{
			int colic = 0;
			std::cout << "введите количество: \n";
			std::cin >> colic;
			napitok[vibor - 1]+=colic;
		}
	}
	col_n = napitok[2] + napitok[3];
	while (col_p > 0)
	{
		if (col < 4)
		{
			col += 1;
			col_p = col_p - 1;
		}
		else if (col == 4)
		{
			col = 0;
			col_p = col_p - 1;
			if (pizza[3] > 0)
			{
				pizza[3] -= 1;
			}
			else
			{
				if (pizza[0] > 0)
				{
					pizza[0] -= 1;
				}
				else
				{
					if (pizza[1] > 0)
					{
						pizza[1] -= 1;
					}
					else
					{
						if (pizza[2] > 0)
						{
							pizza[2] -= 1;
						}
						else
						{
							pizza[4] -= 1;
						}
					}
				}
			}
		}
	}
	if (col_n >= 4)
	{
		if (napitok[2] > 0)
		{
			napitok[2] -= 1;
		}
		else
		{
			napitok[3] -= 1;
		}
	}
	for (i = 0; i < 5; i += 1)
	{
		cena += pizza[i] * cena_pizza[i];
	}
	for (i = 0; i < 3; i += 1)
	{
		cena += zacuski[i] * cena_zacuski[i];
	}
	for (i = 0; i < 4; i += 1)
	{
		cena += napitok[i] * cena_napitci[i];
	}
	if (cena > 2500)
	{
		cena = cena / 100 * 85;
	}
	std::cout << "\nцена: " << cena;
}
