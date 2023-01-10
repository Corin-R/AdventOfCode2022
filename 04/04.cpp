
#include "reader.h"

int main(int argc, char** argv){

    std::cout << "Hello world!" << std::endl;

    Reader read = Reader(argv);
    read.print();  
    



    return 0;
}