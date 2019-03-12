package painter1;

import java.awt.BordertLayout;

public class PainterFrame {
	
	private DrawPanel drawPanel;
	public void painterFrame() {
		super();
		drawPanel = new DrawPanel();
		add(drawPanel, BordertLayout.CENTER);
		
	}

}
