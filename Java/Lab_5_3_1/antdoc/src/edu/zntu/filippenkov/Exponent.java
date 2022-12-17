package edu.zntu.filippenkov;
import java.util.Locale;
 /**
 * This class contain a method for Euler ’s number calculation
 * @author Filippenkov K.
 * @version 1.2
 * @since 2022-12-15
 */

public class Exponent{
	private String string = new String();// Empty string
 /**
 * This method calculate Euler’s number and Euler’s number error depending on
 * <em>i </em>, which changes as 10 , 100, ... , 100000000.
 * Method writes the results of calculating to string by
 * <code> String.format() </code> method.
 * @return string
 * @see <a href = "https://docs.oracle.com/javase/7/docs/api/java/lang/String.html">String.format()</a>
 */
 
public String calcExponent(){
		for(int i = 10; i < 100_100_101 ; i *= 10){
			double e = Math.pow((1.0 + 1.0/i), i);
			double delta = Math.abs(2.71828182845904523536 - e);
			string += String.format(Locale.ENGLISH, "i=%-9d\t\ty=%21.20f\tdelta=%21.20f\n", i, e, delta);
		}
		return string;
    }
}