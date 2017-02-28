#ifndef __COMMAND_CLASS__
#define __COMMAND_CLASS__

#include "composite.h"

class Command {
	protected:
		Base* root;

	public:
		Command() { };
		double execute() {
			return root->evaluate();
		};
		Base* get_root() {
			return root;
		};
};

class OpCommand : public Command {
	//OpCommand Code Here
	public:
		OpCommand(double i)
		{

		}
};

class AddCommand : public Command {
	public:
		AddCommand(Command * c, double i)
		{

		}
};

class SubCommand : public Command {
	//SubCommand Code Here
	public:
		SubCommand(Command * c, double i)
		{

		}
};

class MultCommand : public Command {
	//MultCommand Code Here
	public:
		MultCommand(Command * c, double i)
		{

		}
};

class SqrCommand : public Command {
	//SqrCommand Code Here
	public:
		SqrCommand(Command * c)
		{

		}
};

#endif //__COMMAND_CLASS__
