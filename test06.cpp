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
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", -1, -2, -3, -4, -5, 2, 88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", -1, -2, -3, -4, -5, 2, 88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", -1, -2, -3, -4, -5, 2, 88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", -1, -2, -3, -4, -5, 2, 88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", -1, -2, -3, -4, -5, 2, 88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", -1, -2, -3, -4, -5, 2, -88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", -1, -2, -3, -4, -5, 2, -88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", -1, -2, -3, -4, -5, 2, -88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", -1, -2, -3, -4, -5, 2, -88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", 1, 2, 3, 4, 5, 2, -88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", 1, 2, 3, 4, 5, 2, -88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", 1, 2, 3,4, 5, 2, -88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", 1, 2, 3, 4, -11, 2, -88, 0, 1, 1));
    C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", -1, -2, -3, -400, -5, 2, -88, 0, 1, 1));
        
    GradeStats G = GetGradeDistribution(C);
    REQUIRE(G.N == 45);
    REQUIRE(G.NumA == 3);
    REQUIRE(G.NumB == 6);
      REQUIRE(G.NumC == 9);
      REQUIRE(G.NumD == 12);
      REQUIRE(G.NumF == 15);
      REQUIRE(G.PercentA == (3*1.0/45)*100);
    REQUIRE(G.PercentB == (6*1.0/45)*100);
    REQUIRE(G.PercentC == (9*1.0/45)*100);
    REQUIRE(G.PercentD == (12*1.0/45)*100);
    REQUIRE(G.PercentF == (15*1.0/45)*100);
   
}
