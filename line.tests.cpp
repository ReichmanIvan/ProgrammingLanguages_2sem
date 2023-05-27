#include "pch.h"
#include "CppUnitTest.h"
#include "..\line_lib\line.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace linetests
{
	TEST_CLASS(linetests)
	{
	public:
		/*
		\Этот тест проверяет перегрузку оператора равенства для структуры point. Создаются две точки с одинаковыми координатами, затем оператор равенства применяется к ним, и результат сравнения проверяется на равенство true.
		*/
		TEST_METHOD(point_overload_operator_equality)
		{
			//arrange
			point first_point(5.6, 7.3);
			point second_point(5.6, 7.3);

			//act
			bool compare = (first_point == second_point);

			//assert
			Assert::AreEqual(true, compare);
		}
		/*
		\Этот тест проверяет, что конструктор структуры point не возвращает нулевой указатель. Создается точка с определенными координатами, затем используется оператор << для записи точки в поток buffer. Полученная строка преобразуется в test_string, и затем проверяется, что test_string не является нулевым указателем.
		*/
		TEST_METHOD(point_construktor_is_not_null)
		{
			//arrange
			point point(5,7);
			std::string test_string;
			std::stringstream buffer;

			//act
			buffer << point;
			test_string = buffer.str();

			//assert
			Assert::IsNotNull(test_string.c_str());
		}

		/*
		\Этот тест проверяет, что конструктор класса color генерирует исключение std::out_of_range, если значения красного, зеленого или синего компонентов находятся вне допустимого диапазона. В данном случае, создается объект color с недопустимыми значениями компонентов, и ожидается генерация исключения std::out_of_range.
		*/
		TEST_METHOD(line_wrong_color_exception)
		{
			Assert::ExpectException<std::out_of_range>([]()
				{auto x = line_col::color(5, 7, 320);}
			);
		}
		
		/*
		\Этот тест проверяет, что конструктор класса line не возвращает нулевой указатель. Создаются две точки и объект color, затем создается объект line с этими параметрами. Затем используется оператор << для записи line в поток buffer. Полученная строка преобразуется в test_string, и затем проверяется, что test_string не является нулевым указателем.
		*/
		TEST_METHOD(line_construktor_is_not_null)
		{
			//arrange
			point point1 = point(5, 7);
			point point2 = point(6, 9);
			line_col::color color1 = line_col::color(5, 7, 120);
			line line(point1, point2, color1);
			std::string test_string;
			std::stringstream buffer;

			//act
			buffer << line;
			test_string = buffer.str();

			//assert
			Assert::IsNotNull(test_string.c_str());
		}
	};
}
