import java.util.Scanner;
public class ArithmenticOperator {
	public static void main(String[] args){
	int time;
	int second;
	int minute;
	int hour;
	Scanner sc= new Scanner(System.in);
	System.out.println("������ �Է��ϼ���:");
	time=sc.nextInt();
	second=time%60;
	minute = (time/60)%60;
	hour=(time/60)/60;
	System.out.print(time+"�ʴ�");
	System.out.print(hour+"�ð�");
	System.out.print(minute+"��");
	System.out.println(second+"���Դϴ�.");
	}
}
