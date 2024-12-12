
#include <iostream>
#include <string>
#include <typeinfo>

#include "..//..//..//..//ag85cpf//libssrc//ag85cpfl//cpp2011//apfcol11//1//afclnt11.hpp" //AG19850316CppframebraryPartCorelibrary1UptoinnanosecondstimerCpp2011

int main(int argc, char * argv[]) {
    
    using namespace AG85::Cppframebrary::Corelibrary1::CppVersion2011;

	try {

        Uptoinnanosecondstimer commandLineCommandDurationUptoinnanosecondstimer;

        std::string commandToPerform;

        for (unsigned int argNumber = 1; argNumber < argc; ++argNumber){
            commandToPerform += argv[argNumber];
            commandToPerform += " ";
        }

        commandLineCommandDurationUptoinnanosecondstimer.Run();

        int res = std::system(commandToPerform.c_str());

        commandLineCommandDurationUptoinnanosecondstimer.Pause();
        
        std::cout
            << commandLineCommandDurationUptoinnanosecondstimer.GetInnanosecondsinterval().count();

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
