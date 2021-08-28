
public class School 
{
	Teacher yiyoon;
	Members kim, song, choi, lee;
	Members students[];
	
	public School() {
		yiyoon = new Teacher("Yoon", "M10313", "IT공학전공");
		kim = new Members("Kim", "IT200324");
		song = new Members("song", "IT190324");
		choi = new Members("choi", "IT180324");
		
		students = new Members[4];
		students[0] = yiyoon;
		students[1] = kim;
		students[2] = song;
		students[3] = choi;
	}
	
	public void makeWork() {
		int n = students.length;
		for (int i = 0; i<n; i++)
		{
			students[i].work();
		}
	}
	
	public static void main(String [] args) {
		School mycom = new School();
		mycom.makeWork();
	}
}
