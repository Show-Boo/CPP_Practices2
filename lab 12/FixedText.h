#pragma once
#include <iostream>
#include <string>
#include "Text.h"
class FixedText : public Text {
public:
	FixedText();
	string get() override;
	void append(string _t) override;
};
