#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	FILE* file;
	//const char* pathToFile = "C://Users//Natalya//Desktop//test//data.txt"; //���������� ����
	const char* pathToFile = "./LOGS2/testData.txt"; //³������� ����
	errno_t code = fopen_s(&file, pathToFile, "a+");
	if (code == 0) {
		//fputc('A', file); //����������� ������
		//fputs("Hello", file); //���������� ������
		cout << static_cast<char>(fgetc(file)) << endl;
		cout << static_cast<char>(fgetc(file)) << endl;
		cout << static_cast<char>(fgetc(file)) << endl;
		cout << static_cast<char>(fgetc(file)) << endl;
		cout << static_cast<char>(fgetc(file)) << endl;
		//char* str = new char[20];
		//fgets(str, 15, file);
		//cout << static_cast<char>(fgetc(file)) << endl; //-1
		//cout << str;
		fclose(file); //�������� �����
	}
	else
	{
		cout << "Error! ���� �� ��������!";
	}

	return 0;
}