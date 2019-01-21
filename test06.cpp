/*test01.cpp

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


TEST_CASE( "Test 06", "[Project01]" ) 
{
  Dept C("CS");
  C.Courses.push_back(Course("CS", "Professional Seminar", 499, 01, "Hummel", -1, 2, 3, 4, 5, 2, 88, 0, 1, 1));
      C.Courses.push_back(Course("CS", "Professional Se", 4990, 01, "Humm", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      C.Courses.push_back(Course("CS", "Professio", 49, 01, "Hummfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      C.Courses.push_back(Course("CS", "Profes", 500, 01, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 12, 24, 33, 49, 56, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
    C.Courses.push_back(Course("CS", "Profe", 339, 01, "Dale", 0, 0, 0, 0, 0, 2, 88, 0, 6, 1));
  REQUIRE(C.Courses.size() == 25);
  GradeStats G = GetGradeDistribution(C);
  REQUIRE(G.N == 527);
  REQUIRE(G.NumA == 32);
      REQUIRE(G.NumB == 109);
      REQUIRE(G.NumC == 111);
      REQUIRE(G.NumD == 145);
      REQUIRE(G.NumF == 130);
      REQUIRE(G.PercentA == ((32.0/527)*100.0));
    REQUIRE(G.PercentB == ((109.0/527)*100.0));
    REQUIRE(G.PercentC == ((111.0/527)*100.0));
    REQUIRE(G.PercentD == ((145.0/527)*100.0));
    REQUIRE(G.PercentF == ((130.0/527)*100.0));
      
  
  //REQUIRE(C.getGradingType() == Course::Satisfactory);
  //REQUIRE(C.getNumStudents() == )
}*/

/*test07.cpp*/

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


TEST_CASE( "Test 06", "[Project01]" ) 
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

