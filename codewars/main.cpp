#include <string>
#include <sstream>
std::string highAndLow(const std::string &numbers){
    std::int32_t highest = INT32_MIN, lowest = INT32_MAX;
    std::istringstream newStr(numbers);
    int32_t num;
    while(newStr >> num){
        if(num > highest){
            highest = num;
        }
        if(num < lowest){
            lowest = num;
        }                
    }

    std::string result = "";
    result += std::to_string(highest);
    result += " ";
    result += std::to_string(lowest);
    return result;
}

int main(){
    // highAndLow("1 2 3 4 5");  // return "5 1"
    highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4"); // return "5 -3"
    // highAndLow("1 9 3 4 -2"); // return "9 -5"
    return 0;
}