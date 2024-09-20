/* generated vector header file - do not edit */
#ifndef VECTOR_DATA_H
#define VECTOR_DATA_H
#ifdef __cplusplus
        extern "C" {
        #endif
/* Number of interrupts allocated */
#ifndef VECTOR_DATA_IRQ_COUNT
#define VECTOR_DATA_IRQ_COUNT    (25)
#endif
/* ISR prototypes */
void sci_uart_rxi_isr(void);
void sci_uart_txi_isr(void);
void sci_uart_tei_isr(void);
void agt_int_isr(void);
void sci_uart_eri_isr(void);
void spi_rxi_isr(void);
void spi_txi_isr(void);
void spi_tei_isr(void);
void spi_eri_isr(void);
void gpt_counter_overflow_isr(void);
void r_icu_isr(void);
void fcu_frdyi_isr(void);

/* Vector table allocations */
#define VECTOR_NUMBER_SCI1_RXI ((IRQn_Type) 0) /* SCI1 RXI (Received data full) */
#define SCI1_RXI_IRQn          ((IRQn_Type) 0) /* SCI1 RXI (Received data full) */
#define VECTOR_NUMBER_SCI1_TXI ((IRQn_Type) 1) /* SCI1 TXI (Transmit data empty) */
#define SCI1_TXI_IRQn          ((IRQn_Type) 1) /* SCI1 TXI (Transmit data empty) */
#define VECTOR_NUMBER_SCI1_TEI ((IRQn_Type) 2) /* SCI1 TEI (Transmit end) */
#define SCI1_TEI_IRQn          ((IRQn_Type) 2) /* SCI1 TEI (Transmit end) */
#define VECTOR_NUMBER_AGT0_INT ((IRQn_Type) 3) /* AGT0 INT (AGT interrupt) */
#define AGT0_INT_IRQn          ((IRQn_Type) 3) /* AGT0 INT (AGT interrupt) */
#define VECTOR_NUMBER_SCI2_RXI ((IRQn_Type) 4) /* SCI2 RXI (Receive data full) */
#define SCI2_RXI_IRQn          ((IRQn_Type) 4) /* SCI2 RXI (Receive data full) */
#define VECTOR_NUMBER_SCI2_TXI ((IRQn_Type) 5) /* SCI2 TXI (Transmit data empty) */
#define SCI2_TXI_IRQn          ((IRQn_Type) 5) /* SCI2 TXI (Transmit data empty) */
#define VECTOR_NUMBER_SCI2_TEI ((IRQn_Type) 6) /* SCI2 TEI (Transmit end) */
#define SCI2_TEI_IRQn          ((IRQn_Type) 6) /* SCI2 TEI (Transmit end) */
#define VECTOR_NUMBER_SCI2_ERI ((IRQn_Type) 7) /* SCI2 ERI (Receive error) */
#define SCI2_ERI_IRQn          ((IRQn_Type) 7) /* SCI2 ERI (Receive error) */
#define VECTOR_NUMBER_SCI3_RXI ((IRQn_Type) 8) /* SCI3 RXI (Receive data full) */
#define SCI3_RXI_IRQn          ((IRQn_Type) 8) /* SCI3 RXI (Receive data full) */
#define VECTOR_NUMBER_SCI3_TXI ((IRQn_Type) 9) /* SCI3 TXI (Transmit data empty) */
#define SCI3_TXI_IRQn          ((IRQn_Type) 9) /* SCI3 TXI (Transmit data empty) */
#define VECTOR_NUMBER_SCI3_TEI ((IRQn_Type) 10) /* SCI3 TEI (Transmit end) */
#define SCI3_TEI_IRQn          ((IRQn_Type) 10) /* SCI3 TEI (Transmit end) */
#define VECTOR_NUMBER_SCI1_ERI ((IRQn_Type) 11) /* SCI1 ERI (Receive error) */
#define SCI1_ERI_IRQn          ((IRQn_Type) 11) /* SCI1 ERI (Receive error) */
#define VECTOR_NUMBER_SPI1_RXI ((IRQn_Type) 12) /* SPI1 RXI (Receive buffer full) */
#define SPI1_RXI_IRQn          ((IRQn_Type) 12) /* SPI1 RXI (Receive buffer full) */
#define VECTOR_NUMBER_SPI1_TXI ((IRQn_Type) 13) /* SPI1 TXI (Transmit buffer empty) */
#define SPI1_TXI_IRQn          ((IRQn_Type) 13) /* SPI1 TXI (Transmit buffer empty) */
#define VECTOR_NUMBER_SPI1_TEI ((IRQn_Type) 14) /* SPI1 TEI (Transmission complete event) */
#define SPI1_TEI_IRQn          ((IRQn_Type) 14) /* SPI1 TEI (Transmission complete event) */
#define VECTOR_NUMBER_SPI1_ERI ((IRQn_Type) 15) /* SPI1 ERI (Error) */
#define SPI1_ERI_IRQn          ((IRQn_Type) 15) /* SPI1 ERI (Error) */
#define VECTOR_NUMBER_GPT3_COUNTER_OVERFLOW ((IRQn_Type) 16) /* GPT3 COUNTER OVERFLOW (Overflow) */
#define GPT3_COUNTER_OVERFLOW_IRQn          ((IRQn_Type) 16) /* GPT3 COUNTER OVERFLOW (Overflow) */
#define VECTOR_NUMBER_SCI0_TXI ((IRQn_Type) 17) /* SCI0 TXI (Transmit data empty) */
#define SCI0_TXI_IRQn          ((IRQn_Type) 17) /* SCI0 TXI (Transmit data empty) */
#define VECTOR_NUMBER_SCI0_TEI ((IRQn_Type) 18) /* SCI0 TEI (Transmit end) */
#define SCI0_TEI_IRQn          ((IRQn_Type) 18) /* SCI0 TEI (Transmit end) */
#define VECTOR_NUMBER_SCI3_ERI ((IRQn_Type) 19) /* SCI3 ERI (Receive error) */
#define SCI3_ERI_IRQn          ((IRQn_Type) 19) /* SCI3 ERI (Receive error) */
#define VECTOR_NUMBER_SCI0_RXI ((IRQn_Type) 20) /* SCI0 RXI (Receive data full) */
#define SCI0_RXI_IRQn          ((IRQn_Type) 20) /* SCI0 RXI (Receive data full) */
#define VECTOR_NUMBER_ICU_IRQ1 ((IRQn_Type) 21) /* ICU IRQ1 (External pin interrupt 1) */
#define ICU_IRQ1_IRQn          ((IRQn_Type) 21) /* ICU IRQ1 (External pin interrupt 1) */
#define VECTOR_NUMBER_FCU_FRDYI ((IRQn_Type) 22) /* FCU FRDYI (Flash ready interrupt) */
#define FCU_FRDYI_IRQn          ((IRQn_Type) 22) /* FCU FRDYI (Flash ready interrupt) */
#define VECTOR_NUMBER_SCI0_ERI ((IRQn_Type) 23) /* SCI0 ERI (Receive error) */
#define SCI0_ERI_IRQn          ((IRQn_Type) 23) /* SCI0 ERI (Receive error) */
#define VECTOR_NUMBER_AGT1_INT ((IRQn_Type) 24) /* AGT1 INT (AGT interrupt) */
#define AGT1_INT_IRQn          ((IRQn_Type) 24) /* AGT1 INT (AGT interrupt) */
#ifdef __cplusplus
        }
        #endif
#endif /* VECTOR_DATA_H */
