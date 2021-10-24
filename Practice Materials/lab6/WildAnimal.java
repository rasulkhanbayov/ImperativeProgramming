public enum WildAnimal {
    MONKEY("bananas", 5), 
    ELEPHANT("raspberries", 30), 
    GIRAFFE("apples", 10), 
    RACCOON("walnuts", 20);

    private final String food;
    private final int amount;

    WildAnimal(String food, int amount) {
        this.food = food;
        this.amount = amount;
    }

    public static String listAllAnimals() {
        StringBuilder sb = new StringBuilder();
        for (WildAnimal animal : WildAnimal.values()) {
            sb.append(animal.ordinal()).append(": ");
            sb.append(animal.name());
         sb.append(" desires eating ").append(animal.amount * 7).append(" ");
            sb.append(animal.food).append(" a week.");
            sb.append(System.lineSeparator());
        }
        return sb.toString();
    }

    public String toString() {
        return "A(n) " + this.name() + " eats " + this.amount + " " + this.food + " a day.";
    }
}
