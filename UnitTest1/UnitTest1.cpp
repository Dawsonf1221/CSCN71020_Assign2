#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		
		TEST_METHOD(testArea)
		{
			int length = 8;
			int width = 2;

			int getArea(int* length, int* width);
				int area = length * width;
				Assert::AreEqual(16, area);
			
		}

		TEST_METHOD(testPerimeter) 
		{
			int length = 8;
			int width = 2;

			int getPerimeter(int* length, int* width);
				int perimeter = (length + length + width + width);
				Assert::AreEqual(20, perimeter);
		
		}

		TEST_METHOD(SetLength1) {

			
			void setLength(int input, int* length);
			
			int length;
			int input = 56;
			
			if (input >= 0 && input < 100) {
				length = input;



			}

			Assert::AreEqual(56, length);
		}

		TEST_METHOD(SetLength2) {

			void setLength(int input, int* length);

			int length = 0;
			int input = 105;

			if (input >= 0 && input < 100) {
				length = input;



			}

			Assert::IsTrue(length != input);


		}

		TEST_METHOD(SetLength3) {

			void setLength(int input, int* length);

			int length = 0;
			int input = -16;

			if (input >= 0 && input < 100) {
				length = input;



			}

			Assert::IsTrue(length != input);



		}

		TEST_METHOD(SetWidth1) {

			
			void setWidth(int input, int* width);

			int width = 0;
			int input = 56;

			if (input > 0 && input <= 100) {
					width = input;
			}

			Assert::IsTrue(width == input);


		}

		TEST_METHOD(SetWidth2) {

			void setWidth(int input, int* width);

			int width = 0;
			int input = 205;

			
			if (input > 0 && input <= 100) {
					width = input;
			}

			Assert::IsTrue(width != input);


		}

		TEST_METHOD(SetWidth3) {

			void setWidth(int input, int* width);

			int width = 0;
			int input = 205;

			if (input > 0 && input <= 100) {
					width = input;
			}
			
			Assert::IsTrue(width != input);

		}


	};
}
