package painter2;

public class Rect extends Shape {

	private int width;

	public Rect(int height, int width) {
		super(height);
		this.width = width;
	}

	public Rect(int height, int width, boolean filled) {
		super(height, filled);
		this.width = width;
	}

	public Rect(int height, int width, boolean filled, String c) {
		super(height, filled, c);
		this.width = width;
	}

	public Rect() {
		super();
	}
	
	public void setWidth(int width) {
		this.width = width;
	}

	public int getWidth() {
		return width;
	}

    

	@Override
	public String toString() {
		return String.format("Height: %d; Width: %d; Filled: %s; Char: %s", height, width, filled, c);
	}

	public void draw() {
	   if(filled) {
		   for (int i = 1; i <= height; i++) {
				for (int j = 1; j <= width; j++)
					System.out.print(c);
				System.out.println();
			}   
	   }else {
		   for (int i = 1; i <= height; i++) {
				for (int j = 1; j <= width; j++)
					if(i==1 || i==height || j==1 || j==width)
						System.out.print(c);
					else
						System.out.print(" ");
				System.out.println();
			}  
	   }
		
	}
}
