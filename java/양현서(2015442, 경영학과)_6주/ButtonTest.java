import java.awt.*;

public class ButtonTest 
{
	ButtonTest()
	{
		Frame f = new Frame("Button Test");
		Button b = new Button("OK");
		
		f.add(b);
		f.setSize(400,400);
		f.setVisible(true);
	}
}
