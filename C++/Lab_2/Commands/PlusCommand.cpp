//
// Created by Bayramov Nidjat on 04.11.18.
//

#include "PlusCommand.h"

#include "../CommandFactory.h"
#include "../CommandCreators/PlusCommandCreator.h"
#include "../StackCalculator.h"
#include "../Exceptions/StackException.h"

//Initialize the command before running main
//Anonymous namespace
namespace {
    //Global function
    bool initializePlusCommand() {
        CommandFactory::getInstance().registerCommand("+", new PlusCommandCreator());
        return true;
    }
    //Calling the global function
    bool state = initializePlusCommand();
}

void PlusCommand::execute(std::vector<std::string>, Context &context) {
    if (context.stackEmptiness() || context.stackSize() == 1)
        throw StackException("Not enough stack items");

    double argument_1 = context.stackTop();
    context.stackPop();

    double argument_2 = context.stackTop();
    context.stackPop();

    context.stackPush(argument_1 + argument_2);
}