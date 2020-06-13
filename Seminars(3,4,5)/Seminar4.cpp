//выбор действия четвертого семинара
#include"Libraries.h"
#include"Prototypes.h"

void Seminar4()
{
	MenuSeminar4();

	while (true)
	{
		char section;

		cout << " \n Which section of seminar 4 do you want to choose? "
			<< "\n\tEnter number--> ";
		cin >> section;

		switch (section)
		{
		case '1':
			Seminar4_1();
			break;
		case '2':
			Seminar4_2();
			break;
		default:
			cout << "Erorr";
			break;
		}
		char flag3;

		cout << "\n Want to choose another section in the seminar(1),want to choose another seminar any\n ";
		cin >> flag3;

		if (flag3 != '1')
			break;
		else
			MenuSeminar4();


	}
}
