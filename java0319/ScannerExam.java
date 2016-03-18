import java.util.Scanner;

public class ScannerExam {
	
	public static void main(String args[]){
		int x,b=0;
		double y,z;
		
	Scanner a= new Scanner(System.in);
	
	while(b!=1){
	
	System.out.println("나이,체중,신장을 빈칸으로 분리하여 순서대로 입력하세요.(계속하실꺼면 1,중지하실꺼면2)");
	x=a.nextInt();
	y=a.nextDouble();
	z=a.nextDouble();
	System.out.println("당신의 나이는"+x+"입니다");
	System.out.println("당신의 체중은"+y+"입니다");
	System.out.println("당신의 신장은"+z+"입니다");
	System.out.println("계속하실꺼면0을 입력해주세요.");
	System.out.println("중지하실꺼면1을 입력해주세요");
	b=a.nextInt();
	}
	}
	
}
