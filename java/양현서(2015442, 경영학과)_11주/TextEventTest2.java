import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class TextEventTest2 implements TextListener, ActionListener
{
	JFrame f;
	public TextEventTest2(String msg)
	{
		f = new JFrame(msg);
		TextArea edit = new TextArea();
		edit.addTextListener(this);
		JButton exit = new JButton("Exit");
		exit.addActionListener(this);
		f.add("Center", edit);
		f.add("South", exit);
		f.setSize(300,250);
		f.setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e)
	{
		f.setVisible(false);
		f.dispose();
		System.exit(0);
	}
	
	public void textValueChanged(TextEvent e)
	{
		System.out.println("Text Value 내용이 변경되었습니다");
	}
}
