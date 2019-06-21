/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief zsn60x A�࿨���Գ���
 *
 * - �������裺
 *   1. ��ȷ���Ӳ����úô��ڣ�
 *   2. ��A�࿨���������߸�Ӧ����
 *
 * - ʵ������
 *   1. MCU�����ӡ��A�࿨�������Ϣ
 *
 * \par Դ����
 * \snippet demo_am116_zsn60x_picca_test.c src_am116_zsn60x_picca_test
 *
 * \internal
 * \par Modification history
 * - 1.00 19-06-18  htf, first implementation.
 * \endinternal
 */

/**
 * \addtogroup demo_am116_if_zsn60x_picca_test
 * \copydoc demo_am116_zsn60x_picca_test.c
 */

/** [src_am116_zsn60x_picca_test] */

#include "zsn60x.h"
#include "demo_components_entries.h"
#include "demo_am116_core_entries.h"
#include "am_hwconf_zsn60x_uart.h"

void demo_am116_zsn60x_picca_test_entry()
{
    zsn60x_handle_t  handle = am_zsn60x_uart_inst_init();
    demo_zsn60x_picca_active_test_entry(handle);
}
/** [src_am116_zsn60x_picca_test] */

/* end of file */