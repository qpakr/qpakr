import java.util.Scanner;

public class ScannerExam {
	
	public static void main(String args[]){
		int x,b=0;
		double y,z;
		
	Scanner a= new Scanner(System.in);
	
	while(b!=1){
	
	System.out.println("����,ü��,������ ��ĭ���� �и��Ͽ� ������� �Է��ϼ���.(����Ͻǲ��� 1,�����Ͻǲ���2)");
	x=a.nextInt();
	y=a.nextDouble();
	z=a.nextDouble();
	System.out.println("����� ���̴�"+x+"�Դϴ�");
	System.out.println("����� ü����"+y+"�Դϴ�");
	System.out.println("����� ������"+z+"�Դϴ�");
	System.out.println("����Ͻǲ���0�� �Է����ּ���.");
	System.out.println("�����Ͻǲ���1�� �Է����ּ���");
	b=a.nextInt();
	}
	}
	
}
