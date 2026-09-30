import java.util.*;

class MatrixAnalyzer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] a = new int[3][3];

        System.out.println("Enter 9 values:");

        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                a[i][j] = sc.nextInt();

        System.out.println("Row sums:");

        for(int i=0;i<3;i++) {
            int sum = 0;
            for(int j=0;j<3;j++)
                sum += a[i][j];
            System.out.println(sum);
        }

        System.out.println("Column sums:");

        for(int j=0;j<3;j++) {
            int sum = 0;
            for(int i=0;i<3;i++)
                sum += a[i][j];
            System.out.println(sum);
        }

        System.out.println("Diagonal sums: " +
            (a[0][0]+a[1][1]+a[2][2]) + " " +
            (a[0][2]+a[1][1]+a[2][0]));
    }
}
