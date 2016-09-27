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


int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
