#include "pch.h"
#include "CppUnitTest.h"
#include "../laba_1.5/Triad.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t;

			t.set_x(4);
			Assert::AreEqual(4, t.get_x());
		}
	};
}
