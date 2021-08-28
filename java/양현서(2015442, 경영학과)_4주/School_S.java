
public class School_S {
	Teacher_S yiyoon;
	Students kim, song, choi, lee;
	
	
	public School_S() {
		yiyoon = new Teacher_S("Yoon", "M10313", "IT공학전공");
		kim = new Students("Kim", "IT200324");
		song = new Students("song", "IT190324");
		choi = new Students("choi", "IT180324");
	}
	
	public void makeWork() {
		yiyoon.work();
		kim.work();
		song.work();
		choi.work();
	}
	
	public static void main(String [] args) {
		School mycom = new School();
		mycom.makeWork();
	}
}
