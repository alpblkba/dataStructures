#include <iostream>
#include <regex>
#include "Calculator.h"


using namespace std;

Calculator::Calculator(string infixExp) {
	this->infixExpression = infixExp;
	this->postfixExpression = ""; 
	Stack* stack;
	
	regex integer("(\\+|-)?[[:digit:]]+");
	istringstream iss(infixExp);
	string token;
	StackItem* si;
	iss >> token;
	while(token != "\0") {
		for (int i = 0; i < infixExp.length(); i++) {
			if (infixExp[i] >= '0' && infixExp[i] <= '9') {
				if (regex_match(token, integer)) {
					token += infixExp[i] + " ";
					iss >> token;
				}
			}
			else if (infixExp[i] == '(') {
				stack->push(new StackItem(token));
				iss >> token;
			}
			else if (infixExp[i] == ')') {

				while (stack->top() != '\0' && stack->top()->op != OPERATOR_LEFTPAR) {
					postfixExpression += stack->pop()->toString() + " ";

				}
				stack->pop();
				iss >> token;


				}
				if (stack->top()->op == OPERATOR_LEFTPAR) {
					
					stack->pop();
				}

			

			else {
				while (stack->top() != '\0' && precedance(infixExp[i]) <= precedance(stack->top()->n)) {

					token = stack->top()->n;
					stack->pop();
					postfixExpression += token + " ";
					cout << "an operator is scanned" << endl;
				}
			}

		}
	
	}


}

Calculator::~Calculator() {
	delete stack;
}

string Calculator::getPostfix() {

	return postfixExpression;
	
}

int Calculator::calculate() {

	this->stack = new Stack();
	regex integer("(\\+|-)?[[:digit:]]+");
	istringstream iss(postfixExpression);
	string token;
	iss >> token;
	while (token != "¥") {
		if (regex_match(token, integer)) {
			this->stack->push(new StackItem(token));
			iss >> token;
		}
		else {
			int last = stack->pop()->n;
			int previous = stack->pop()->n;
			
		}
	}
}


int Calculator::precedance(char c)
{
	if (c == '*')
		return 3;
	else if (c == '/')
		return 2;
	else if (c == '+')
		return 1;
	else if (c == '-')
		return 0;
	else
		return -1;
}

