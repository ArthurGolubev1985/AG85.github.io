
#include <iostream>
#include <string>
#include <typeinfo>

#include "..//..//..//..//ag85cpf//libssrc//ag85cpfl//cpp1998//apfcol98//1//afclst98.hpp" //AG19850316CppframebraryPartCorelibrary1InsecondstimerCpp1998

int main(int argc, char * argv[]) {
    
    using namespace AG85::Cppframebrary::Corelibrary1::CppVersion1998;

	try {

        Insecondstimer commandLineCommandDurationInsecondstimer;

        std::string commandToPerform;

        for (unsigned int argNumber = 1; argNumber < argc; ++argNumber){
            commandToPerform += argv[argNumber];
            commandToPerform += " ";
        }

        commandLineCommandDurationInsecondstimer.Run();

        int res = std::system(commandToPerform.c_str());

        commandLineCommandDurationInsecondstimer.Pause();
        
        std::cout
            << commandLineCommandDurationInsecondstimer.GetInsecondsinterval();

        return res;

    } catch (std::bad_alloc& exception) {
        std::clog << "failed to allocate memory (" << exception.what() << ")!" << "\n";
    } catch (std::exception& exception) {
        std::clog << "notexpectederror " << exception.what() << ": ";
        std::clog << "cppexceptiontype-" << typeid(exception).name() << "\n";
    } catch (...) {
        std::clog << "unknownerror" << "\n";
    }

    return -1;

}

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
