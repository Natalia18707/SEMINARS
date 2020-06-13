//выбор действия третьего семинара
#include"Libraries.h"
#include"Prototypes.h"
void Seminar3()
{

	MenuSeminar3();
	while (true)
	{
		char section;

		cout << " \n Which section of seminar 3 do you want to choose? "
			<< "\n\tEnter number--> ";
		cin >> section;

		switch (section)
		{
		case '1':
			Seminar3_1();
			break;
		case '2':
			Seminar3_2();
			break;
		case '3':
			Seminar3_3();
			break;
		default:
			cout << "Eror";
			break;
		}
		char flag3;

		cout << "\n Want to choose another section in the seminar(1),want to choose another seminar any\n ";
		cin >> flag3;

		if (flag3 != '1')
			break;
		else
			MenuSeminar3();


	}


}