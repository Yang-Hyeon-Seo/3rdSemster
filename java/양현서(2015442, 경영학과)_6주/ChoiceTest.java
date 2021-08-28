import java.awt.*;

public class ChoiceTest extends Frame
{
	Choice choice;
	public ChoiceTest(String msg)
	{
		super(msg);
		setLayout(new FlowLayout());
		choice = new Choice();
		choice.add("One");
		choice.add("Two");
		choice.add("Three");
		choice.add("Four");
		choice.add("Five");
		choice.add("Six");
		
		add(choice);
		setSize(400,400);
		setVisible(true);
	}
}
