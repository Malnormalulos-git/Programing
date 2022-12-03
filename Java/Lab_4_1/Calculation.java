public class Calculation{
	public Matrix multiMatrix(Matrix a, Matrix b, int n){
		Matrix c = new Matrix(n);
		for(int i = 0; i < n; i ++)
			for(int j = 0; j < n; j ++)
				for(int k = 0; k < n; k ++)
					c. matrix[i][j] += a. matrix[i][k]* b. matrix[k][j];
		return c;
	}
}