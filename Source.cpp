#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	FILE* file;
	//const char* pathToFile = "C://Users//Natalya//Desktop//test//data.txt"; //Абсолютний шлях
	const char* pathToFile = "./LOGS2/testData.txt"; //Відносний шлях
	errno_t code = fopen_s(&file, pathToFile, "a+");
	if (code == 0) {
		//fputc('A', file); //посимвольна запись
		//fputs("Hello", file); //построкова запись
		cout << static_cast<char>(fgetc(file)) << endl;
		cout << static_cast<char>(fgetc(file)) << endl;
		cout << static_cast<char>(fgetc(file)) << endl;
		cout << static_cast<char>(fgetc(file)) << endl;
		cout << static_cast<char>(fgetc(file)) << endl;
		//char* str = new char[20];
		//fgets(str, 15, file);
		//cout << static_cast<char>(fgetc(file)) << endl; //-1
		//cout << str;
		fclose(file); //Закриття файлів
	}
	else
	{
		cout << "Error! Файл не відкрився!";
	}

	return 0;
}