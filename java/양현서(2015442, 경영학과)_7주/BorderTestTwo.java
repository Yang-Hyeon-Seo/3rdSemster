import java.awt.*;

public class BorderTestTwo extends Frame
{
	Panel panel;
	
	public BorderTestTwo() 
	{
		super("BorderTestTwo");
		
		setLayout(new BorderLayout(5,5));//위 아래, 양 옆 공간 5씩
		add(new Label("Hello World!!!", Label.CENTER), BorderLayout.NORTH);
		add(new TextArea("Center", 5, 20), BorderLayout.CENTER);
		
		panel = new Panel();
		//Panel panel = new Panel();이라고 하면 생성자 함수 바깥의 panel가 다른 panel을 지칭한다
		panel.setLayout(new FlowLayout());
		panel.add(new Button("OK"));
		panel.add(new Button("CANCEL"));
		add(panel, BorderLayout.SOUTH);
		setSize(300,200);
		setVisible(true);
	}
}
