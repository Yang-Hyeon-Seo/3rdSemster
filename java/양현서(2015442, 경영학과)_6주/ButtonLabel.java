import java.awt.*;

public class ButtonLabel 
{
	ButtonLabel()
	{
		Frame f = new Frame("Button Label Test");
		
		f.setLayout(new FlowLayout());
		
		Button b = new Button("OK");
		Label l = new Label("저는 라벨입니다");
		
		f.add(b);
		f.add(l);
		
		f.setSize(400,400);
		f.setVisible(true);
	}
}
