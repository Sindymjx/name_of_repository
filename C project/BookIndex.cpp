#include<iostream>
#include<cstring>
#include "BookIndex.h"
using namespace std;

BookIndex::BookIndex() {
}
BookIndex::BookIndex(const char *name, const char *author, const int year) {

    title = new char[strlen(name) + 1];
    authorName = new cha[strlen(author) + 1];
    for (p = 0; p < strlen(name); p++) {
        title[p] = name[p];
    }
    for (p = 0; p < strlen(author); p++) {
        authorName[p] = author[p];
    }
    copyright = year;
}
BookIndex::~BookIndex() {
    delete title;
    delete authorName;
}
char * BookIndex::getTitle() const {
    return *title;
}
char * BookIndex::getAuthorName() const {
    return *authorName;
}
void BookIndex::setCopyright(const int x) {
    copyright = x;
}
int BookIndex::getCopyright() const {
    return copyright;
}
