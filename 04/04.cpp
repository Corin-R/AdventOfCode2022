
#include "reader.h"

int findCollision(std::string s){
    int result = 0;
    size_t pos = 0; 
    std::string l, r;
    std::string delim1 = ",";
    std::string delim2= "-";

    pos = s.find(delim1);
    l = s.substr(0, pos);
    r = s.erase(0, pos+delim1.length());

    pos = l.find(delim2);
    //First input size
    int a = std::stoi(l.substr(0,pos));
    int b = std::stoi(l.erase(0,pos + delim2.size()));
    
    pos = r.find(delim2);
    int x = std::stoi(r.substr(0, pos));
    int y = std::stoi(r.erase(0, pos + delim2.size()));

    if( b >= x && b < y  || y >= a && y <= b ){
        result = 1;
    }


    return result;
}

//guessed 873, too low

int main(int argc, char** argv){

    std::cout << "Hello world!" << std::endl;

    Reader read = Reader(argv);
    read.print();  
    std::vector<std::string> input = read.getInput();

    int count = 0; 
    for (size_t i = 0; i < input.size(); i++)
    {
        count += findCollision(input.at(i));
    }
    std::cout << "final result is " << count << std::endl;
    

    



    return 0;
}