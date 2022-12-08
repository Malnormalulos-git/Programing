package testandwork;

import testandwork.ide.*;
import testandwork.office.*;
import testandwork.texteditor.*;

public class TestAndWork{
    public static void main(String[] args){

        NotePad note = new NotePad();
        note.createDocument("text text text", "myfile.txt");
        System.out.println(note.getDocument());

        OfficeEditor ofe = new OfficeEditor();
        ofe.createDocument("doc doc doc ", "Times Roman ", 2.5 , "myfile .doc ");
        System.out.println(ofe.getDocument());

        TableProcessor tp = new TableProcessor();
        tp.createDocument("Table text ", 4, 5, "mytable.xlsx");
        System.out.println(tp.getDocument());

        IDE [] ide = new IDE[2];
        ide [0] = new IDECpp();
        ide [1] = new IDEJava();
        String programText[] = {"class A: public B {...};", "class A extends B {...}"};
        String program[] = {"lab33", "lab42"};
        String extension[] = {". cpp", ". java"};
        for(int i = 0; i < 2; i++){
            ide [i].createDocument(programText[i] , program[i] + extension[i]);
            System.out.println(ide[i].getDocument());
            ide [i].doCompile(program[i]);
        }
    }
}