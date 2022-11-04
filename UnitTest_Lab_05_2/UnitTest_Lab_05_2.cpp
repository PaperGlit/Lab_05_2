#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_2/Lab_05_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab052
{
	TEST_CLASS(UnitTestLab052)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(S(8, 0.0000001), atanh(1 / 8.0), 0.0000001);
		}
	};
}
