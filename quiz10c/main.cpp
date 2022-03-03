#include <iostream>


int main(){
    int scores[] = {84, 92, 76, 81, 56};
    const int numStudents = sizeof(scores) / sizeof(scores[0]);
    int highestScore = 0;
    for (int i = 0; i < numStudents; i++)
    {
        if(scores[i] > highestScore){
            highestScore = scores[i];
        }
    }

    std::cout << "Score tertinggi adalah : " << highestScore << "\n";
    
    return 0;
}
