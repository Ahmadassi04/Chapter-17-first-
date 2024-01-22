#include <array>
#include <iostream>

int main()
{
        constexpr std::array<char, 5> arr { 'h', 'e', 'l', 'l', 'o' };
        int length {arr.size()};
        std::cout << "The length is: " << length <<'\n';

        std::cout << arr[1];
        std::cout << arr.at(1);
        std::cout << std::get<1>(arr);

        return 0;
}
