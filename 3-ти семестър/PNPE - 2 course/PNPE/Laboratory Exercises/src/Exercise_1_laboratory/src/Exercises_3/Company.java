package Exercises_3;

public class Company {
    private String company_name;
    private String creation_data;
    private String bulstat;

    public Company() {
        this.company_name = "";
        this.creation_data = "";
        this.bulstat = "";
    }

    public Company(String company_name, String creation_data, String bulstat){
        this.company_name = company_name;
        this.creation_data = creation_data;
        this.bulstat = bulstat;
    }

    public String getCompany_name(){
        return company_name;
    }

    public void setCompany_name(String name){
        this.company_name = name;
    }

    public String getCreation_data(){
        return creation_data;
    }

    public void setCreation_data(String data){
        this.creation_data = data;
    }

    public String getBulstat(){
        return bulstat;
    }

    public void setBulstat(String bulstat){
        if (bulstat.length() == 10){
            this.bulstat = bulstat;
        }
        else{
            System.out.println("Невалиден булстат");
        }
    }

    public void printInformation(){
        System.out.println("Company name: " + getCompany_name());
        System.out.println("Creation data: " + getCreation_data());
        System.out.println("Bulstat: " + getBulstat());
    }
}

