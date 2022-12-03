package texteditor;

import data.Document;
import filemanager.FileManager;

public class NotePad extends TextEditor{
    protected Document document;
    public void createDocument(String text, String fileName){
        document = new Document();
        intputText(text);
        document.setContent(returnText());
        FileManager.saveAs(document, fileName);
    }

    public String getDocument(){
        return " Plain text created : " + document.getContent () + " " + document.getFile ();
    }
}