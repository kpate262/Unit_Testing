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


TEST_CASE( "Test 10", "[Project01]" ) 
{
  Dept C("CS");
  C.Courses.push_back(Course("CS", "Professional Seminar", 377, 02, "Hummel", 1, 2, 3, 4, 5, 2, 88, 0, 1, 1));
      C.Courses.push_back(Course("Bio", "Professional Se", 439, 04, "Humm", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      C.Courses.push_back(Course("CS", "Professio", 239, 1, "Hummfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      C.Courses.push_back(Course("CS", "Profes", 251, 3, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      C.Courses.push_back(Course("CS", "Profe", 141, 02, "Dale", 12, 24, 33, 49, 56, 2, 88, 0, 6, 1));
    //W = 1+13+51+431+6 = 502
    //D+F = 4+5+4+5+5+40+48+59+49+56 = 275
    //DFW = 777
    //N = 1031
    
    vector<Course> temp = FindCourses(C, "DU");
    REQUIRE(temp.size() == 0);
    vector<Course> temp2 = FindCourses(C, "Hu");
    REQUIRE(temp2.size() == 3);
    REQUIRE(temp2[0].Number == 239);
    REQUIRE(temp2[1].Number == 377);
    REQUIRE(temp2[2].Number == 439);
    REQUIRE(temp2[0].Section == 1);
    REQUIRE(temp2[1].Section == 2);
    REQUIRE(temp2[2].Section == 4);
 
   Dept CS("CS");
      CS.Courses.push_back(Course("CS", "Professional Seminar", 499, 01, "Hummel", 1, 2, 3, 4, 5, 2, 88, 0, 1, 1));
      CS.Courses.push_back(Course("CS", "Professional Se", 500, 4, "Humm", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      CS.Courses.push_back(Course("CS", "Professio", 500, 3, "Hummfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      CS.Courses.push_back(Course("CS", "Profes", 151, 1, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      CS.Courses.push_back(Course("CS", "Profe", 251, 02, "Dale", 12, 24, 33, 49, 56, 2, 88, 0, 6, 1));
    
    Dept EE("EE");
      EE.Courses.push_back(Course("EE", "Professional Seminar", 499, 01, "mmel", 1, 2, 3, 4, 5, 2, 88, 0, 1, 1));
      EE.Courses.push_back(Course("EE", "Professional Se", 500, 2, "Hummi", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      EE.Courses.push_back(Course("EE", "Professio", 361, 1, "Hmmfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      EE.Courses.push_back(Course("EE", "Profes", 151, 1, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      EE.Courses.push_back(Course("EE", "Profe", 251, 02, "Dale", 12, 24, 33, 49, 56, 2, 88, 0, 6, 1));
    
    Dept CE("CE");
      CE.Courses.push_back(Course("CE", "Professional Seminar", 499, 01, "jummel", 1, 2, 3, 4, 5, 2, 88, 0, 1, 1));
      CE.Courses.push_back(Course("CE", "Professional Se", 500, 1, "tumm", 5, 41, 13, 4, 5, 2, 88, 0, 13, 1));
      CE.Courses.push_back(Course("CE", "Professio", 361, 1, "Hummfdfd", 1, 20, 30, 40, 5, 2, 88, 0, 51, 1));
      CE.Courses.push_back(Course("CE", "Profes", 151, 1, "melHum", 15, 22, 32, 48, 59, 2, 88, 0, 431, 1));
      CE.Courses.push_back(Course("CE", "Profe", 251, 02, "Dale", 12, 24, 33, 49, 56, 2, 88, 0, 6, 1));
      
    College UIC("UIC");
    UIC.Depts.push_back(CS);
    UIC.Depts.push_back(EE);
    UIC.Depts.push_back(CE);
    vector<Course> temp5 = FindCourses(UIC, "Ru");
    REQUIRE(temp5.size() == 0);
    
    vector<Course> temp6 = FindCourses(UIC, "Hu");
    REQUIRE(temp6[0].Dept == "CS");
    REQUIRE(temp6[1].Dept == "CS");
    REQUIRE(temp6[2].Dept == "CE");
    REQUIRE(temp6[3].Dept == "CS");
    REQUIRE(temp6[4].Dept == "EE");
    
    vector<Course> temp3 = FindCourses(UIC, 611);
    REQUIRE(temp3.size() == 0);
    
    vector<Course> temp4 = FindCourses(UIC, 500);
    REQUIRE(temp4.size() == 4);
    REQUIRE(temp4[0].Dept == "CE");
    REQUIRE(temp4[1].Dept == "CS");
    REQUIRE(temp4[2].Dept == "CS");
    REQUIRE(temp4[3].Dept == "EE");
    REQUIRE(temp4[0].Section == 1);
    REQUIRE(temp4[1].Section == 3);
    REQUIRE(temp4[2].Section == 4);
    REQUIRE(temp4[3].Section == 2);
}
