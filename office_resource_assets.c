#include <stdio.h>
#include <string.h>

// Structure to store asset details
struct Asset
{
    char name[50];
    int quantity;
};

// Add Asset Function
void addAsset()
{
    struct Asset a;
    FILE *fp = fopen("assets.txt", "a");

    if (fp == NULL)
    {
        printf("Error: Could not open file!\n");
        return;
    }

    printf("\nEnter Asset Name: ");
    scanf("%s", a.name);

    printf("Enter Quantity: ");
    scanf("%d", &a.quantity);

    fprintf(fp, "%s %d\n", a.name, a.quantity);
    fclose(fp);

    printf("Asset added successfully.\n");
}

// View All Assets
void viewAssets()
{
    struct Asset a;
    FILE *fp = fopen("assets.txt", "r");

    if (fp == NULL)
    {
        printf("No asset records found.\n");
        return;
    }

    printf("\n------- Office Assets List -------\n");
    printf("%-20s %-10s\n", "Asset Name", "Quantity");
    printf("----------------------------------\n");

    while (fscanf(fp, "%s %d", a.name, &a.quantity) != EOF)
    {
        printf("%-20s %-10d\n", a.name, a.quantity);
    }

    fclose(fp);
}

// Search Asset
void searchAsset()
{
    char searchName[50];
    struct Asset a;
    int found = 0;

    FILE *fp = fopen("assets.txt", "r");
    if (fp == NULL)
    {
        printf("No asset records found.\n");
        return;
    }

    printf("\nEnter Asset Name to Search: ");
    scanf("%s", searchName);

    while (fscanf(fp, "%s %d", a.name, &a.quantity) != EOF)
    {
        if (strcmp(a.name, searchName) == 0)
        {
            printf("\nAsset found.\n");
            printf("Name: %s\nQuantity: %d\n", a.name, a.quantity);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Asset not found.\n");
    }

    fclose(fp);
}

// Delete Asset
void deleteAsset()
{
    char deleteName[50];
    struct Asset a;
    int found = 0;

    FILE *fp = fopen("assets.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Asset Name to Delete: ");
    scanf("%s", deleteName);

    while (fscanf(fp, "%s %d", a.name, &a.quantity) != EOF)
    {
        if (strcmp(a.name, deleteName) == 0)
        {
            found = 1; // Skip writing this one (delete it)
        }
        else
        {
            fprintf(temp, "%s %d\n", a.name, a.quantity);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("assets.txt");
    rename("temp.txt", "assets.txt");

    if (found)
    {
        printf("Asset deleted successfully.\n");
    }
    else
    {
        printf("Asset not found.\n");
    }
}

// Main Menu
int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Office Resource Asset Management =====\n");
        printf("1. Add Asset\n");
        printf("2. View All Assets\n");
        printf("3. Search Asset\n");
        printf("4. Delete Asset\n");
        printf("5. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addAsset();
            break;
        case 2:
            viewAssets();
            break;
        case 3:
            searchAsset();
            break;
        case 4:
            deleteAsset();
            break;
        case 5:
            printf("Exiting program...\n");
            return 0;
        default:
            printf("Invalid option! Please try again.\n");
        }
    }
}
