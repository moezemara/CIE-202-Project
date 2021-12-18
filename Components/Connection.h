#pragma once
#include "../UI/UI.h"

class Component;	//forward class declaration

class Connection 
{

private:
	string c_Label = "Connection"; // Initial value for connection
	//connection connects between two compoenets
	Component	*Cmpnt1, *Cmpnt2;
	GraphicsInfo *pGfxInfo = new GraphicsInfo(2);	//The parameters required to draw a connection
	ConnectionInfo* cInfo = new ConnectionInfo;
	string* conDataIn = new string[4];

public:
	Connection(ConnectionInfo *cInfo, GraphicsInfo *r_GfxInfo, Component *cmp1=nullptr, Component *cmp2=nullptr);
	~Connection();
	virtual void Draw(UI* );	//for connection to Draw itself
	virtual string* Save(); //returns components data to save
	string getConnectionLabel() const;
	void setConnectionLabel(string label);

	GraphicsInfo* getGraphicsInfo() const;

};
