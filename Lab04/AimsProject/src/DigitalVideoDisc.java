
public class DigitalVideoDisc {
	
	private String title;
	private String category;
	private String director;
	private int length;
	private float cost;
	
//	public DigitalVideoDisc(String title) {
//		super();
//		this.title = title;
//	}
	
	public DigitalVideoDisc(String category) {
		super();
		this.category = category;
	}
	
	public DigitalVideoDisc(String catogory, String title, float cost) {
		super();
		this.category = catogory;
		this.title = title;
		this.cost = cost;
	}
	
	public DigitalVideoDisc(String title, String category, String director, int length, float cost) {
		super();
		this.title = title;
		this.category = category;
		this.director = director;
		this.length = length;
		this.cost = cost;
	}
	
	public DigitalVideoDisc(String director, String catogory, String title, float cost) {
		super();
		this.director = director;
		this.category = catogory;
		this.title = title;
		this.cost = cost;
	}
	
	// print out of DVD information 
	public void showInformationDVD() {
		System.out.println("Title: " + title +
							" | Category: " + category +
							" | Director: " + director +
							" | Length:  " + length +
							" | Cost: " + cost);
	}
	
	// Check two disc is equal
	public boolean equals(DigitalVideoDisc disc) {
		if(title == disc.getTitle() && category == disc.getCategory() &&
				director == disc.getDirector() && length == disc.getLength() && 
				cost == disc.getCost()) {
			return true;
		} else {
			return false;
		}
	}
	
	
	public String getCategory() {
		return category;
	}
	
	public void setCategory(String category) {
		this.category = category;
	}
	
	public String getTitle() {
		return title;
	}
	
	public void setTitle(String title) {
		this.title = title;
	}
	
	public String getDirector() {
		return director;
	}
	
	public void setDirector(String director) {
		this.director = director;
	}
	
	public int getLength() {
		return length;
	}
	
	public void setLength(int length) {
		this.length = length;
	}

	public float getCost() {
		return cost;
	}
	
	public void setCost() {
		this.cost = cost;
	}
}