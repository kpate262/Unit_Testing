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
// 
// *****************************************************************

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>

#include "gradeutil.h"
#include "catch.hpp"

using namespace std;


TEST_CASE( "Test 07", "[Project01]" ) 
{
  Dept C("CS");
  C.Courses.push_back(Course("CS", "Professional Seminar", 499, 01, "Hummel", 1, 2, 3, 4, 5, 2, 88, 0, 1, 1));
      C.Courses.push_back(Course("CS", "Professional Se", 4990, 01, "Humm", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      C.Courses.push_back(Course("CS", "Professio", 49, 01, "Hummfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      C.Courses.push_back(Course("CS", "Profes", 500, 01, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 12, 24, 33, 49, 56, 2, 88, 0, 6, 1));
    //W = 1+13+51+431+6 = 502
    //D+F = 4+5+4+5+5+40+48+59+49+56 = 275
    //DFW = 777
    //N = 1031
  int DFW = 0; int N = 0;
   REQUIRE(GetDFWRate(C, DFW, N) >= 75.363);
    REQUIRE(GetDFWRate(C, DFW, N) <= 75.365);
    REQUIRE(DFW == 777);
    REQUIRE(N == 1031);
    
      
}
