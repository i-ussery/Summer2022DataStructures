
#include "gtest/gtest.h"
#include "../../src/Sequence/Sequence.cpp"

namespace {

    TEST(Sequence_Clear, Test1_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 10;
        //Process
        seq->add(value, 0);
        seq->clear();
        //Test
        EXPECT_EQ(0,seq->length());
    }

    TEST(Sequence_Clear, Test1_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "fish";
        std::string value2 = "sun";
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->clear();
        //Test
        EXPECT_EQ(0,seq->length());
    }

    /**
     * Create additional tests
     */

    TEST(Sequence_Clear, Test2_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        //Test
        EXPECT_EQ(0,seq->length());
    }
}

