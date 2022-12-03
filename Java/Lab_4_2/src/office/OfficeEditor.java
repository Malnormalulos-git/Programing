package office;

import texteditor .*;

public class OfficeEditor extends NotePad{
    private String font;
    private double leftMargin;

    public void createDocument(String text, String font, double leftMargin, String fileName){
        createDocument(text, fileName);
        this.font = font;
        this.leftMargin = leftMargin;
    }
    public String getDocument(){
        String properties = font + " " + Double.toString(leftMargin) + " ";
        return " Office document created : " + document.getContent() + " " + properties + document.getFile();
    }
}