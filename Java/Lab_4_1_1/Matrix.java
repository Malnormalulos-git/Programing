import java.util.Arrays;

public class Matrix{
private int n;
	public int[][] matrix;
	public Matrix(int n){
		this .n = n;
	matrix = new int[n][n];
	}
	public void fillMatrix(){
		for(int i = 0; i < n; i ++)
			for(int j = 0; j < n; j ++)
				matrix[i][j] =(int)(Math.random()*10);
	}
	public void fillMatrix(int k){
		for(int i = 0; i < n; i ++)
			for(int j = 0; j < n; j ++){
				if(i == j)
					matrix[i][j] = k;
				else
					matrix[i][j] = 0;
			}
	}
	public void printMatrix(){
		for(int i = 0; i < n; i ++){
			System.out.println(Arrays.toString(matrix[i]));
		}
	System.out.println();
	}
}