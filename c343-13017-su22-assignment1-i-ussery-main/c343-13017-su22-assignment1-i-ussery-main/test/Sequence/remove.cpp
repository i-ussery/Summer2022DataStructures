
#include "gtest/gtest.h"
#include "../../src/Sequence/Sequence.cpp"

namespace {

    TEST(Sequence_Remove, Test1_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 45;
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->remove(value, 0);
        //Test
        EXPECT_EQ(45, seq->entry(0));
    }

    TEST(Sequence_Remove, Test1_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "cat";
        std::string value2 = "dog";
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->remove(value, 0);
        //Test
        EXPECT_EQ("dog", seq->entry(0));
    }

    /**
     * Create additional tests
     */

    TEST(Sequence_Remove, Test2_Int) {
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
        seq->remove(value3, 2);
        //Test
        EXPECT_EQ(34, seq->entry(2));
    }

    TEST(Sequence_Remove, Test3_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 38;
        //Process
        seq->add(value, 0);
        seq->remove(value2, 0);
        //Test
        EXPECT_EQ(37, seq->entry(0));
    }

    TEST(Sequence_Remove, Test4_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 38;
        //Process
        seq->add(value, 0);
        seq->add(value2,1);
        seq->remove(value2, -1);
        //Test
        EXPECT_EQ(37, seq->entry(0));
    }

    /**
     * Create additional tests
     */

    TEST(Sequence_Remove, Test2_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        //Setup
        std::string value = "fish";
        std::string value2 = "sun";
        std::string value3 = "cat";
        std::string value4 = "dog";
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);
        seq->remove(value, 0);
        //Test
        EXPECT_EQ("sun", seq->entry(0));
    }

    TEST(Sequence_Remove, Test3_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        //Setup
        std::string value = "fish";
        std::string value2 = "sun";
        std::string value3 = "cat";
        std::string value4 = "dog";
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);
        seq->remove(value2, 1);
        //Test
        EXPECT_EQ("cat", seq->entry(1));
    }

    TEST(Sequence_Remove, Test4_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        //Setup
        std::string value = "fish";
        std::string value2 = "sun";
        std::string value3 = "cat";
        std::string value4 = "dog";
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);
        seq->remove(value3, 2);
        //Test
        EXPECT_EQ("dog", seq->entry(2));
    }}