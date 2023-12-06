
public class Aims {
	public static void main(String[] args) {
		// Create new cart
		Cart anOrder = new Cart();
		
		// Create new dvd object and add them to the cart
		DigitalVideoDisc dvd1 = new DigitalVideoDisc("The Lion King", 
						"Animated", "Roger Allers", 87, 19.95f);
		anOrder.addDigitalVideoDisc(dvd1);
		
		DigitalVideoDisc dvd2 = new DigitalVideoDisc("Star Wars", 
						"Science Fiction", "Geogre Lucas", 87, 24.95f);
		anOrder.addDigitalVideoDisc(dvd2);
		
		DigitalVideoDisc dvd3 = new DigitalVideoDisc("Aladin",
						"Animated", 18.99f);
		anOrder.addDigitalVideoDisc(dvd3);

		
		// print total cost of the item in the cart
		System.out.print("Total cost is: ");
		System.out.println(anOrder.totalCost() + "$\tNguyen Cong Doan");
		
		System.out.println();
		System.out.println("Information of all DVDs in the cart");
		anOrder.showAllDvdInCart();
		System.out.println();
		System.out.println();
		System.out.println();
		
		//Remove dvd3 from cart
		anOrder.removeDigitalVideoDisc(dvd3);
		
		System.out.print("Total cost is: ");
		System.out.println(anOrder.totalCost() + "$\tNguyen Cong Doan");
		
		System.out.println();
		System.out.println("Information of all DVDs in the cart");
		anOrder.showAllDvdInCart();
		
	}
}