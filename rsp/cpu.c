//
// rsp/cpu.c: RSP processor container.
//
// CEN64: Cycle-Accurate Nintendo 64 Simulator.
// Copyright (C) 2014, Tyler J. Stachecki.
//
// This file is subject to the terms and conditions defined in
// 'LICENSE', which is part of this source code package.
//

#include "common.h"
#include "rsp/cpu.h"

// Sets the opaque pointer used for external accesses.
static void rsp_connect_bus(struct rsp *rsp, struct bus_controller *bus) {
  rsp->bus = bus;
}

// Initializes the RSP component.
int rsp_init(struct rsp *rsp, struct bus_controller *bus) {
  rsp_connect_bus(rsp, bus);

  rsp->regs[SP_STATUS_REG] = 0x1;

  return 0;
}
