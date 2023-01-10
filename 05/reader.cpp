#include "reader.h"

Reader::Reader(char** argv){
    std::fstream stream; 
    std::string line;

    stream.open(argv[1]);
    if(stream.is_open()){
        while(getline(stream, line)){
            this->m_inputVector.push_back(line);
        }


    }else {
        std::cout << "Could not open the stream with argv[1] " << argv[1] << "\n" << std::endl;
    }
}

std::vector<std::string> Reader::getInput(){
    return this->m_inputVector;
}

void Reader::print(){
    std::cout << "=== BEGIN OF INPUT ===" << std::endl;
    for (size_t i = 0; i < m_inputVector.size(); i++)
    {
        std::cout << m_inputVector.at(i) << std::endl;
    }
    std::cout << "=== END OF INPUT ===" << std::endl;
}