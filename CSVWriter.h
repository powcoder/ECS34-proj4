https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef CSVWRITER_H
#define CSVWRITER_H

#include <ostream>
#include <string>
#include <vector>

class CCSVWriter{
    protected:

    public:
        CCSVWriter(std::ostream &ou);
        ~CCSVWriter();

        bool WriteRow(const std::vector< std::string > &row);
};

#endif
