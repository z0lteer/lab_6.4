#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.4/6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double arr1[] = { 2.0, -5.0, 3.0, 7.0, -1.0 };
			double result1 = sumAfterMinElement(arr1, 5);
			Assert::AreEqual(9.0, result1, 0.001);
		}
	};
}
