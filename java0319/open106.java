import java.util.Scanner;
public class open106 {
	public static void main(String[] args){
		
	Scanner a=new Scanner(System.in);
	String name1;
	String name2;
	System.out.println("���� ���� �� �����Դϴ�. ����,����,�� �߿��� �Է��ϼ���");
	System.out.print("����>>");
	name1=a.next();
	System.out.print("����>>");
	name2=a.next();
	if(name1.equals(name2))System.out.println("�����ϴ�.");
	else if(name1.equals("����")){
		if( name2.equals("��") )
			System.out.println("�����̰� �̰���ϴ�.");
		else System.out.println("���̰� �̰���ϴ�.");		
	}
	else if(name1.equals("����")){
		if(name2.equals("����"))
			System.out.println("�����̰� �̰���ϴ�.");
		else System.out.println("���̰� �̰���ϴ�.");	
	}
	else if(name1.equals("��")){
		if(name2.equals("����"))
			System.out.println("�����̰� �̰���ϴ�.");
		else System.out.println("���̰� �̰���ϴ�.");	
	}
}
}
