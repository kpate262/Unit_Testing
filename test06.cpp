/*test01.cpp*/

//
// <<Kisan Patel>>
// U. of Illinois, Chicago
// CS 341, Spring 2019
// Project #01: Grade Analysis
// 


// *****************************************************************
//
// Test cases:
// tested GetGradeDistribution()
// *****************************************************************

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>

#include "gradeutil.h"
#include "catch.hpp"

using namespace std;


TEST_CASE( "Test 06", "[Project01]" ) 
{
  
    Dept C("CS");
      C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", 1, 2, -3, -4, -5, 2, 88, 0, 1, 1));
      C.Courses.push_back(Course("Bio", "Professional Se", 439, 04, "Humm", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      C.Courses.push_back(Course("CS", "Professio", 239, 1, "Hummfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      C.Courses.push_back(Course("CS", "Profes", 251, 3, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      C.Courses.push_back(Course("CS", "Profe", 141, 02, "Dale", 12, 24, -33, -49, -56, 2, 88, 0, 6, 1));
    //5, 41, 13, 4, 5 + 13
    //1, 20, 30, 40, 5  + 51
    //15, 22, 32, 48, 59 + 431 
    //656/835 *100   
    
    int DFW = 0; int N = 0;
    REQUIRE( GetDFWRate(C, DFW, N) >= 78.562);
    REQUIRE( GetDFWRate(C, DFW, N) <= 78.563);
    REQUIRE(DFW == 656);
    REQUIRE(N == 835);
}
