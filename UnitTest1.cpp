#include "pch.h"
using namespace std;
#include <vector>
#include "CppUnitTest.h"
extern int find_max_add(vector<int> vec, const int size, int* start, int* end);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s = 0;
			int e = 0;
			vector<int> v = { -2,-1,-3,5};
			Assert::AreEqual(5,find_max_add(v, 4, &s, &e));
		}
		TEST_METHOD(TestMethod2)
		{
			int s = 0;
			int e = 0;
			vector<int> v = {-3,-1,0,5,99,-150 };
			Assert::AreEqual(104, find_max_add(v, 6, &s, &e));
		}
		TEST_METHOD(TestMethod3)
		{
			int s = 0;
			int e = 0;
			vector<int> v = { -20,-1,30,5,-10,33,-49,-13 };
			Assert::AreEqual(58, find_max_add(v, 8, &s, &e));
		}
		TEST_METHOD(TestMethod4)
		{
			int s = 0;
			int e = 0;
			vector<int> v = { -41,-28,-0,-3,-5,-33,-44,0 };
			Assert::AreEqual(0, find_max_add(v, 8, &s, &e));
		}

	};
}
