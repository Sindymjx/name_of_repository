#ifndef BOOKINDEX_H
#define BOOKINDEX_H

class BookIndex {
    public:
        BookIndex();
        BookIndex(const char *name, const char *author, const int year);
        ~BookIndex();
        char * getTitle() const;
        char * getAuthorName() const;
        void setCopyright(const int);
        int getCopyright() const;
    private:
        char *title;
        char *authorName;
        int copyright;
};
#endif
