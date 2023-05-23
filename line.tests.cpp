#include "pch.h"
#include "CppUnitTest.h"
#include "..\line_lib\line.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace linetests
{
	TEST_CLASS(linetests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//arrange
			point first_point(5.6, 7.3);
			point second_point(5.6, 7.3);

			//act
			bool compare = (first_point == second_point);

			//assert
			Assert::AreEqual(true, compare);
		}
	};
}
