public class Opiskelija {
    private String nimi;
    private String opiskelijanumero;
    private int opintopisteet;

    public Opiskelija(){

    }
    public Opiskelija(String aNimi, String aOpnro){
        this.setNimi(aNimi);
        this.setOpiskelijanumero(aOpnro);
        this.setOpintopiste(0);
    }

    public void setNimi(String aNimi){
        this.nimi = aNimi;
    }
    public String getNimi(){
        return this.nimi;
    }


    public void setOpiskelijanumero(String aOpnro){
        this.opiskelijanumero = aOpnro;
    }
    public String getOpiskelijanumero(){
        return this.opiskelijanumero;
    }

    public void setOpintopiste(int aOP){
        this.opintopisteet = aOP;
    }
    public int getOpintopiste(){
        return this.opintopisteet;
    }
}