/* This file is part of the Neper software package. */
/* Copyright (C) 2003-2017, Romain Quey. */
/* See the COPYING file in the top-level directory. */

#include "net_tess_opt_comp_objective_fval_tesr_.h"

void
net_tess_opt_comp_objective_fval_tesr (struct TOPT *pTOpt)
{
  int cellcompedqty = 0, *cellcomped = NULL;

  net_tess_opt_comp_objective_fval_tesr_pre (*pTOpt, &cellcomped, &cellcompedqty);

  net_tess_opt_comp_objective_fval_tesr_dist (cellcomped, cellcompedqty, pTOpt);

  net_tess_opt_comp_objective_fval_tesr_cellval (cellcomped, cellcompedqty, pTOpt);

  net_tess_opt_comp_objective_fval_tesr_obj (pTOpt);

  net_tess_opt_comp_objective_fval_tesr_post (pTOpt);

  ut_free_1d_int (cellcomped);

  return;
}