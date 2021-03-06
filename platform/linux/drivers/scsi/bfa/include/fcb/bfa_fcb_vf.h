/*
 * Copyright (c) 2005-2009 Brocade Communications Systems, Inc.
 * All rights reserved
 * www.brocade.com
 *
 * Linux driver for Brocade Fibre Channel Host Bus Adapter.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License (GPL) Version 2 as
 * published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */

/**
 *  bfa_fcb_vf.h BFA FCS virtual fabric driver interfaces
 */

#ifndef __BFA_FCB_VF_H__
#define __BFA_FCB_VF_H__

/**
 *  fcs_vf_fcb Virtual fabric driver intrefaces
 */


struct bfad_vf_s;

/*
 * Callback functions from BFA FCS to driver
 */

/**
 * 	Completion callback for bfa_fcs_vf_stop().
 *
 * @param[in] vf_drv - driver instance of vf
 *
 * @return None
 */
void            bfa_fcb_vf_stop(struct bfad_vf_s *vf_drv);



#endif /* __BFA_FCB_VF_H__ */
