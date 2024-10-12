#ifndef PRIMITIVES__H
#define PRIMITIVES__H

#include <iostream>
#include <limits>
#include <string>

class Primitives {
public:
	static void information() {
		// Condicionales
		bool boolFalse = false;
		bool boolTrue = true;
		std::cout << "- {typeof(bool)} ({sizeof(bool)} bytes), False: {boolFalse}, True: {boolTrue}, IsObject: {typeof(bool) is object}" << std::endl;

		// Enteros
		int8_t sbyteMinValue = INT8_MIN;
		int8_t sbyteMaxValue = INT8_MAX;
		std::cout << "- {typeof(sbyte)} ({sizeof(sbyte)} bytes), MinValue: {sbyteMinValue}, MaxValue: {sbyteMaxValue}, IsObject: {typeof(sbyte) is object}" << std::endl;

		uint8_t  byteMinValue = 0;
		uint8_t  byteMaxValue = UINT8_MAX;
		std::cout << "- {typeof(byte)} ({sizeof(byte)} bytes), MinValue: {byteMinValue}, MaxValue: {byteMaxValue}, IsObject: {typeof(byte) is object}" << std::endl;

		short shortMinValue = SHRT_MIN;
		short shortMaxValue = SHRT_MAX;
		std::cout << "- {typeof(short)} ({sizeof(short)} bytes), MinValue: {shortMinValue}, MaxValue: {shortMaxValue}, IsObject: {typeof(short) is object}" << std::endl;

		unsigned short ushortMinValue = 0;
		unsigned short ushortMaxValue = USHRT_MAX;
		std::cout << "- {typeof(ushort)} ({sizeof(ushort)} bytes), MinValue: {ushortMinValue}, MaxValue: {ushortMaxValue}, IsObject: {typeof(ushort) is object}" << std::endl;

		int intMinValue = INT_MIN;
		int intMaxValue = INT_MAX;
		std::cout << "- {typeof(int)} ({sizeof(int)} bytes), MinValue: {intMinValue}, MaxValue: {intMaxValue}, IsObject: {typeof(int) is object}" << std::endl;

		unsigned int uintMinValue = 0;
		unsigned int uintMaxValue = UINT_MAX;
		std::cout << "- {typeof(uint)} ({sizeof(uint)} bytes), MinValue: {uintMinValue}, MaxValue: {uintMaxValue}, IsObject: {typeof(uint) is object}" << std::endl;

		long longMinValue = LONG_MIN;
		long longMaxValue = LONG_MAX;
		std::cout << "- {typeof(long)} ({sizeof(long)} bytes), MinValue: {longMinValue}, MaxValue: {longMaxValue}, IsObject: {typeof(long) is object}" << std::endl;

		unsigned long ulongMinValue = 0;
		unsigned long ulongMaxValue = ULONG_MAX;
		std::cout << "- {typeof(ulong)} ({sizeof(ulong)} bytes), MinValue: {ulongMinValue}, MaxValue: {ulongMaxValue}, IsObject: {typeof(ulong) is object}" << std::endl;

		// Decimales
		float floatMinValue = FLT_MIN;
		float floatMaxValue = FLT_MAX;
		std::cout << "- {typeof(float)} ({sizeof(float)} bytes), MinValue: {floatMinValue}, MaxValue: {floatMaxValue}, IsObject: {typeof(float) is object}" << std::endl;

		double doubleMinValue = DBL_MIN;
		double doubleMaxValue = DBL_MAX;
		std::cout << "- {typeof(double)} ({sizeof(double)} bytes), MinValue: {doubleMinValue}, MaxValue: {doubleMaxValue}, IsObject: {typeof(double) is object}" << std::endl;

		/* C++ does not have a decimal type on it's own
		decimal decimalMinValue = decimal.MinValue;
		decimal decimalMaxValue = decimal.MaxValue;
		std::cout << "- {typeof(decimal)} ({sizeof(decimal)} bytes), MinValue: {decimalMinValue}, MaxValue: {decimalMaxValue}, IsObject: {typeof(decimal) is object}" << std::endl;*/

		// Unicode
		char charMinValue = CHAR_MIN;
		char charMaxValue = CHAR_MAX;
		std::cout << "- {typeof(char)} ({sizeof(char)} bytes), MinValue: {charMinValue}, MaxValue: {charMaxValue}, IsObject: {typeof(char) is object}" << std::endl;

		std::cout << "\n¿Y estos valores de donde salen?" << std::endl;
		std::cout << "- 1 bit únicamente puede tener dos valores representados en binario como 0 y 1" << std::endl;
		std::cout << "- 1 byte se corresponde 8 a bits (representado en binario con valores desde 00000000 hasta 11111111)" << std::endl;
		std::cout << "- Con esto podemos decir que una estructura podrá representar tantos números como sus combinaciones le permitan" << std::endl;
		std::cout << "- Las estructuras con 1 byte puede tener {Math.Pow(2, 8 * 1)} (2^8) combinaciones" << std::endl;
		std::cout << "- Las estructuras con 2 byte pueden tener {Math.Pow(2, 8 * 2)} (2^16) combinaciones" << std::endl;
		std::cout << "- Las estructuras con 4 byte pueden tener {Math.Pow(2, 8 * 4)} (2^32) combinaciones" << std::endl;
		std::cout << "- Las estructuras con 8 byte pueden tener {Math.Pow(2, 8 * 8)} (2^64) combinaciones" << std::endl;
		std::cout << "- Las estructuras con 16 byte pueden tener {Math.Pow(2, 8 * 16)} (2^128) combinaciones" << std::endl;
		std::cout << "- El incremento se basa en potencias de 2: 2^0={Math.Pow(2, 0)}, 2^1={Math.Pow(2, 1)}, 2^2={Math.Pow(2, 2)}, 2^3={Math.Pow(2, 3)}, 2^4={Math.Pow(2, 4)}, 2^5={Math.Pow(2, 5)}, 2^6={Math.Pow(2, 6)}, 2^7={Math.Pow(2, 7)}, ..." << std::endl;

		std::cout << "\nStrings:" << std::endl;
		std::string charArrayMin = "";
		std::string charArray1 = "H";
		std::string charArray2 = "Hello world";
		std::cout << "- Se define como string la union de carácteres" << std::endl;
		std::cout << "- {typeof(string)}, Empty: ({charArrayMin.Length * sizeof(char)} bytes), {charArray1}: ({charArray1.Length * sizeof(char)} bytes), {charArray2}: ({charArray2.Length * sizeof(char)} bytes)" << std::endl;
		std::cout << "- Los strings, a diferencia de los caracteres basan su tamaño y posibles valores en el encoding utilizado" << std::endl;
		std::cout << "- Hay múltiples encodings aunque los más habituales son Unicode (UTF-8) o ASCII" << std::endl;
		std::cout << "- UTF-8 usa 2 bytes para representar los carácteres incluyendo carácteres especiales" << std::endl;
		std::cout << "- ASCII por otro lado utiliza 1 byte para representar los carácteres sin incluir los carácteres especiales" << std::endl;
		std::cout << "- Tamaño según codificacion ASCII: ({System.Text.Encoding.ASCII.GetByteCount(charArrayMin)} bytes), {charArray1}: ({System.Text.Encoding.ASCII.GetByteCount(charArray1)} bytes), {charArray2}: ({System.Text.Encoding.ASCII.GetByteCount(charArray2)} bytes)" << std::endl;
		std::cout << "- Tamaño según unicode: ({System.Text.Encoding.Unicode.GetByteCount(charArrayMin)} bytes), {charArray1}: ({System.Text.Encoding.Unicode.GetByteCount(charArray1)} bytes), {charArray2}: ({System.Text.Encoding.Unicode.GetByteCount(charArray2)} bytes)" << std::endl;

		std::cout << "\nAclaraciones:" << std::endl;
		std::cout << "- Un bool (false o true) podría ser representado por un bit (0 o 1), pero las CPU modernas no pueden gestionar información más pequeña a un byte" << std::endl;
		std::cout << "- Se conoce como 'castear' la acción de pasar de un tipo de dato a otro (int -> float o float -> decimal)" << std::endl;
		std::cout << "- Los tipos de los valores literales se pueden indicar con su letra correspondiente (1.245f para float, 1.2345m para decimal, 1.2345d para double, ...)" << std::endl;
	}

