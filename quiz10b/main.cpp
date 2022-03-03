#include <iostream>

namespace Anim {
    enum Animal {
        chicken, dog,cat, elephant, duct, snake,
    };
}
int main(){
    int legs[6] = {2, 4,4,4,2,0};
    std::cout << "jumlah kaki bebek adalah " << legs[Anim::Animal::duct];
    return 0;
}