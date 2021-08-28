import java.awt.*;

public class LabelTest 
{
	public static void main(String [] args)
	{
		Frame f = new Frame("Label Test");
		Label l = new Label("name : YangHyeonSeo");
	
		f.add(l);
		f.setSize(400, 400);
		f.setVisible(true);
	}
}
