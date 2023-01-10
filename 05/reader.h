#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#pragma once


class Reader {

std::vector<std::string> m_inputVector;

public:

Reader(char** argv);

std::vector<std::string> getInput();

void print();



};