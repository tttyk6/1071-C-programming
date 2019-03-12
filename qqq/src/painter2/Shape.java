package painter2;

public abstract class Shape {
	

	protected int height;
	protected boolean filled;
	protected String c="*";
	
	public Shape(int height, boolean filled) {
		this.height = height;
		this.filled = filled;
	}
	
	public Shape(int h) {
		height = h;
	}

	public Shape(int height, boolean filled, String c) {
		this.height = height;
		this.filled = filled;
		this.c = c;
	}

	public Shape() {
		
	}
	
	public int getHeight() {
		return height;
	}

	public void setHeight(int height) {
		this.height = height;
	}
	
	public abstract void draw();
	
}
