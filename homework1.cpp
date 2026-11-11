#include <iostream>

typedef std::string string_t;


int main(){
    std::cout<<"hello world"<<std::endl;

    char s[] = "hello";
    int age;
    std::cout << "please enter ur age \n";
    std:: cin >> age;
    std::cout << "your age is " << age << std:: endl;

    string_t name;
    std::cout<< "please enter ur full name "<<std::endl;
    std::cin.ignore(1000, '\n');
    std::cin.getline(s, 10);
    std::cout<< "ur full name is : "<< s << '\n';

    if (age > 18 || age < 90) {
        std:: cout << "youre elligible \n";
    }

}