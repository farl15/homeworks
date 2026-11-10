#include <iostream>

typedef std::string string_t;


int main(){
    std::cout<<"hello world"<<std::endl;

    int age;
    std::cout << "please enter ur age \n";
    std:: cin >> age;
    std::cout << "your age is " << age << std:: endl;

    string_t name;
    std::cout<<"please enter ur name "<<std::endl;
    std:: cin >> name;
    std::cout<< "ur name is : "<< name << '\n';

    if (age > 18 || age < 90) {
        std:: cout << "youre elligible \n";
    }

}