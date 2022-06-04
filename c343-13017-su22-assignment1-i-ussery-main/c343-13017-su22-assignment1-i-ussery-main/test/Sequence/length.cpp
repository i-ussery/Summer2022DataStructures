
#include "gtest/gtest.h"
#include "../../src/Sequence/Sequence.cpp"

namespace {

    TEST(Sequence_Length, Test1_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        //Process
        seq->add(value, 0);
        //Test
        EXPECT_EQ(1, seq->length());

    }

    TEST(Sequence_Length, Test1_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "fish";
        std::string value2 = "sun";
        std::string value3 = "cat";
        std::string value4 = "dog";

        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);
        //Test
        EXPECT_EQ(4, seq->length());

    }

    /**
     * Create additional tests
     */

    TEST(Sequence_Length, Test2_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 2;
        //Process
        seq->add(value, 0);
        seq->add(value2,1);
        //Test
        EXPECT_EQ(2, seq->length());

    }

    TEST(Sequence_Length, Test3_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 2;
        //Process
        seq->add(value, 0);
        seq->add(value2,1);
        seq->clear();
        //Test
        EXPECT_EQ(0, seq->length());

    }

    TEST(Sequence_Length, Test4_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 2;
        int value3 = 99;
        //Process
        seq->add(value, 0);
        seq->add(value2,1);
        seq->add(value3,2);
        //Test
        EXPECT_EQ(3, seq->length());

    }

    /**
     * Create additional tests
     */

    TEST(Sequence_Length, Test2_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "fish";
        std::string value2 = "sun";
        std::string value3 = "cat";

        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        //Test
        EXPECT_EQ(3, seq->length());

    }

    TEST(Sequence_Length, Test3_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "fish";
        std::string value2 = "sun";

        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        //Test
        EXPECT_EQ(2, seq->length());

    }

    TEST(Sequence_Length, Test4_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "fish";

        //Process
        seq->add(value, 0);
        //Test
        EXPECT_EQ(1, seq->length());

    }}