#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestS0)
		{
			const int N = 15;
			double expected = S0(N);

			Assert::AreEqual(expected, S0(N), 0.00001);
		}

		TEST_METHOD(TestS1)
		{
			const int N = 15;
			double expected = S0(N);
			
			Assert::AreEqual(expected, S1(N, 1), 0.00001);
		}

		TEST_METHOD(TestS2)
		{
			const int N = 15;
			double expected = S0(N);  
			
			Assert::AreEqual(expected, S2(N, N), 0.00001);
		}

		TEST_METHOD(TestS3)
		{
			const int N = 15;
			double expected = S0(N);

			Assert::AreEqual(expected, S3(N, 1, 0), 0.00001);
		}

		TEST_METHOD(TestS4)
		{
			const int N = 15;
			double expected = S0(N);  

			Assert::AreEqual(expected, S4(N, N, 0), 0.00001);
		}
	};
}
