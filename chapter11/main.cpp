#include "Directory.h"
#include "File.h"

int main(int argc, char *argv[]) {
    Directory *root = new Directory("root");
    Directory *bin  = new Directory("bin");
    Directory *tmp  = new Directory("tmp");
    Directory *usr  = new Directory("usr");

    root->addEntry(bin);
    root->addEntry(tmp);
    root->addEntry(usr);
    bin->addEntry(new File("vi", 3000));
    bin->addEntry(new File("latex", 2000));
    static_cast<Entry *>(root)->printList();

    Directory *yuki   = new Directory("yuki");
    Directory *hanako = new Directory("hanako");
    Directory *tomura = new Directory("tomura");

    usr->addEntry(yuki);
    usr->addEntry(hanako);
    usr->addEntry(tomura);
    yuki->addEntry(new File("diary.html", 100));
    hanako->addEntry(new File("memo.tex", 1024));
    tomura->addEntry(new File("junk.mail", 40));

    static_cast<Entry *>(root)->printList();

    {
        File *f = new File("123.txt", 1);
        f->addEntry(root);
        f->printList("");

        delete f;
    }
    { yuki->printList(""); }
    {
        File  *f = new File("123.txt", 1);
        Entry *e = new Directory("test");

        e->addEntry(f);
        e->printList("");
        e->toString();
        delete e;
    }

    delete root;

    return 0;
}
