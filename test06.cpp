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
  Dept CS("CS");
      CS.Courses.push_back(Course("CS", "Professional Seminar", 499, 01, "Hummel", -1, -2, -3, -4, -5, 2, 88, 0, -1, 1));
      CS.Courses.push_back(Course("CS", "Professional Se", 500, 4, "Humm", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      CS.Courses.push_back(Course("CS", "Professio", 500, 3, "Hummfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      CS.Courses.push_back(Course("CS", "Profes", 151, 1, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      CS.Courses.push_back(Course("CS", "Profe", 251, 02, "Dale", 12, 24, 33, 49, 56, 2, 88, 0, 6, 1));
      CS.Courses.push_back(Course("CS", "Professional Seminar", 499, 01, "Hummel", -1, -2, -3, -4, -5, 2, 88, 0, -1, 1));
        CS.Courses.push_back(Course("CS", "Professional Se", 500, 4, "Humm", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      CS.Courses.push_back(Course("CS", "Professio", 500, 3, "Hummfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      CS.Courses.push_back(Course("CS", "Profes", 151, 1, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      CS.Courses.push_back(Course("CS", "Profe", 251, 02, "Dale", 12, 24, 33, 49, 56, 2, 88, 0, 6, 1));
    CS.Courses.push_back(Course("CS", "Professional Seminar", 499, 01, "Hummel", -1, -2, -3, -4, -5, 2, 88, 0, -1, 1));
    CS.Courses.push_back(Course("CS", "Professional Se", 500, 4, "Humm", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      CS.Courses.push_back(Course("CS", "Professio", 500, 3, "Hummfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      CS.Courses.push_back(Course("CS", "Profes", 151, 1, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      CS.Courses.push_back(Course("CS", "Profe", 251, 02, "Dale", 12, 24, 33, 49, 56, 2, 88, 0, 6, 1));
  
    
  GradeStats G = GetGradeDistribution(CS);
  REQUIRE(G.N == 1542);
  REQUIRE(G.NumA == 99);
      REQUIRE(G.NumB == 321);
      REQUIRE(G.NumC == 324);
      REQUIRE(G.NumD == 423);
      REQUIRE(G.NumF == 375);
      REQUIRE(G.PercentA == ((99.0/1542)*100.0));
    REQUIRE(G.PercentB == ((321.0/1542)*100.0));
    REQUIRE(G.PercentC == ((324.0/1542)*100.0));
    REQUIRE(G.PercentD == ((423.0/1542)*100.0));
    REQUIRE(G.PercentF == ((375.0/1542)*100.0));

  
  //REQUIRE(C.getGradingType() == Course::Satisfactory);
  //REQUIRE(C.getNumStudents() == )
}
