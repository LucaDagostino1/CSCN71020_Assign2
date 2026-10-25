#include "pch.h"
#include "CppUnitTest.h"
#include "C:/Users/LucaD/OneDrive - Conestoga College/CSCN71020_A2/CSCN71020_A2/BCSRec/functions.h"
#include "C:/Users/LucaD/OneDrive - Conestoga College/CSCN71020_A2/CSCN71020_A2/BCSRec/functions.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesting
{
    TEST_CLASS(PerimeterTests)
    {
    public:

        // Test the smallest allowed dimensions.
        TEST_METHOD(Perimeter_MinimumDimensions_Returns4)
        {
            int result = getPerimeter(1, 1);

            Assert::AreEqual(4, result);
        }

        // Test the largest allowed dimensions.
        TEST_METHOD(Perimeter_MaximumDimensions_Returns396)
        {
            int result = getPerimeter(99, 99);

            Assert::AreEqual(396, result);
        }

        // Test different length and width values.
        TEST_METHOD(Perimeter_DifferentDimensions_Returns38)
        {
            int result = getPerimeter(7, 12);

            Assert::AreEqual(38, result);
        }

        // Test the smallest length and largest width.
        TEST_METHOD(Perimeter_MixedBoundaryDimensions_Returns200)
        {
            int result = getPerimeter(1, 99);

            Assert::AreEqual(200, result);
        }
    };

    TEST_CLASS(AreaTests)
    {
    public:

        // Test the smallest allowed dimensions.
        TEST_METHOD(Area_MinimumDimensions_Returns1)
        {
            int result = getArea(1, 1);

            Assert::AreEqual(1, result);
        }

        // Test the largest allowed dimensions.
        TEST_METHOD(Area_MaximumDimensions_Returns9801)
        {
            int result = getArea(99, 99);

            Assert::AreEqual(9801, result);
        }

        // Test different length and width values.
        TEST_METHOD(Area_DifferentDimensions_Returns84)
        {
            int result = getArea(7, 12);

            Assert::AreEqual(84, result);
        }

        // Test the smallest length and largest width.
        TEST_METHOD(Area_MixedBoundaryDimensions_Returns99)
        {
            int result = getArea(1, 99);

            Assert::AreEqual(99, result);
        }

        // Test the minimum allowed value.
        TEST_METHOD(SetLength_MinimumValue_Returns1)
        {
            int result = setLength(1);

            Assert::AreEqual(1, result);
        }

        // Test a typical valid value.
        TEST_METHOD(SetLength_ValidValue_ReturnsInput)
        {
            int result = setLength(45);

            Assert::AreEqual(45, result);
        }

        // Test the maximum allowed value.
        TEST_METHOD(SetLength_MaximumValue_Returns99)
        {
            int result = setLength(99);

            Assert::AreEqual(99, result);
        }

        // Test zero, which is below the allowed range.
        TEST_METHOD(SetLength_Zero_Returns1)
        {
            int result = setLength(0);

            Assert::AreEqual(1, result);
        }

        // Test a negative input.
        TEST_METHOD(SetLength_NegativeValue_Returns1)
        {
            int result = setLength(-5);

            Assert::AreEqual(1, result);
        }

        // Test a value immediately above the allowed range.
        TEST_METHOD(SetLength_Value100_Returns1)
        {
            int result = setLength(100);

            Assert::AreEqual(1, result);
        }
    };

    TEST_CLASS(SetWidthTests)
    {
    public:

        // Test the minimum allowed value.
        TEST_METHOD(SetWidth_MinimumValue_Returns1)
        {
            int result = setWidth(1);

            Assert::AreEqual(1, result);
        }

        // Test a typical valid value.
        TEST_METHOD(SetWidth_ValidValue_ReturnsInput)
        {
            int result = setWidth(50);

            Assert::AreEqual(50, result);
        }

        // Test the maximum allowed value.
        TEST_METHOD(SetWidth_MaximumValue_Returns99)
        {
            int result = setWidth(99);

            Assert::AreEqual(99, result);
        }

        // Test zero, which is below the allowed range.
        TEST_METHOD(SetWidth_Zero_Returns1)
        {
            int result = setWidth(0);

            Assert::AreEqual(1, result);
        }

        // Test a negative input.
        TEST_METHOD(SetWidth_NegativeValue_Returns1)
        {
            int result = setWidth(-10);

            Assert::AreEqual(1, result);
        }

        // Test a value immediately above the allowed range.
        TEST_METHOD(SetWidth_Value100_Returns1)
        {
            int result = setWidth(100);

            Assert::AreEqual(1, result);
        }
       
    };
}
