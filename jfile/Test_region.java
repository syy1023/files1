public class Test_region{
	public static void main(String args[]){
		String str1="hi anryan,how is your first experience in this place?";
		String str2="hello Anryan, hope you a nice day";
		boolean judge=str1.regionMatches(4,str2,8,6);
		System.out.println(judge);
	}
}