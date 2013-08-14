import java.util.scanner

public class q1
{
	public static void main(String[] args)
	{
	
		String inputString = GetString();
		
		boolean repeat = StringCheck(inputString);
	}
	
	public static String GetString()
	{
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Please input a string: ");
		String inputString = keyboard.nextLine();
		
		return(inputString);
	}
	
	public static boolean StringCheck(String inString)
	{
		for(int i = 0; i < length; i++)
		{
			inString.charAt(i);
		}
	}
	
}