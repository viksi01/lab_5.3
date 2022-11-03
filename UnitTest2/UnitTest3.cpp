
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.3/lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = f (1);
			Assert::AreEqual(t, 0.513785, 0.00001);
		}
	};
}