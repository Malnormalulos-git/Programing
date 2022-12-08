package testandwork.texteditor;

public class TableProcessor extends NotePad {
    protected int numOfRows;
    protected int numOfCols;
    public void createDocument(String text, int numOfRows, int numOfCols, String fileName){
        super.createDocument(text, fileName);
        this.numOfRows = numOfRows;
        this.numOfCols = numOfCols;
    }
    public String getDocument(){
        String tableData = " " + numOfRows + "x" + numOfCols + " ";
        return " Table created : " + document.getContent() + tableData + document.getFile();
    }
}
