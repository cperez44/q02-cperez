/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
TEST(PiezasTest, FirstTurnCheck)
{
	Piezas p1;
	p1.dropPiece(0);
	EXPECT_EQ('X',p1.pieceAt(0,0));
	//ASSERT_TRUE(true);
}
TEST(PiezasTest, clearBoard){
	Piezas p1;
	//EXPECT_EQ('Blank',p1.pieceAt(0,0));
	for(unsigned int r=0;r<3;r++){
		for(unsigned int c=0;c<4;c++){
			EXPECT_EQ('Blank',p1.pieceAt(r,c));
		}
	}
}

