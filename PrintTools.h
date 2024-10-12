#ifndef PRINT_TOOLS__H
#define PRINT_TOOLS__H

#include <iostream>
#include <windows.h>
#include <string>

enum class Color {
	Black,
	DarkBlue,
	DarkGreen,
	DarkCyan,
	DarkRed,
	DarkMagenta,
	DarkYellow,
	LightGray,
	DarkGray,
	LightBlue,
	LightGreen,
	LightCyan,
	LightRed,
	LightMagenta,
	LightYellow,
	White
};

class PrintTools {
public:
	static void clearConsole() {
		system("cls");
	}

	static void write(const std::string& message, Color color) {
		auto hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
		auto originalColor = consoleInfo.wAttributes;

		SetConsoleTextAttribute(hConsole, (int)color);
		std::cout << message;

		SetConsoleTextAttribute(hConsole, originalColor);
	}

	static void writeLine(const std::string& message, Color color) {
		write(message, color);
		std::cout << std::endl;
	}
};

#endif