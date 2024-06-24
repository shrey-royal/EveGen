class Train {
    private String trainNumber;
    private int numberofCarriages;

    public Train(String trainNumber, int numberofCarriages) {
        this.trainNumber = trainNumber;
        this.numberofCarriages = numberofCarriages;
    }

    public void displayTrainInfo() {
        System.out.println("Train Number: " + trainNumber);
        System.out.println("Number of Carriages: " + numberofCarriages);
    }

    public void start() {
        System.out.println("Train " + trainNumber + " is starting...");
    }

    public void stop() {
        System.out.println("Train " + trainNumber + " has stopped...");
    }
}

class HighSpeedTrain extends Train {
    private int maxSpeed;

    public HighSpeedTrain(String trainNumber, int numberofCarriages, int maxSpeed) {
        super(trainNumber, numberofCarriages);
        this.maxSpeed = maxSpeed;
    }

    public void accelerate() {
        super.start();
        System.out.println("High-speed train is accelerating to its maximum speed of " + maxSpeed + " km/h.");
        super.stop();
    }
}

public class Single {
    public static void main(String[] args) {
        HighSpeedTrain gatimanExpress = new HighSpeedTrain("229598", 15, 160);

        gatimanExpress.displayTrainInfo();
        gatimanExpress.accelerate();
    }
}
