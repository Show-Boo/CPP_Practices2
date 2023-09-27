#include "FixedText.h"
FixedText::FixedText() : Text::Text("FIXED") {}
string FixedText::get() { return text; }
void FixedText::append(string _t) {}
