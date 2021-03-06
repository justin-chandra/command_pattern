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
			Op * op = new Op(i);
			root = op;
		}
};

class AddCommand : public Command {
	public:
		AddCommand(Command * c, double i)
		{
			Base * left = c->get_root();
			Op * right = new Op(i);
			Add * add = new Add(left, right);
			root = add;
		}
};

class SubCommand : public Command {
	//SubCommand Code Here
	public:
		SubCommand(Command * c, double i)
		{
			Base * left = c->get_root();
			Op * right = new Op(i);
			Sub * sub = new Sub(left, right);
			root = sub;
		}
};

class MultCommand : public Command {
	//MultCommand Code Here
	public:
		MultCommand(Command * c, double i)
		{
			Base * left = c->get_root();
			Op * right = new Op(i);
			Mult * mult = new Mult(left, right);
			root =  mult;
		}
};

class SqrCommand : public Command {
	//SqrCommand Code Here
	public:
		SqrCommand(Command * c)
		{
			Base * num = c->get_root();
			Sqr * sqr = new Sqr(num);
			root = sqr;
		}
};

#endif //__COMMAND_CLASS__
