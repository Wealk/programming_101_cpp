#include <windows.h>
#include <iostream>
#include <conio.h>
#include <limits>
#include "PrintTools.h"
#include "1Primitives.h"
#include "2Operators.h"
#include "3ControlFlow.h"
#include "4Sets.h"
#include "5Methods.h"
#include "6ObjetcOrientedProgramming.h"
#include "7AdvancedSets.h"

#pragma execution_character_set( "utf-8" )

void printMainMenu();
void printSyllabus(int);
void printExercices(int);
int readUserOption();

int main(int argc, char* argv[]) {
	SetConsoleOutputCP(65001); // Set UTF-8

	auto input = 0;
	do {
		printMainMenu();
		std::cout << std::endl << std::endl;
		input = readUserOption();

		if (input >= 1 && input <= 8) {
			PrintTools::clearConsole();
			PrintTools::writeLine("", Color::LightYellow);
			printSyllabus(input);
			PrintTools::writeLine("\n\n", Color::LightYellow);
			printExercices(input);
		}
	} while (input != 0);
}

void printMainMenu() {
	PrintTools::writeLine("¡BIENVENIDOS AL CURSO DE PROGRAMACIÓN 101!\n", Color::LightYellow);
	std::cout << "Te recomiendo que sigas los vídeos explicativos con la teoría de cada sección para mejores resultados" << std::endl;
	std::cout << "De esta manera aprenderás a revisar el código buscando la sección correspondiente a la explicación" << std::endl;
	std::cout << "Lo que mejorará tu comprensión y te ayudará a resolver los ejercicos de manera más eficiente" << std::endl;
	std::cout << "Recuerda no frustarte, buscar información siempre que la necesites y intentar hacer las cosas tú mism@" << std::endl;
	std::cout << "Esta bien respaldarte en Google, ChatGPT, StackOverflow, Copilot, ... pero la idea es que aprendas ;)" << std::endl;
	std::cout << "\nMuy bien pues...";
	PrintTools::writeLine("¡'Allévamos'!", Color::LightMagenta);

	std::cout << "\nCanal de ";
	PrintTools::write("Youtube", Color::LightRed);
	std::cout << ": ";
	PrintTools::writeLine("https://www.youtube.com/@wealk_dev", Color::LightCyan);

	std::cout << "Cuenta de ";
	PrintTools::write("X (Twitter)", Color::DarkGreen);
	std::cout << ": ";
	PrintTools::writeLine("https://x.com/wealk90 \n", Color::LightCyan);

	std::cout << "¿Qué capítulo quieres revisar?" << std::endl;
	std::cout << "\t1- Tipos de datos primitivos" << std::endl;
	std::cout << "\t2- Operadores" << std::endl;
	std::cout << "\t3- Control del flujo de ejecución" << std::endl;
	std::cout << "\t4- Conjuntos" << std::endl;
	std::cout << "\t5- Métodos" << std::endl;
	std::cout << "\t6- Programación orientada a objetos" << std::endl;
	std::cout << "\t7- Conjuntos avanzados" << std::endl;
	std::cout << "\t8- Práctica final" << std::endl;
	std::cout << "\n\t0- Salir" << std::endl;
}

void printSyllabus(int index) {
	switch (index) {
		case 1:
			Primitives::information();
			break;
		case 2:
			Operators::information();
			break;
		case 3:
			ControlFlow::information();
			break;
		case 4:
			Sets::information();
			break;
		case 5:
			Methods::information();
			break;
		case 6:
			ObjectOrientedProgramming::information();
			break;
		case 7:
			AdvancedSets::information();
			break;
		case 8:
			break;
	}
}

void printExercices(int index) {
	switch (index) {
		case 1:
			Primitives::exercices();
			break;
		case 2:
			Operators::exercices();
			break;
		case 3:
			ControlFlow::exercices();
			break;
		case 4:
			Sets::exercices();
			break;
		case 5:
			Methods::exercices();
			break;
		case 6:
			ObjectOrientedProgramming::exercices();
			break;
		case 7:
			AdvancedSets::exercices();
			break;
		case 8:
			break;
	}
}

int readUserOption() {
	auto option = -1;
	while (option < 0) {
		std::cout << "Opción: ";
		char input = _getch();
		std::cout << input;
		if (std::isdigit(input) && input >= '0' && input <= '8') option = input - '0';
		else PrintTools::writeLine(" \tNop, Intenta de nuevo :)", Color::LightRed);
	}

	return option;
}
