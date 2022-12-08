package testandwork.data;

public class Document{
    private String file;
    private String content;
    public void setFile(String file){
        this.file = file;
    }
    public void setContent(String content){
        this.content = content;
    }
    public String getFile(){
        return file;
    }
    public String getContent(){
        return content;
    }
}