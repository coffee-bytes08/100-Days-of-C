#include <stdio.h>

int main() {
    float cp, sp;
    float profit, loss, percentage;

    scanf("%f %f", &cp, &sp);

    if (cp <= 0) {
        printf("Invalid Cost Price");
    }
    else if (sp > cp) {
        profit = sp - cp;
        percentage = (profit / cp) * 100;

        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%", percentage);
    }
    else if (cp > sp) {
        loss = cp - sp;
        percentage = (loss / cp) * 100;

        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%", percentage);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}