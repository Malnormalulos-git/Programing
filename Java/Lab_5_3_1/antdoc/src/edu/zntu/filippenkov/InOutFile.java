package edu.zntu.filippenkov;
import java.io .*;
 /**
 * This class contains the methods for working with files.
 * @author Filippenkov K.
 * @version 1.1
 * @since 2022-12-15
 */
public class InOutFile{
    private File file;
/**
 * Constructor which creates File class object by
 * initializing it with the file name.
 * @param string is the name of the file on the disk
 */

	public InOutFile ( String string ){
		file = new File ( string );
	}

 /**
 * This method writes content with calculated Euler’s
 * numbers to file.
 * @param text content for writing to file
 * @see java.io.IOException
 */
	public void writer ( String text ) {
		try{
			PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(file)));
			pw.println(text);
			if( pw != null){
				pw.close();
			}
		} 
		catch(IOException ex){
			System.out.println(ex.getMessage());
		}
	}

 /**
 * This method reads content of file .
 * @return content of file
 * @see java.io.IOException
 */
	public String reader(){
		String text = new String();
		String line = new String();
		try{
			BufferedReader br = new BufferedReader(new FileReader(file));
			while((line = br.readLine()) != null){
			text += line + "\n";
			}
			if(br != null){
					br.close();
			}
		} 
		catch(IOException ex){
			System.out.println(ex.getMessage());
		}
		return text;
	}
}