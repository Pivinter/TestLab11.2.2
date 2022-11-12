#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab11.2.2/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1122
{
	TEST_CLASS(UnitTest1122)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}
