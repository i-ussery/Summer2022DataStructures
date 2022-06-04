
#include "gtest/gtest.h"
#include "../../src/Sequence/Sequence.cpp"

namespace {

    TEST(Sequence_OutputSequence, Test1_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 7;
        int value3 = 3;
        int value4 = 10;
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        seq->add(value4, 3);
        //Test
        EXPECT_EQ("37, 7, 3, 10", seq->outputSequence());
    }

    TEST(Sequence_OutputSequence, Test1_String) {
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
        EXPECT_EQ("fish, sun, cat, dog", seq->outputSequence());
    }

    /**
     * Create additional tests
     */

    TEST(Sequence_OutputSequence, Test2_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "fish";

        //Process
        seq->add(value, 0);
        //Test
        EXPECT_EQ("fish", seq->outputSequence());
    }

    TEST(Sequence_OutputSequence, Test3_String) {
        //Setup
        auto seq = std::make_unique<Sequence<std::string>>();
        std::string value = "fish";
        std::string value2 = "sun";

        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        //Test
        EXPECT_EQ("fish, sun", seq->outputSequence());
    }

    TEST(Sequence_OutputSequence, Test4_String) {
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
        EXPECT_EQ("fish, sun, cat", seq->outputSequence());
    }

    /**
     * Create additional tests
     */

    TEST(Sequence_OutputSequence, Test2_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        //Process
        seq->add(value, 0);
        //Test
        EXPECT_EQ("37", seq->outputSequence());
    }

    TEST(Sequence_OutputSequence, Test3_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 7;
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        //Test
        EXPECT_EQ("37, 7", seq->outputSequence());
    }

    TEST(Sequence_OutputSequence, Test4_Int) {
        //Setup
        auto seq = std::make_unique<Sequence<int>>();
        int value = 37;
        int value2 = 7;
        int value3 = 3;
        //Process
        seq->add(value, 0);
        seq->add(value2, 1);
        seq->add(value3, 2);
        //Test
        EXPECT_EQ("37, 7, 3", seq->outputSequence());
    }}