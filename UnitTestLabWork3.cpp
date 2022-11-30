#include "pch.h"
#include "CppUnitTest.h"
#include<C:\Users\Nika\Desktop\vs\code-214\LabWork3\LabWork3\LabWork3.cpp>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLabWork3
{
	TEST_CLASS(UnitTestLabWork3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 2;
			int x = 2;
			double expected = 3;
			double actual = Calculate(n, x);

			Assert::AreEqual(expected, actual);
		}
	public:

		TEST_METHOD(TestMethod2)
		{
			int n = 4;
			int x = -2;
			double expected = 600;
			double actual = Calculate(n, x);

			Assert::AreEqual(expected, actual);
		}
	public:

		TEST_METHOD(TestMethod3)
		{
			int n = -1;
			int x = 2;
			double expected = 0;
			double actual = Calculate(n, x);

			Assert::AreEqual(expected, actual);
		}
	public:

		TEST_METHOD(TestMethod4)
		{
			int n = 6;

			try
			{
				CheckValidInput2(n);
			Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}

		}
	};
}