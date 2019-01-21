/*test08.cpp*/

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


TEST_CASE( "Test 08", "[Project01]" ) 
{
  Dept C("CS");
  C.Courses.push_back(Course("CS", "Professional Seminar", 499, 01, "Hummel", 1, 2, 3, 4, 5, 2, 88, 0, 1, 1));
      C.Courses.push_back(Course("IE", "Professional Se", 500, 4, "Humm", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      C.Courses.push_back(Course("CS", "Professio", 500, 1, "Hummfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      C.Courses.push_back(Course("BIO", "Profes", 500, 1, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      C.Courses.push_back(Course("CS", "Profe", 500, 02, "Dale", 12, 24, 33, 49, 56, 2, 88, 0, 6, 1));
    //W = 1+13+51+431+6 = 502
    //D+F = 4+5+4+5+5+40+48+59+49+56 = 275
    //DFW = 777
    //N = 1031
    
    vector<Course> temp = FindCourses(C, 5);
    REQUIRE(temp.size() == 0);
    vector<Course> temp2 = FindCourses(C, 500);
    REQUIRE(temp2.size() == 4);
    REQUIRE(temp2[0].Number == 500);
    REQUIRE(temp2[1].Number == 500);
    REQUIRE(temp2[0].Section == 1);
    REQUIRE(temp2[1].Section == 1);
    REQUIRE(temp2[2].Section == 2);
    REQUIRE(temp2[3].Section == 4);
      
}
