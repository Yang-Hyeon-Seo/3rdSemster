import java.awt.*;

public class ButtonLabelF extends Frame
{
	//Frame을 상속받는다>>ButtonLabelF가 하나의 프레임이 된다
	//따라서 Frame을 만들거나 함수를 사용할 때 f를 사용할 필요가 없다
	//하지만 Frame을 상속받으면 다른 클래스를 상속받을 수 없다(단일상속)
	//상속을 받지 않는다는 가정 하에 사용해야 한다
	
	//Button  b;
	//Label l;
	//이렇게 l과 b를 먼저 선언할 수 있다
	//이는 전역변수처럼 선언하는 효과가 있다
	
	ButtonLabelF()
	{

		super("Button Label Test F Frame");
		setLayout(new FlowLayout());
		
		Button  b = new Button("OK");
		Label l = new Label("저는 라벨입니다");
		
		add(b);
		add(l);
		
		setSize(400,400);
		setVisible(true);
	}
	ButtonLabelF(String msg)
	{
		super(msg);
		setLayout(new FlowLayout());
		
		Button  b = new Button("OK");
		Label l = new Label("저는 라벨입니다");
		
		add(b);
		add(l);
		
		setSize(400,400);
		setVisible(true);
	}
}
