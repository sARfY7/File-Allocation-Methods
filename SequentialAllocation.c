#include <stdio.h>

int main()
{
    int disk[100], startBlock, fileLength, fileCounter = 1;
    int i, flag = 0, choice = 1;
    for (i = 0; i < 100; i++)
        {
            disk[i] = 0;
        }
    do
    {
        printf("Enter Starting Block: ");
        scanf("%d", &startBlock);
        printf("Enter File Length: ");
        scanf("%d", &fileLength);
        for (i = startBlock; i < (startBlock + fileLength); i++)
        {
            if (disk[i] == 0)
            {
                if ( i == startBlock)
                {
                    if (disk[startBlock + fileLength] == 0)
                    {
                        flag = 1;
                    } else
                    {
                        flag = 0;
                        printf("Contiguos Memory Not Available\n");
                        break;
                    }
                }
                if (flag == 1)
                {
                    disk[i] = fileCounter;
                }
            }
        }
        if (flag == 1)
        {
            fileCounter++;
        }
        for (i = 0; i < 100; i++)
        {
            printf("disk[%d] -> %d\n", i, disk[i]);
        }
        printf("Continue (Any +ve no = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while (choice != 0);
}