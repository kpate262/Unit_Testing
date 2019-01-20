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


TEST_CASE( "Test 04", "[Project01]" ) 
{
  Course C("CS", "Professional Seminar", 499, 01, "Hummel", 
           /*A-F*/ 0, 0, 0, 0, 0, 
           /*I,S,U,W,NR*/ 2, 88, 0, 0, 1);
  Course D("CS", "Professional Seminar", 499, 01, "Hummel", 
           /*A-F*/ 1, 2, 3, 4, 5, 
           /*I,S,U,W,NR*/ 2, 88, 0, 1, 1);
           
  //Course C = ParseCourse("CS,499,01,Professional Seminar,0,0,0,0,0,2,1, 88,0,0,Hummel");
  REQUIRE(D.Dept == "CS");
  REQUIRE(C.Title == "Professional Seminar");
  REQUIRE(C.Number == 499);
  REQUIRE(C.Section == 01);
  REQUIRE(C.Instructor == "Hummel");
  
  REQUIRE(D.NumA == 1);
  REQUIRE(D.NumB == 2);           
  REQUIRE(D.NumC == 3);
  REQUIRE(D.NumD == 4);
  REQUIRE(D.NumF == 5);
  
  REQUIRE(D.NumI == 2);
  REQUIRE(D.NumS == 88);           
  REQUIRE(D.NumU == 0);
  REQUIRE(D.NumW == 1);
  REQUIRE(D.NumNR == 1);  
  //REQUIRE(C.getGradingType() != Course::Letter);
  //10/16
  int DFW = 0; int N =0;
    
  REQUIRE(GetDFWRate(D, DFW, N) == 62.5);
  REQUIRE(DFW == 10);
  REQUIRE(N == 16);
  
  
  ///REQUIRE(C.getGradingType() == Course::Satisfactory);
  //REQUIRE(C.getNumStudents() == )
}
