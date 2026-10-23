// FUN_004c968b @ 4c968b size=1817

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c968b(int param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_38;
  int local_30;
  int *local_28;
  int local_24;
  int *local_1c;
  int local_18;
  int local_14;
  
  iVar5 = (**(code **)(*(int *)(param_1 + 0x28) + 4))();
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x52) = 0;
    return;
  }
  bVar2 = false;
  cVar3 = '\0';
  cVar4 = '\0';
  iVar5 = FUN_004c9f81();
  if (iVar5 == 0) goto LAB_004c978d;
  uVar6 = FUN_004c9f81();
  FUN_004e9370(0x97e,uVar6);
  cVar3 = FUN_004ed1c0(uVar6);
  if (cVar3 == '\0') {
LAB_004c9734:
    bVar2 = false;
  }
  else {
    uVar6 = FUN_004c9f81();
    FUN_004e9370(0x995,uVar6);
    cVar3 = FUN_004ed1c0(uVar6);
    if (cVar3 == '\0') goto LAB_004c9734;
    bVar2 = true;
  }
  uVar6 = FUN_004c9f81();
  FUN_004e9370(0x18d,uVar6);
  cVar3 = FUN_004ed1c0(uVar6);
  uVar6 = FUN_004c9f81();
  FUN_004e9370(0x122,uVar6);
  cVar4 = FUN_004ed1c0(uVar6);
LAB_004c978d:
  if (DAT_00dc1913 == '\0') {
    *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(**(int **)(param_1 + 0x2c) + 0x12);
    local_24 = 0;
    local_28 = *(int **)(param_1 + 0x2c);
    while (local_28 != (int *)0x0) {
      piVar1 = (int *)local_28[2];
      iVar5 = *local_28;
      local_30 = 1;
      if (*(int *)(iVar5 + 0x46a) != 0) {
        FUN_004ed020();
        FUN_004ed0e0();
        __ftol();
        if (*(int *)(iVar5 + 0x3d8) != 0) {
          local_38 = *(int *)(*(int *)(iVar5 + 0x3d8) + 0x3b6c);
          while (local_38 != 0) {
            local_38 = *(int *)(local_38 + 8);
            FUN_004d5be0();
            FUN_004d5bf0();
          }
        }
        local_30 = __ftol();
        iVar7 = FUN_004e9370(*(undefined4 *)(iVar5 + 0x3dc));
        if (iVar7 != 0) {
          iVar7 = FUN_004e9370(*(undefined4 *)(iVar5 + 0x3dc));
          switch(*(undefined4 *)(iVar7 + 0x28c)) {
          case 0x62:
            local_30 = 0;
            break;
          case 99:
            if ((cVar3 != '\0') || (bVar2)) {
              local_30 = __ftol();
            }
            else {
              local_30 = __ftol();
            }
            break;
          case 100:
            if (cVar4 == '\0') {
              local_30 = __ftol();
            }
            else {
              local_30 = __ftol();
            }
            break;
          case 0x65:
          case 0x66:
          case 0x67:
            if (bVar2) {
              local_30 = __ftol();
            }
            else {
              local_30 = __ftol();
            }
          }
        }
      }
      local_28 = piVar1;
      if (local_24 < local_30) {
        *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(iVar5 + 0x12);
        local_24 = local_30;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(**(int **)(param_1 + 0x2c) + 0x12);
    local_14 = 0;
    local_1c = *(int **)(param_1 + 0x2c);
    while (local_1c != (int *)0x0) {
      piVar1 = (int *)local_1c[2];
      iVar5 = *local_1c;
      local_18 = 0;
      if (*(int *)(iVar5 + 0x46a) != 0) {
        FUN_004ed020();
        local_18 = __ftol();
        iVar7 = FUN_004e9370(*(undefined4 *)(iVar5 + 0x3dc));
        if (iVar7 != 0) {
          iVar7 = FUN_004e9370(*(undefined4 *)(iVar5 + 0x3dc));
          switch(*(undefined4 *)(iVar7 + 0x28c)) {
          case 0x62:
            local_18 = 0;
            break;
          case 99:
            if ((cVar3 != '\0') || (bVar2)) {
              local_18 = __ftol();
            }
            else {
              local_18 = __ftol();
            }
            break;
          case 100:
            if (cVar4 == '\0') {
              local_18 = __ftol();
            }
            else {
              local_18 = __ftol();
            }
            break;
          case 0x65:
          case 0x66:
          case 0x67:
            if (bVar2) {
              local_18 = __ftol();
            }
            else {
              local_18 = __ftol();
            }
          }
        }
      }
      local_1c = piVar1;
      if (local_14 < local_18) {
        *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(iVar5 + 0x12);
        local_14 = local_18;
      }
    }
  }
  return;
}


