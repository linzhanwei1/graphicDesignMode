#pragma once

#include "Builder.h"

class HTMLBuilder : public Builder {
public:
    void makeTitle(const std::string &title) override {
        m_str.append("<html><head><title>" + title + "</title></head><body>");
        m_str.append("<h1>" + title + "</h1>");
    }
    void makeString(const std::string &str) override {
        m_str.append("<p>" + str + "</p>");
    }
    void makeItems(const std::vector<std::string> &items) override {
        m_str.append("<u1>");
        for (auto item : items) {
            m_str.append("<li>" + item + "</li>");
        }
        m_str.append("</u1>");
    }
    void close() override {
        m_str.append("</body></html>");
    }
    std::string getResult() {
        return m_str;
    }

private:
    std::string m_str;
};
