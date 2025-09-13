#ifndef RPN_H
#define RPN_H
#pragma once
#include <stack>
#include <string>
#include <vector> 
/** 
* @brief Evaluates a mathematical expression in Reverse Polish Notation (RPN). 
*  
* @param expression A string containing the RPN expression (e.g., "2 3 +"). 
* Tokens must be separated by spaces. 
* @return double The result of the evaluated expression. 
* @exception std::invalid_argument Thrown if the expression is invalid, 
* contains an unknown operator, or attempts division by zero. 
*/ 
std::vector<std::string> tokenize(const std::string& expression);
bool is_number(const std::string& s);
double evaluate_rpn(const std::string& expression); 
#endif