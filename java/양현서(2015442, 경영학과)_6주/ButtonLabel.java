import java.awt.*;

public class ButtonLabel 
{
	ButtonLabel()
	{
		Frame f = new Frame("Button Label Test");
		
		f.setLayout(new FlowLayout());
		
		Button b = new Button("OK");
		Label l = new Label("���� ���Դϴ�");
		
		f.add(b);
		f.add(l);
		
		f.setSize(400,400);
		f.setVisible(true);
	}
}
