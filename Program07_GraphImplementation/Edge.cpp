/***********************************
 * Edge.cpp
 * Written by Araynah Dover
 ***********************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Edge.h"

edge::edge(node *argt, float argw)
{
    target = argt;
    weight = argw;
}