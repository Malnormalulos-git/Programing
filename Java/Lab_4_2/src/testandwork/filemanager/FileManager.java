package testandwork.filemanager;

import testandwork.data.Document;

import java.text.SimpleDateFormat;
import java.util.Date;

public class FileManager{
    public static void saveAs(Document document, String fileName){
        SimpleDateFormat simpleDate = new SimpleDateFormat("dd.MM.yy k:m");
        String file = fileName + " " + simpleDate.format(new Date());
        document.setFile(file);
    }
}