#include "pch.h"
#include "CppUnitTest.h"
#include "..\line_lib\line.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace linetests
{
	TEST_CLASS(linetests)
	{
	public:
		
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

	
		TEST_METHOD(line_wrong_color_exception)
		{
			Assert::ExpectException<std::out_of_range>([]()
				{auto x = line_col::color(5, 7, 320);}
			);
		}

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
