import java.awt.*;

public class FlowTestOne extends Frame
{
	public FlowTestOne()
	{
		super("FlowTestOne");
		setLayout(new FlowLayout (FlowLayout.RIGHT, 0, 1));
		
		add(new Button("1"));
		add(new Button("2"));
		add(new Button("3"));
		add(new Button("4"));
		add(new Button("5"));
		add(new Button("6"));
		add(new Button("7")).setVisible(false);//7버튼을 보이지 않게 설정
		add(new Button("8"));
		add(new Button("9"));
		add(new Button("10"));
		add(new Button("11"));
		setSize(300,200);
		setVisible(true);
	}
}
