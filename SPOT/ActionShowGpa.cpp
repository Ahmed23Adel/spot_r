#include "ActionShowGpa.h"
#include <string>
using namespace std;
ActionShowGpa::ActionShowGpa(Registrar* p) :Action(p)
{
}

bool ActionShowGpa::Execute()
{
	GUI* pGUI = pReg->getGUI();
	string data="GPA: ";
	data += to_string(pReg->getStudyPlay()->getDoneCredits());
	data += " Done Credits: ";
	data += to_string(pReg->getStudyPlay()->getDoneCredits());
	data += " ";
	data += pReg->getStudyPlay()->getStudentLevel();
	pGUI->PrintMsg(data);
	ActionData actData = pReg->getGUI()->GetUserAction();
	return true;
}

ActionShowGpa::~ActionShowGpa()
{

}