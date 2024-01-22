#include <iostream>
#include <array>

struct Item{
    std::string name;
    int gold;

};

int main(){

     std::array<Item ,4> arr{{ Item{"sword", 5},Item{"dagger", 3},Item{"club", 2},Item{"spear", 7} }};

     for(auto& Item : arr){
        std::cout << "A " << Item.name << " has " << Item.gold << " gold" << '\n';
    }

    return 0;
}
