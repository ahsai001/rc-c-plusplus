#include <iostream>


int main(){
    int scores[] = {84, 92, 76, 81, 56};
    const int numStudents = sizeof(scores) / sizeof(scores[0]);
    int highestScore = 0;
    int highestScoreIndex = -1;
    for (int i = 0; i < numStudents; i++)
    {
        if(scores[i] > highestScore){
            highestScore = scores[i];
            highestScoreIndex = i;
        }
    }

    std::cout << "Index dengan score tertinggi adalah : " << highestScoreIndex << "\n";
    
    return 0;
}
