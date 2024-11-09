
#include <iostream>
#include <string>
#include <typeinfo>

#include "ag85pf1//2011//a85f11cl//1//a85fclnt.hpp" //AG19850316Cppframebrary1PartCore1Commonlibrary1Uptonanosecondstimer

int main(int argc, char * argv[]) {
    
    using namespace AG85::Cppframebrary1::CppVersion2011::Corelibrary1;

	try {

        Uptonanosecondstimer wrappedProgramPerformingUptoinnannosecondstimer;

        std::string commandToPerform;

        for (unsigned int argNumber = 1; argNumber < argc; ++argNumber){
            commandToPerform += argv[argNumber];
            commandToPerform += " ";
        }

        wrappedProgramPerformingUptoinnannosecondstimer.Start();

        int res = std::system(commandToPerform.c_str());

        wrappedProgramPerformingUptoinnannosecondstimer.Stop();
        
        std::clog
            << wrappedProgramPerformingUptoinnannosecondstimer.GetInnanosecondsinterval().count();

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
