#include "pch.h"
#include "CppUnitTest.h"
extern "C" const char* rps_winner(const char* p1, const char* p2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSGameTest
{
	TEST_CLASS(RPSGameTest)
	{
	public:
		
		TEST_METHOD(Draw_WhenBothRock)
		{ // Same valid move on both sides = Draw
			Assert::AreEqual("Draw", rps_winner("Rock", "Rock"));
			
		}
		TEST_METHOD(Player1_Wins_RockBeatsScissors) {
			Assert::AreEqual("Player1", rps_winner("Rock", "Scissors"));
		}
	};
}
