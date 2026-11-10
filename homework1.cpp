#include <iostream>


int main(){
    std::cout<<"hello world"<<std::endl;

    int age;
    std::cout << "please enter ur age "<< std::endl;
    std:: cin >> age;
    std::cout << "your age is " << age << std:: endl;

    std::string name;
    std::cout<<"please enter ur name "<<std::endl;
    std:: cin >> name;
    std::cout<< "ur name is : "<< name <<std::endl;

    char ch;
    std::cin.get(ch);
    std::cout<< ch <<std::endl;


}