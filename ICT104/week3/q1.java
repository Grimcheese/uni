import java.util.scanner

public class q1
{
	public static void main(String[] args)
	{
	
		// Get a string from the user
		String inputString = GetString();
		
		// Checks to see if a letter appears more than
		// once in the string. 
		// NOTE: Does not return the letter/s it simply
		// gives a yes/no answer
		boolean repeat = StringCheck(inputString);
		
		
		// Outputs a message to the user based on the result
		// of StringCheck
		if(repeat == true)
		{
			System.out.println("The string contains the same letter more than once");
		}
		else
		{
			System.out.println("The string has no double characters.");
		}
	}
	
	
	// Returns a string that is input by the user
	public static String GetString()
	{
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Please input a string: ");
		String inputString = keyboard.nextLine();
		
		return(inputString);
	}
	
	
	// Assuming that the string only contains letters 
	// of the alphabet
	public static boolean StringCheck(String inString)
	{
		letters[26] = {0};
		
		inString.toLower();
		int length = inString.strlen();
	
		for(int i = 0; i < length; i++)
		{
			char character = inString.charAt(i);
			letters[(int)character - 97]++;
		}
		
		for(i = 0; i < 26; i++)
		{
			if(letters[i] > 1)
			{
				return(true);
			}
		}
		
		// if the method gets to this point none of the letters appear twice
		return(false);
	}
	
}