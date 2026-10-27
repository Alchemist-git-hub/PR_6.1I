#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.1/pr6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testPR61
{
	TEST_CLASS(testPR61)
	{
	public:
		
        TEST_METHOD(Test1)
        {
            int s[23] = {
                5, 4, 6, 7, 8, 10, 9, 12, 14, 11, 16,
                6, 13, 4, 8, 15, 10, 12, 5, 14, 6, 7, 16
            };

            Assert::AreEqual(146, Sum(s, 23));
        }
        TEST_METHOD(Test2)
        {
            int s[23] = {
                5, 4, 6, 7, 8, 10, 9, 12, 14, 11, 16,
                6, 13, 4, 8, 15, 10, 12, 5, 14, 6, 7, 16
            };

            Assert::AreEqual(15, Count(s, 23));
        }
       
	};
}
