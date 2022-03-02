#include <iostream>
#include <string>
#include <cstdlib>


int readNumber(std::string info){
    std::cout << info;
    int input;
    std::cin >> input;
    return input;
}

void writeInfo(std::string info){
    std::cout << info << "\n";
}


int getRandomNumber(int min, int max){
    static const double fraction = 1.0 / (RAND_MAX + 1.0);
    return min+static_cast<int>((max-min+1)*(std::rand()*fraction));
}

int main(){
    std::srand(13345);
    int misteryNumber = getRandomNumber(readNumber("Tentukan angka terkecil : "), readNumber("Tentukan angka terbesar : "));
    int kesempatan = readNumber("Tentukan jumlah kesempatan : ");

    writeInfo("Angka misteri sudah di buat, silakan tebak sekarang!!!");
    
    for(int count=1; count<= kesempatan; ++count){
        int tebakan = readNumber("Coba tebak angka : ");
        if(tebakan > misteryNumber){
            writeInfo("Tebakan anda terlalu besar");
        } else if (tebakan < misteryNumber){
            writeInfo("Tebakan anda terlalu kecil");
        } else {
            writeInfo("Anda menang, horeeeee");
            return 0;
        }
    }

    writeInfo("Anda Kalah!!!!!");
    return 0;
}