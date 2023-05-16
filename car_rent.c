#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for car rental record
struct CarRental
{
    int carID;
    char carName[50];
    char carType[20];
    float pricePerDay;
    int isAvailable;
    struct CarRental *next;
};

// Function to add a car rental record
void addCarRental(struct CarRental **head)
{
    struct CarRental *newCarRental = (struct CarRental *)malloc(sizeof(struct CarRental));

    printf("Enter Car ID: ");
    scanf("%d", &(newCarRental->carID));

    printf("Enter Car Name: ");
    scanf("%s", newCarRental->carName);

    printf("Enter Car Type: ");
    scanf("%s", newCarRental->carType);

    printf("Enter Price per Day: ");
    scanf("%f", &(newCarRental->pricePerDay));

    newCarRental->isAvailable = 1;

    newCarRental->next = *head;
    *head = newCarRental;

    printf("Car Rental Record Added Successfully!\n");
}

// Function to display all car rental records
void displayCarRentals(struct CarRental *head)
{
    if (head == NULL)
    {
        printf("No car rental records found.\n");
        return;
    }

    printf("\nCar Rental Records:\n");
    printf("-----------------------------------------------------------------\n");
    printf("Car ID\tCar Name\tCar Type\tPrice/Day\tAvailability\n");
    printf("-----------------------------------------------------------------\n");

    struct CarRental *temp = head;
    while (temp != NULL)
    {
        printf("%d\t%s\t%s\t%.2f\t\t%s\n",
               temp->carID,
               temp->carName,
               temp->carType,
               temp->pricePerDay,
               (temp->isAvailable) ? "Available" : "Not Available");

        temp = temp->next;
    }
    printf("-----------------------------------------------------------------\n");
}

// Function to update a car rental record
void updateCarRental(struct CarRental *head, int carID)
{
    struct CarRental *temp = head;

    while (temp != NULL)
    {
        if (temp->carID == carID)
        {
            printf("Enter Car Name: ");
            scanf("%s", temp->carName);

            printf("Enter Car Type: ");
            scanf("%s", temp->carType);

            printf("Enter Price per Day: ");
            scanf("%f", &(temp->pricePerDay));

            printf("Car Rental Record Updated Successfully!\n");
            return;
        }

        temp = temp->next;
    }

    printf("Car ID %d not found.\n", carID);
}

// Function to delete a car rental record
void deleteCarRental(struct CarRental **head, int carID)
{
    struct CarRental *temp = *head;
    struct CarRental *prev = NULL;

    if (temp != NULL && temp->carID == carID)
    {
        *head = temp->next;
        free(temp);
        printf("Car Rental Record Deleted Successfully!\n");
        return;
    }

    while (temp != NULL && temp->carID != carID)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Car ID %d not found.\n", carID);
        return;
    }

    prev->next = temp->next;
    free(temp);

    printf("Car Rental Record Deleted Successfully!\n");
}

// Function to save car rental records to a file
void saveToFile(struct CarRental *head, const char *filename)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    struct CarRental *temp = head;
    while (temp != NULL)
    {
        fprintf(file, "%d;%s;%s;%.2f;%d\n",
                temp->carID,
                temp->carName,
                temp->carType,
                temp->pricePerDay,
                temp->isAvailable);

        temp = temp->next;
    }

    fclose(file);
    printf("Car Rental Records saved to %s.\n", filename);
}

// Function to load car rental records from a file
struct CarRental *loadFromFile(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return NULL;
    }

    struct CarRental *head = NULL;

    char line[200];
    while (fgets(line, sizeof(line), file))
    {
        struct CarRental *newCarRental = (struct CarRental *)malloc(sizeof(struct CarRental));

        sscanf(line, "%d;%[^;];%[^;];%f;%d",
               &(newCarRental->carID),
               newCarRental->carName,
               newCarRental->carType,
               &(newCarRental->pricePerDay),
               &(newCarRental->isAvailable));

        newCarRental->next = head;
        head = newCarRental;
    }

    fclose(file);
    printf("Car Rental Records loaded from %s.\n", filename);

    return head;
}

// Function to free memory occupied by car rental records
void freeCarRentals(struct CarRental *head)
{
    struct CarRental *temp = head;

    while (temp != NULL)
    {
        struct CarRental *next = temp->next;
        free(temp);
        temp = next;
    }
}

int main()
{
    struct CarRental *head = NULL;
    int choice, carID;
    char filename[100];
    printf("Car Rental Management System\n");

    while (1)
    {
        printf("\n1. Add Car Rental Record\n");
        printf("2. Update Car Rental Record\n");
        printf("3. Delete Car Rental Record\n");
        printf("4. Display Car Rental Records\n");
        printf("5. Save Car Rental Records to File\n");
        printf("6. Load Car Rental Records from File\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addCarRental(&head);
            break;

        case 2:
            printf("Enter Car ID to update: ");
            scanf("%d", &carID);
            updateCarRental(head, carID);
            break;
        case 3:
            printf("Enter Car ID to delete: ");
            scanf("%d", &carID);
            deleteCarRental(&head, carID);
            break;
        case 4:
            displayCarRentals(head);
            break;
        case 5:
            printf("Enter filename to save: ");
            scanf("%s", filename);
            saveToFile(head, filename);
            break;
        case 6:
            printf("Enter filename to load: ");
            scanf("%s", filename);
            freeCarRentals(head);
            head = loadFromFile(filename);
            break;
        case 7:
            freeCarRentals(head);
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
