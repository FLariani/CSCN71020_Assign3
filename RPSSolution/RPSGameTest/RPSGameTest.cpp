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
		TEST_METHOD(Player1_Wins_ScissorsBeatsPaper) {
			Assert::AreEqual("Player1", rps_winner("Scissors", "Paper"));
		}
		TEST_METHOD(Player1_Wins_PaperBeatsRock) {
			Assert::AreEqual("Player1", rps_winner("Paper", "Rock"));
		}
		TEST_METHOD(Player2_Wins_RockBeatsScissors) {
			Assert::AreEqual("Player2", rps_winner("Scissors", "Rock"));
		}
		TEST_METHOD(Player2_Wins_PaperBeatsRock) {
			Assert::AreEqual("Player2", rps_winner("Rock", "Paper"));
		}

	};
}
