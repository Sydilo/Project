#include <iostream>

int main() {
    std::string answer1, answer2, answer3, input;
    std::cout << "Це система діагностики COVID-19" << std::endl;

    std::cout << "Запитання 1: Чи була у вас підвищена температура протягом останніх 14 днів? (yes або no)" << std::endl;
    while(true) {
        std::cin >> input;
        if (input == "yes" || input == "no") {
            answer1 = input;
            break;
        }
        std::cout << "Будь ласка, введіть yes або no:";
    }
    if (answer1 == "yes") {
        std::cout << "Запитання 2: Чи спостерігався у вас сухий кашель протягом останніх 14 днів? (yes or no)"<< std::endl;
        while(true) {
            std::cin >> input;
            if (input == "yes" || input == "no"){
               answer2 = input;
               break;
            }
            std::cout << "Будь ласка, введіть коректну відповідь (yes або no):";
        }

    } else if (answer1 == "no") {
        std::cout << "Враховуючи симптоми, малоймовірно, що у вас COVID-19. Проте, будь ласка, продовжуйте практикувати соціальне дистанціювання та дотримуйтеся вказівок  МОС, щоб запобігти поширенню вірусу."<<std::endl;
    }
    if (answer2 == "yes") {
        std::cout << "Запитання 3: Чи відчували ви задишку або ускладнене дихання протягом останніх 14 днів? (yes or no)" << std::endl;
        while (true) {
            std::cin >> input;
            if (input == "yes" || input == "no") {
                answer3 = input;
                break;
            }
            std::cout << "Будь ласка, введіть yes or no:";
        }
    } else if (answer2 == "no"){
        std::cout << "Враховуючи симптоми, малоймовірно, що у вас COVID-19. Проте, будь ласка, продовжуйте стежити за своїми симптомами та зверніться до медичного працівника, якщо у вас виникнуть інші симптоми." << std::endl;
    }

    if (answer3 == "yes"){
        std::cout << "Судячи з симптомів, у Вас може бути COVID-19. Негайно зверніться до лікаря!" << std::endl;
        while (true) {
            std::cin >> input;
            if (input =="yes" || input == "no") {
                break;
            }
            std::cout << "Будь ласка, введіть yes or no:";
        }
    } else if (answer3 == "no") {
        std::cout << "Враховуючи ваші симптоми, у вас може бути респіраторна інфекція, відмінна від COVID-19. Будь ласка, зверніться до медичного працівника для отримання подальших порад." << std::endl;
    }

    return 0;
}
