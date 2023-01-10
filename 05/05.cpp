#include <regex>
#include <iostream>

#include "reader.h"

std::vector<std::vector<std::string>> parseStarting(std::vector<std::string> s){
    std::vector<std::vector<std::string>> resultInput;
    std::vector<std::string> head;
    std::regex headerRgx("[0-9]");
    

    for (size_t i = 0 ; i < s.size(); i++)
    {
        size_t myLength = s.size() - i - 1;
        std::string line = s.at(myLength);
        if(i == 0){
            //Parse header
            std::smatch match;
            while(std::regex_search(line, match, headerRgx)){
                std::cout << " My match: " << match[0] << std::endl;
                head.push_back(match[0]);
                resultInput.push_back(head);
                head.clear();
                if(line.size() > 4){
                    line.erase(0, 4);
                }else{
                    std::cout << "in here " << std::endl;
                    break;
                }
            }
            


        // }else{
        //     std::cout << "IN HERE\t" << line <<  std::endl;  
        //     line.erase(0,1);
            
        //     size_t insertPos = 0;
        //     size_t pos = 0;
        //     std::string delim = "] [";
            
        //     while((pos = line.find(delim)) != std::string::npos){
        //         //TODO INsertpos
        //         insertPos = 
        //         resultInput.at(insertPos).push_back(line.substr(0, pos));
        //         line.erase(0, pos + delim.length());

        //     }
        //     line.erase(1,2);
        //     resultInput.at(insertPos+1).push_back(line);  
        //     //Push back input
        }
    }
    

    
    return resultInput;
}

int main(int argc, char** argv){
    Reader read = Reader(argv);
    read.print();
    std::vector<std::string> input = read.getInput(); 
    std::vector<std::string> startingPos, movingCommands;

    for (size_t i = 0; i < input.size() ; i++)
    {
        if(input.at(i) == ""){
            break;
        }
        startingPos.push_back(input.at(i));

    }

    std::vector<std::vector<std::string>> starting = parseStarting(startingPos);


    
    
    





    return 0;

}