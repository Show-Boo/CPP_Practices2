#pragma once
#include <iostream>
#include <string>
using namespace std;


class Text {
protected:
	string text;
public:
	Text(string t) :text(t) {};
	virtual string get();
	virtual void append(string _t);

};