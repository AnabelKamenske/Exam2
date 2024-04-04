#include <iostream>
#include <vector>
#include <algorithm>

double FindAverage(const std::vector<double> &numbers) {
    double sum = 0.0;

    for(double num:numbers){
        sum +=num;
    }

    return numbers.empty() ? 0 : sum/numbers.size();
}

int main(){
    std::vector<double> numbers;
    double inputNumber;

    std::cout << "Please Enter 5 numbers: \n";
    
    for(int i=0; i<5; i++){
        std::cin >> inputNumber;
        numbers.push_back(inputNumber);
    }

    double average = FindAverage(numbers);
    double min = *std::min_element(numbers.begin(), numbers.end());
    double max = *std::max_element(numbers.begin(), numbers.end());


    std::cout << "Numbers: ";
    for(double num: numbers){
        std::cout << num << " ";
    }
    std::cout << "\n" << "Average: " << average << "\n" << "Min: " << min << "\n" << "Max: " << max << "\n";

    //extra credit
    std::cout << "Reverse Order: " ;
    for(auto it = numbers.rbegin(); it != numbers.rend(); ++it){
        std::cout << *it << " ";
    }

    
    char saveResults;

    std::cout << "\n Would you like to save your results? Y or N:  ";
    std::cin >> saveResults;

    //if(saveResults == "Y" || saveResults == "y")

    return 0;
}