
#include <iostream>
#include <stdlib.h>
#include <string>
#include <typeinfo>

#include "..//..//..//..//ag85cpf//libssrc//ag85cpfl//cpp2011//apfcol11//1//afclnt11.hpp" //AG19850316CppframebraryPartCorelibrary1UptoinnanosecondsTimerCpp2011

int main(int argc, char * argv[]) {
    
    using namespace AG85::Cppframebrary::Corelibrary1::CppVersion2011;

	try {

        UptoinnanosecondsTimer commandLineCommandDurationUptoinnanosecondsTimer;

        std::string commandToPerform;

        for (unsigned int argNumber = 1; argNumber < argc; ++argNumber){
            commandToPerform += argv[argNumber];
            commandToPerform += " ";
        }

        commandLineCommandDurationUptoinnanosecondsTimer.Run();

        int res = std::system(commandToPerform.c_str());

        commandLineCommandDurationUptoinnanosecondsTimer.Pause();
        
        std::cout
            << commandLineCommandDurationUptoinnanosecondsTimer.GetInmicrosecondsInterval().count();

        return res;

    } catch (std::bad_alloc& exception) {
        std::clog << "failed to allocate memory (" << exception.what() << ")" << "\n";
    } catch (std::exception& exception) {
        std::clog << "ecxeption: " << exception.what() << " ";
        std::clog << "(cpp exception type - " << typeid(exception).name() << ")\n";
    } catch (...) {
        std::clog << "exception" << "\n";
    }

    return EXIT_FAILURE;

}

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
