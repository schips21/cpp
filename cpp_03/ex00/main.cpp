#include "FragTrap.hpp"

int main(){
    const std::string frag_arr[5] = {"Frag", "Frog", "Frug", "Freg", "Frig"};
    const std::string target_arr[5] = {"Apple", "Dog", "Cat", "Banana", "Horse"};
    srand(time(0));
    FragTrap frag(frag_arr[rand() % 5]);
    frag.vaulthunter_dot_exe(target_arr[rand() % 5]);
    return 0;
}