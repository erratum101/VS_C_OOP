#include "text_editor.h"
#include "text_editorr.h"
#include <iostream>
#include <cassert>

int main() {
    textedit editor;
    editor.insertText("I am ", 0);
    editor.insertText("alive!", 5);
    assert(editor.getText() == "I am alive!");
    editor.replaceText(5, 17, "still alive!");
    assert(editor.getText() == "I am still alive!");
    editor.deleteText(5, 11);
    assert(editor.getText() == "I am alive!");
    editor.undo();
    assert(editor.getText() == "I am still alive!");
    editor.redo();
    assert(editor.getText() == "I am alive!");
    std::cout << "done" << std::endl;
    return 0;
}