	static void exercices() {
		std::cout << "a) Declara una variable bool llamada \"exerciceA\" inicializada a true:" << std::endl;
		std::cout << "\nb) Declara una variable de tipo int llamada \"result\" sin inicializar:" << std::endl;
		std::cout << "\nc) Declara una variable double llamada \"subsection\" inicializada a 1.25d:" << std::endl;
		std::cout << "\nd) Declara una variable float llamada \"section\" inicializada a subsection casteado a decimal:" << std::endl;
		std::cout << "\ne) Declara una variable char llamada \"character\" inicializada al caracter 'Z':" << std::endl;
		std::cout << "\nf) Declara una variable string llamada \"text\" inicializada al texto \"Hello world\":" << std::endl;
		std::cout << "\ng) Declara una variable unsigned int llamada \"charToUInt\" inicializada a \"character\" casteado a int:" << std::endl;
		std::cout << "\nh) Asigna la variable \"result\" al valor 35:" << std::endl;
		std::cout << "\ni) Declara una variable long llamada \"intToLong\" inicializada a \"result\" casteado a long:" << std::endl;
	}

	static void solutions() {
		std::cout << "a) Declara una variable bool llamada \"exerciceA\" inicializada a true:" << std::endl;
		auto exerciceA = true;
		std::cout << "Ejercicio a: var exerciceA = true;" << std::endl;

		std::cout << "\nb) Declara una variable de tipo int llamada \"result\" sin inicializar:" << std::endl;
		int result;
		std::cout << "Ejercicio b: int result;" << std::endl;

		std::cout << "\nc) Declara una variable double llamada \"subsection\" inicializada a 1.25d:" << std::endl;
		double subsection = 1.25;
		std::cout << "Ejercicio c: var subsection = 1.25d;" << std::endl;

		std::cout << "\nd) Declara una variable float llamada \"section\" inicializada a subsection casteado a decimal:" << std::endl;
		auto section = (float)subsection;
		std::cout << "Ejercicio d: var section = (decimal)subsection;" << std::endl;

		std::cout << "\ne) Declara una variable char llamada \"character\" inicializada al caracter 'Z':" << std::endl;
		auto character = 'Z';
		std::cout << "Ejercicio e: char character = 'Z';" << std::endl;

		std::cout << "\nf) Declara una variable string llamada \"text\" inicializada al texto \"Hello world\":" << std::endl;
		std::string text = "Hello world";
		std::cout << "Ejercicio f: var text = \"Hello world\";" << std::endl;

		std::cout << "\ng) Declara una variable unsigned int llamada \"charToUInt\" inicializada a \"character\" casteado a int:" << std::endl;
		auto charToUInt = (unsigned int)character;
		std::cout << "Ejercicio g: uint charToUInt = (uint)character;" << std::endl;

		std::cout << "\nh) Asigna la variable \"result\" al valor 35:" << std::endl;
		result = 35;
		std::cout << "Ejercicio h: result = 35;" << std::endl;

		std::cout << "\ni) Declara una variable long llamada \"intToLong\" inicializada a \"result\" casteado a long:" << std::endl;
		auto intToLong = (long)result;
		std::cout << "Ejercicio i: long intToLong = (long)result;" << std::endl;
	}
};

#endif