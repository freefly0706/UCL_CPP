//
// Created by zp on 12/20/16.
//

#ifndef UCL_CPP_TEST_H
#define UCL_CPP_TEST_H

#include <iomanip>
#include <fstream>
#include <iostream>
#include "../property/UCLPropertyHead.h"
#include "../property/UCLPropertySet.h"
#include "UCL.h"
#include "../property/GenerateProperty.h"
#include <sstream>
#include "../property/GenerateProperty.h"

void testCommand();
void printPackString(string pack);
UCL generateRUCL();

UCLPropertySet generateCDPS();
UCLPropertySet generateCGPS();
UCLPropertySet generatePersonalPropertySet();

#endif //UCL_CPP_TEST_H
