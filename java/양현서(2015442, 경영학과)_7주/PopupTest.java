import java.awt.*;
import java.awt.event.*;

public class PopupTest extends Frame implements ActionListener
{
	PopupMenu popup;
	Frame f;
	Button b;
	
	public PopupTest() {
		f = new Frame("Popup Test");
		b = new Button("POPUPTEST");
		
		b.addActionListener(this);
		
		popup = new PopupMenu("POP-UP");
		popup.add(new MenuItem("copy"));
		popup.add(new MenuItem("paste"));
		Menu col = new Menu("color");
		col.add(new MenuItem("white"));
		col.add(new MenuItem("blue"));
		popup.add(col);
		b.add(popup);
		
		f.add("Center", b);
		f.setSize(300,300);
		f.setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e)
	{
		popup.show(b,  10,  10);//b가 전체 클래스에서 적용되어야 한다 > 이름을 가장 큰 클래스의 처음에 정의한다
	}
}
