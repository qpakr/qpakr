import java.util.Scanner;
public class open106 {
	public static void main(String[] args){
		
	Scanner a=new Scanner(System.in);
	String name1;
	String name2;
	System.out.println("가위 바위 보 게임입니다. 가위,바위,보 중에서 입력하세요");
	System.out.print("현영>>");
	name1=a.next();
	System.out.print("영미>>");
	name2=a.next();
	if(name1.equals(name2))System.out.println("비겼습니다.");
	else if(name1.equals("가위")){
		if( name2.equals("보") )
			System.out.println("현영이가 이겼습니다.");
		else System.out.println("영미가 이겼습니다.");		
	}
	else if(name1.equals("바위")){
		if(name2.equals("가위"))
			System.out.println("현영이가 이겼습니다.");
		else System.out.println("영미가 이겼습니다.");	
	}
	else if(name1.equals("보")){
		if(name2.equals("바위"))
			System.out.println("현영이가 이겼습니다.");
		else System.out.println("영미가 이겼습니다.");	
	}
}
}
