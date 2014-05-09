#include <msp430.h>

/* USER CODE START (section: InterruptVectors_init_c_prologue) */
/* User defined includes, defines, global variables and functions */
/* USER CODE END (section: InterruptVectors_init_c_prologue) */

/*
 *  ======== InterruptVectors_graceInit ========
 */
void InterruptVectors_graceInit(void)
{
}


/*
 *  ======== eUSCI_A1 Interrupt Service Routine ========
 */
#pragma vector=USCI_A1_VECTOR
__interrupt void USCI_A1_ISR_HOOK(void)
{
    /* USER CODE START (section: USCI_A1_ISR_HOOK) */
    /* replace this comment with your code */
    /* USER CODE END (section: USCI_A1_ISR_HOOK) */
}
