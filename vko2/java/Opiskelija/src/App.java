
public class App {
    public static void main(String[] args) throws Exception {
        Opiskelija janne = new Opiskelija();
        janne.setNimi("Janne");
        System.out.println(janne.getNimi());
        janne.setNimi("aaro");
        System.out.print(janne.getNimi());
    }
}