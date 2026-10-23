// FUN_006678c0 @ 6678c0 size=456

float10 __thiscall FUN_006678c0(int *param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  undefined2 *puVar3;
  void **ppvVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int *piVar8;
  float10 fVar9;
  undefined2 uStack_38;
  undefined4 uStack_36;
  undefined **local_30;
  int *local_2c;
  undefined **local_28;
  undefined2 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  float local_16;
  float local_12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d3a88;
  local_24 = (undefined2 *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_28 = &PTR_LAB_007e6edc;
  local_16 = 9999999.0;
  local_12 = 9999999.0;
  local_30 = &PTR_FUN_007f0bf4;
  local_4 = 0;
  ppvVar4 = &pvStack_c;
  local_2c = param_1;
  pvStack_c = ExceptionList;
  for (piVar2 = *(int **)((int)param_2 + 0x26); ExceptionList = ppvVar4, piVar2 != (int *)0x0;
      piVar2 = (int *)piVar2[2]) {
    iVar6 = *piVar2;
    puVar7 = (undefined2 *)(iVar6 + 0xc);
    iVar5 = FUN_00428ee0((short)puVar7);
    if (iVar5 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)(iVar5 + -8);
    }
    if ((float)piVar8[0xbc] <= (float)piVar8[0xbd]) {
      fVar1 = (float)piVar8[0xbc];
    }
    else {
      fVar1 = (float)piVar8[0xbd];
    }
    if (fVar1 < local_12) {
      if ((float)piVar8[0xbc] <= (float)piVar8[0xbd]) {
        local_12 = (float)piVar8[0xbc];
      }
      else {
        local_12 = (float)piVar8[0xbd];
      }
    }
    fVar9 = (float10)(**(code **)(*piVar8 + 0x28))();
    if (fVar9 < (float10)local_16) {
      fVar9 = (float10)(**(code **)(*piVar8 + 0x28))();
      local_16 = (float)fVar9;
    }
    FUN_0049a190(*puVar7,(short)((uint)*(undefined4 *)(iVar6 + 0xe) >> 0x10));
    ppvVar4 = ExceptionList;
  }
  iVar6 = (*(code *)local_28[1])();
  if (iVar6 == 0) {
    param_2 = -999999.0;
  }
  else {
    param_2 = 0.0;
    for (puVar7 = local_24; puVar7 != (undefined2 *)0x0; puVar7 = *(undefined2 **)(puVar7 + 5)) {
      uStack_38 = *puVar7;
      uStack_36 = *(undefined4 *)(puVar7 + 1);
      iVar6 = FUN_00428ee0((short)&uStack_38);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + -8;
      }
      fVar9 = (float10)(**(code **)(*local_2c + 0x1c))(iVar6,SUB42(local_12,0),SUB42(local_16,0));
      param_2 = (float)(fVar9 + (float10)param_2);
    }
  }
  local_28 = &PTR_LAB_007e6edc;
  puVar7 = local_24;
  while (puVar7 != (undefined2 *)0x0) {
    puVar3 = *(undefined2 **)(puVar7 + 5);
    FUN_00796cd8((short)puVar7);
    puVar7 = puVar3;
  }
  ExceptionList = pvStack_c;
  return (float10)param_2;
}


