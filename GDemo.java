class Exe{
	int a=10,b=20,c=30;
	void show(){
		if(a<b){
			if(a<c){
				System.out.println("A is smallest: " + a);
			}			
		} else {
			if(b<c){
				if(a<c){
					System.out.println("C is greater: " + c);
				}
			}
		}
	}
	public static void main(String[] args){
		Exe e = new Exe();
		e.show();
	}
}