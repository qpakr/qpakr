import java.io.*;
public class InputExample {
	public static void main(String args[]){
		InputStreamReader rd=new InputStreamReader(System.in);
		try{
			while(true){
				int a=rd.read();if(a==-1)
					break;
				System.out.println((char)a);
				}
	}
		catch(IOException e){
			System.out.println("입력오류 발생");
		}
}
}
