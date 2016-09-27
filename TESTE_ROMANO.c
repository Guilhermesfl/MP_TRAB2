#include "FUNC.h"
#include <gtest/gtest.h>

/** \brief Função responsável por testar se valores inválidos são reconhecidos pelo programa.*/
TEST(VERFICA_ROMANO, VAL_INVALIDO) { 
    EXPECT_EQ (-1, VERIFICA_ROMANO("XXXX"));
    EXPECT_EQ (-1, VERIFICA_ROMANO("VXV"));
    EXPECT_EQ (-1, VERIFICA_ROMANO("XD"));
    EXPECT_EQ (-1, VERIFICA_ROMANO("Z"));
    EXPECT_EQ (-1, VERIFICA_ROMANO("XM"));
    EXPECT_EQ (-1, VERIFICA_ROMANO("IM"));
    EXPECT_EQ (-1, VERIFICA_ROMANO("IVI"));
}
/** \brief Função responsável por testar se valores válidos são reconhecidos pelo programa. */
TEST(VERIFICA_ROMANO, VAL_VALIDO) { 
    EXPECT_EQ (0, VERIFICA_ROMANO("XXX"));
    EXPECT_EQ (0, VERIFICA_ROMANO("XIX"));
    EXPECT_EQ (0, VERIFICA_ROMANO("LX"));
    EXPECT_EQ (0, VERIFICA_ROMANO("CCXXXVIII"));
}


int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
