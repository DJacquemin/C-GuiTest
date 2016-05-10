#include "Label.h"

Label::Label(BatchRenderer* renderer)
{
	f.loadFromFile(FONT_HELSINKI_FILE_PATH);
	m_Text.setString("");
	m_Text.setFont(f);
	setFontSize(TEXT_DEFAULT_FONT_SIZE);
	setTextColor(TEXT_DEFAULT_TEXT_COLOR);

	renderer->add(&m_Text);
}