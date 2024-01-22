#include <array>
#include <iostream>

template<typename T, std::size_t N>
void printArray(const std::array<T , N>& arr){

    std::cout <<"The array (";
    for(auto a : arr){
        std::cout << a << ", ";

    }
    std::cout <<") has length " << arr.size();
    std::cout << '\n';


}

int main()
{
    constexpr std::array<int,4> arr1 { 1, 4, 9, 16 };
    printArray(arr1);

    constexpr std::array<char,5> arr2 { 'h', 'e', 'l', 'l', 'o' };
    printArray(arr2);

    return 0;
}
