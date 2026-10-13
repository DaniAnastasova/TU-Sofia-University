package Exercises_3;

public class Company_ET extends Company{
    private String owner_name;
    private double initial_capital;
    private double current_capital;

    public Company_ET(){
        super();
        this.owner_name = "";
        this.current_capital = 0;
        this.initial_capital = 0;
    }

    public Company_ET(String company_name, String creation_data, String bulstat,String name, double initial_capital, double current_capital){
        super(company_name, creation_data, bulstat);
        this.owner_name = name;
        this.initial_capital = initial_capital;
        this.current_capital = current_capital;
    }

    public String getOwner_name(){
        return owner_name;
    }

    public void setOwner_name(String name){
        this.owner_name = name;
    }

    public Double getInitial_capital(){
        return initial_capital;
    }

    public void setInitial_capital(double initial_capital){
        this.initial_capital = initial_capital;
    }

    public double getCurrent_capital(){
        return current_capital;
    }

    public void setCurrent_capital(double current_capital){
        this.current_capital = current_capital;
    }

    public double profit(){
        return (this.current_capital - this.initial_capital);
    }
}
