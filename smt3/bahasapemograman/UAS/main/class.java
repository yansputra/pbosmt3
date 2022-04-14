import java.util.ArrayList;
import java.util.Scanner;


class Plant{
    int statusTumbuh;//0-4
    int jumlahAir;
    int jumlahPupuk;
    public Plant()
    {
    statusTumbuh = 0;
    jumlahAir = 0;
    jumlahPupuk = 0;
    }
    public void beriAir()
    {
    jumlahAir++;
    cekKondisiTumbuh();
    }
    public void beriPupuk()
    {
    jumlahPupuk++;
    cekKondisiTumbuh();
    }
    public void cekKondisiTumbuh()
    {
     //cek kecukupan air dan pupuk
     if(jumlahAir >=3 && jumlahPupuk >=1)
     {
     tumbuh();
     }
    }
    public void tumbuh()
    {
    if(statusTumbuh <4)
    {
    jumlahAir = jumlahAir - 3;
     jumlahPupuk = jumlahPupuk - 1;
    statusTumbuh++;
    }
    }
    public void displayPlant()
    {
    System.out.println(getStatusTumbuhText());
    System.out.println("Jumlah Air:" + jumlahAir);
    System.out.println("Jumlah Pupuk:" + jumlahPupuk);
    }
    public String getStatusTumbuhText()
    {
     switch(statusTumbuh) {
     case 0:
    return "Benih";
     case 1:
    return "Tunas";
     case 2:
    return "Tanaman Kecil";
     case 3:
    return "Tanaman Dewasa";
    }
    return "Berbunga";
    }
    public int getStatusTumbuh()
    {
    return statusTumbuh;
    }
    public String getImagePath()
    {
    String tImagePath = "img/seed.png";
    switch(statusTumbuh) {
    case 0:
     tImagePath = "img/seed.png";
    break;
     case 1:
    tImagePath = "img/sprout.png";
     break;
     case 2:
    tImagePath = "img/small.png";
     break;
     case 3:
    tImagePath = "img/big.png";
     break;
     case 4:
    tImagePath = "img/blossom.png";
     break;
    }
    return tImagePath;
    }
}

class Garden{
    private int SIZE = 10;
    private int nTanaman = 0;
    private String mGardenName;
    private ArrayList<Plant> pArrList;
    private int hasilPanen;
    public Garden(String pName)
    {
    pArrList = new ArrayList<Plant>(10);
    mGardenName = pName;
    }
     public Garden()
     {
     this("UGarden");
     }
    public boolean addPlant(Plant p)
    {
    if(nTanaman < SIZE)
    {
    pArrList.add(p);
    nTanaman++;
    return true;
    }else
    return false;
    }
    public int harvestPlant()
    {
    int tmpN=0;
    int i=0;
    while ((pArrList != null) && (i < pArrList.size()))
    {
    if(pArrList.get(i).getStatusTumbuh() == 4)
    {
    pArrList.remove(i);
    nTanaman--;
    tmpN++;
    i=0;
    }else
    i++;
     }
    hasilPanen = hasilPanen + (tmpN*100);
    return tmpN;
    }
    public void beriAir()
    {
     for (int i = 0; i < pArrList.size(); i++) {
     pArrList.get(i).beriAir();
    }
    }
     public void beriPupuk()
     {
     for (int i = 0; i < pArrList.size(); i++) {
     pArrList.get(i).beriPupuk();
     }
     }
    public void displayPlant()
    {
    System.out.println("----------" + mGardenName + "----------");
    System.out.println("There are " + nTanaman + "plant(s) in the garden");
    System.out.println("Your harvest point:" +
    hasilPanen);
    for (int i = 0; i < pArrList.size(); i++) {
     pArrList.get(i).displayPlant();
     }
    }
    public int getHasilPanen()
    {
    return hasilPanen;
    }
}

public class Main {
    public static void main(String[] args) {
    //Plant p = new Plant();
    //Anggrek p = new Anggrek();
    Garden mG = new Garden("Kebun Bunga");
    Scanner sc = new Scanner(System.in);
    int inp = 0;
    do {
     System.out.println("Masukkan:");
    System.out.println("0 untuk menanam");
    System.out.println("1 untuk memberi air");
     System.out.println("2 untuk memberi pupuk");
     System.out.println("3 untuk memanen");
    System.out.println("999 untuk keluar");
    inp = sc.nextInt();
    switch(inp){
    case 0: Plant p = new Plant();
    if(mG.addPlant(p))
    {
    printMessage("Tanaman berhasil ditambahkan");
    }else
    {
    printMessage("Kebun sudah penuh");
    }
    break;
    case 1: mG.beriAir();
    break;
    case 2: mG.beriPupuk();
    break;
    case 3: int n = mG.harvestPlant();
    if(n>0)
    printMessage(n +"plant(s) successfully harvested!");
    else
    printMessage("Oops... There is no plant ready to be harvested.");
    break;
    }
    mG.displayPlant(); 
    } while (inp!=999);
    }
    public static void printMessage(String str)
    {
    System.out.println("***************************");
    System.out.println("**"+str);
    System.out.println("***************************");
    }
    }