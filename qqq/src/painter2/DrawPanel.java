package painter2;

import java.awt.Color;
import java.awt.Graphics;
import java.util.Random;

public class DrawPanel   {
	
   private Shape shapes[];
   final int MAX = 100; 
   private int shapeCount;
   private int x1,y1,x2,y2;
   private boolean filled;              
   private Color color;
   
   Random rand;
   
   public DrawPanel() {
	   super();
	   shapes = new Shape[MAX];
	   rand = new Random();
	   randgen(5);
	   
   }

public void randgen(int n) {
	for(int i=0;i<n;i++) {
		x1 = rand.nextInt(600);
		x2 = rand.nextInt(600);
		y2 = rand.nextInt(600);
		filled = rand.nextBoolean();
		color = new Color(rand.nextInt(256), rand.nextInt(256), rand.nextInt(256));	
	
		shapeType = rand.nextInt(numTypes)+1;
				
	    switch(shapeType) {
		case RECT:
			shapes[shapeCount++] = new OVAL(x1,y1,x2,y2,filled,color);	
		break;
		case OVAL:
			shapes[shapeCount++] = new OVAL(x1,y1,x2,y2,filled,color);
	    }
    }
}

 public void paintComponent(Graphics g) {
	super.paintComponent(g);
	//g.setColor(color.blue);
	//g.fillRect(100,100,200,100);
	for(int i=0;i<shapeCount;i++) {
		shapes[i].draw(g);
		System.out.println(shapes[i]);
	  }
   }
}




