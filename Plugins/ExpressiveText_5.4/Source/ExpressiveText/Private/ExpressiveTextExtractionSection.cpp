#include "ExpressiveTextExtractionSection.h"

FExpressiveTextExtractionSection::FExpressiveTextExtractionSection() {
    this->SectionIndex = 0;
    this->Type = EExtractionSectionType::TagsDelimiterStart;
    this->BeginIndex = 0;
    this->EndIndex = 0;
}

