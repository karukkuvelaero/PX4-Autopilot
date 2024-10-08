/****************************************************************************
 *
 *   Copyright (c) 2024 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#pragma once

// DMAMUX1 Using at most 8 Channels on DMA1 --------   Assigned
//                                                     V

#define DMAMAP_SPI1_RX    DMAMAP_DMA12_SPI1RX_0     /* 1 DMA1:37 IIM-42652 */
#define DMAMAP_SPI1_TX    DMAMAP_DMA12_SPI1TX_0     /* 2 DMA1:38 IIM-42652 */

#define DMAMAP_SPI2_RX    DMAMAP_DMA12_SPI2RX_0     /* 3 DMA1:39 BMI088 */
#define DMAMAP_SPI2_TX    DMAMAP_DMA12_SPI2TX_0     /* 4 DMA1:40 BMI088 */

#define DMAMAP_USART6_RX  DMAMAP_DMA12_USART6RX_0   /* 5 DMA1:71 RC */

// Assigned in timer_config.cpp

// Timer 4                                          /* 7 DMA1:32 TIM4UP */
// Timer 5                                          /* 8 DMA1:50 TIM5UP */

// DMAMUX2 Using at most 8 Channels on DMA2 --------   Assigned
//                                                     V

#define DMAMAP_SPI4_RX    DMAMAP_DMA12_SPI4RX_1     /* 1 DMA2:61 BMP581 */
#define DMAMAP_SPI4_TX    DMAMAP_DMA12_SPI4TX_1     /* 2 DMA2:62 BMP581 */

#define DMAMAP_USART3_RX  DMAMAP_DMA12_USART3RX_1   /* 3 DMA2:45 DEBUG */
#define DMAMAP_USART3_TX  DMAMAP_DMA12_USART3TX_1   /* 4 DMA2:46 DEBUG */

#define DMAMAP_UART5_RX   DMAMAP_DMA12_UART5RX_1    /* 5 DMA2:65 TELEM2 */
#define DMAMAP_UART5_TX   DMAMAP_DMA12_UART5TX_1    /* 6 DMA2:66  TELEM2 */

#define DMAMAP_UART7_RX   DMAMAP_DMA12_UART7RX_1    /* 7 DMA1:79  TELEM1 */
#define DMAMAP_UART7_TX   DMAMAP_DMA12_UART7TX_1    /* 8 DMA1:80  TELEM1 */

// DMAMUX2 Using at most 8 Channels on BDMA --------   Assigned
//                                                     V

#define DMAMAP_SPI6_RX    DMAMAP_BDMA_SPI6_RX       /* 1 BDMA:11 SPI J11 */
#define DMAMAP_SPI6_TX    DMAMAP_BDMA_SPI6_TX       /* 2 BDMA:12 SPI J11 */
