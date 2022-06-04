
#include "gtest/gtest.h"
#include "../../src/Sequence/Sequence.cpp"

namespace {

    TEST(Sequence_Add, Test1_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        //Process
        seq->add(value, 0);
        //Test
        EXPECT_EQ(37, seq->entry(0));
    }

    TEST(Sequence_Add, Test1_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "cat";
        std::string value2 = "dog";
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        //Test
        EXPECT_EQ("cat", seq->entry(0));
    }

    /**
     * Create additional tests
     */

    TEST(Sequence_Add, Test2_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "cat";
        std::string value2 = "dog";
        std::string value3 = "llama";
        std::string value4 = "horse";
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);
        //Test
        EXPECT_EQ("horse", seq->entry(3));
    }

    TEST(Sequence_Add, Test3_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "cat";
        std::string value2 = "dog";
        std::string value3 = "llama";
        std::string value4 = "horse";
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);
        //Test
        EXPECT_EQ("dog", seq->entry(1));
    }

    TEST(Sequence_Add, Test4_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "cat";
        std::string value2 = "dog";
        std::string value3 = "llama";
        std::string value4 = "horse";
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);
        //Test
        EXPECT_EQ("llama", seq->entry(2));
    }

    /**
     * Create additional tests
     */

    TEST(Sequence_Add, Test2_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 43;
        int value3 = 78;
        int value4 = 20;
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);

        //Test
        EXPECT_EQ(43, seq->entry(1));
    }

    TEST(Sequence_Add, Test3_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 43;
        int value3 = 78;
        int value4 = 20;
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);

        //Test
        EXPECT_EQ(78, seq->entry(2));
    }

    TEST(Sequence_Add, Test4_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 43;
        int value3 = 78;
        int value4 = 20;
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);

        //Test
        EXPECT_EQ(20, seq->entry(3));
    }}