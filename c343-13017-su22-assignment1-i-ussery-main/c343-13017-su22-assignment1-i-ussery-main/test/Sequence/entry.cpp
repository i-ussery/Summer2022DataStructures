
#include "gtest/gtest.h"
#include "../../src/Sequence/Sequence.cpp"

namespace {

    TEST(Sequence_Entry, Test1_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        //Test
        EXPECT_EQ(std::nullopt,seq->entry(0));
    }


    TEST(Sequence_Entry, Test1_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        //Test
        EXPECT_EQ(std::nullopt,seq->entry(0));
    }


    /**
     * Create additional tests
     */

    TEST(Sequence_Entry, Test2_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 45;
        int value3 = 99;
        int value4 = 34;
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4,3);
        //Test
        EXPECT_EQ(34, seq->entry(3));
    }

    TEST(Sequence_Entry, Test3_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 45;
        int value3 = 99;
        int value4 = 34;
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4,3);
        //Test
        EXPECT_EQ(std::nullopt, seq->entry(4));
    }

    TEST(Sequence_Entry, Test4_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 45;
        int value3 = 99;
        int value4 = 34;
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4,3);
        //Test
        EXPECT_EQ(99, seq->entry(2));
    }

    /**
     * Create additional tests
     */

    TEST(Sequence_Entry, Test2_String) {
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
        EXPECT_EQ("fish", seq->entry(0));
    }

    TEST(Sequence_Entry, Test3_String) {
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
        EXPECT_EQ("sun", seq->entry(1));
    }

    TEST(Sequence_Entry, Test4_String) {
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
        EXPECT_EQ("cat", seq->entry(2));
    }}