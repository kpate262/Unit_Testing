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


TEST_CASE( "Test 05", "[Project01]" ) 
{
  Course C("CS", "Professional Seminar", 499, 01, "Hummel", 1, 2, 3, 4, 5, 2, 88, 0, 1, 1);
  //Course C = ParseCourse("CS,499,01,Professional Seminar,0,0,0,0,0,2,1, 88,0,0,Hummel");
  REQUIRE(C.Dept == "CS");
  REQUIRE(C.Title == "Professional Seminar");
  REQUIRE(C.Number == 499);
  REQUIRE(C.Section == 01);
  REQUIRE(C.Instructor == "Hummel");
  
  REQUIRE(C.NumA == 1);
  REQUIRE(C.NumB == 2);           
  REQUIRE(C.NumC == 3);
  REQUIRE(C.NumD == 4);
  REQUIRE(C.NumF == 5);
  
  REQUIRE(C.NumI == 2);
  REQUIRE(C.NumS == 88);           
  REQUIRE(C.NumU == 0);
  REQUIRE(C.NumW == 1);
  REQUIRE(C.NumNR == 1);
    
  GradeStats G = GetGradeDistribution(C);
  REQUIRE(G.N == 15);
  REQUIRE(G.NumA == 1);
      REQUIRE(G.NumB == 2);
      REQUIRE(G.NumC == 3);
      REQUIRE(G.NumD == 4);
      REQUIRE(G.NumF == 5);
      REQUIRE(G.PercentA == ((1.0/15)*100.0));
    REQUIRE(G.PercentB == ((2.0/15)*100.0));
    REQUIRE(G.PercentC == ((3.0/15)*100.0));
    REQUIRE(G.PercentD == ((4.0/15)*100.0));
    REQUIRE(G.PercentF == ((5.0/15)*100.0));
      
  
  //REQUIRE(C.getGradingType() == Course::Satisfactory);
  //REQUIRE(C.getNumStudents() == )
}
