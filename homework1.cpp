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
    std::cin.getline(s, 30);
    std::cout<< "ur full name is : "<< s << '\n';

    if (age > 18 || age < 90) {
        std:: cout << "youre elligible \n";
    } else {
        std:: cout << "youre not elligible \n";
    }

    char op;
    float num1, num2, result;
    std:: cout << "please enter the numbers you want to calculate (+ , -, *, /) \n";
    std:: cin >> num1 >> op >> num2;

    switch(op){
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;

        case '/':
        result = num1 / num2;
        break; 

        default :
        std:: cout << "please enter the correct operation \n";
    }

}