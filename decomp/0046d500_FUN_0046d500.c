// FUN_0046d500 @ 46d500 size=652

void __fastcall FUN_0046d500(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  iVar6 = *(int *)(param_1 + 0x120);
  local_18 = *(undefined4 *)(iVar6 + 0xac0);
  local_10 = *(undefined4 *)(iVar6 + 0xac4);
  local_8 = *(undefined4 *)(iVar6 + 0xac8);
  local_24 = 0;
  local_20 = 0;
  do {
    if (local_20 == 0) {
      iVar6 = *(int *)(param_1 + 0x120);
      local_24 = 0;
      local_18 = *(undefined4 *)(iVar6 + 0xac0);
      local_10 = *(undefined4 *)(iVar6 + 0xac4);
      local_8 = *(undefined4 *)(iVar6 + 0xac8);
    }
    else if (local_20 == 1) {
      iVar6 = *(int *)(param_1 + 0x120);
      local_18 = *(undefined4 *)(iVar6 + 0xad0);
      local_10 = *(undefined4 *)(iVar6 + 0xad4);
      local_8 = *(undefined4 *)(iVar6 + 0xadc);
      local_24 = local_20;
    }
    else if (local_20 == 2) {
      iVar6 = *(int *)(param_1 + 0x120);
      local_18 = *(undefined4 *)(iVar6 + 0xae0);
      local_10 = *(undefined4 *)(iVar6 + 0xae4);
      local_8 = *(undefined4 *)(iVar6 + 0xae8);
      local_24 = local_20;
    }
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    piVar3 = *(int **)(param_1 + 0x117f8);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      iVar6 = *piVar3;
      cVar4 = FUN_00509ed0();
      piVar3 = piVar1;
      if ((cVar4 != '\0') && (*(int *)(iVar6 + 0x26) == local_24)) {
        iVar6 = *(int *)(iVar6 + 0x22);
        if (iVar6 == 0) {
          local_1c = local_1c + 1;
        }
        if (iVar6 == 1) {
          local_14 = local_14 + 1;
        }
        if (iVar6 == 2) {
          local_c = local_c + 1;
        }
      }
    }
    iVar6 = 0;
    piVar3 = *(int **)(param_1 + 0x4508);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      piVar2 = (int *)*piVar3;
      cVar4 = (**(code **)(*piVar2 + 0x28))();
      if ((((cVar4 != '\0') && (local_20 == 0)) ||
          ((cVar4 = (**(code **)(*piVar2 + 0x2c))(), cVar4 != '\0' && (local_20 == 1)))) ||
         ((cVar4 = (**(code **)(*piVar2 + 0x30))(), cVar4 != '\0' && (local_20 == 2)))) {
        iVar5 = (**(code **)(*piVar2 + 0xa8))();
        iVar6 = iVar6 + iVar5;
      }
      piVar3 = piVar1;
      if (*(int *)((int)piVar2 + 0x14a) != 0) {
        FUN_0051c480();
        cVar4 = FUN_00509ed0();
        if ((cVar4 != '\0') && (iVar5 = FUN_0051c480(), *(int *)(iVar5 + 0x26) == local_24)) {
          iVar5 = FUN_0051c480();
          if (*(int *)(iVar5 + 0x22) == 0) {
            local_1c = local_1c + 1;
          }
          iVar5 = FUN_0051c480();
          if (*(int *)(iVar5 + 0x22) == 1) {
            local_14 = local_14 + 1;
          }
          iVar5 = FUN_0051c480();
          if (*(int *)(iVar5 + 0x22) == 2) {
            local_c = local_c + 1;
          }
          FUN_0051c480();
        }
      }
    }
    iVar5 = __ftol();
    if (local_1c < iVar5) {
      FUN_0046d320(0,iVar6,local_18,local_1c,local_24);
    }
    iVar5 = __ftol();
    if (local_14 < iVar5) {
      FUN_0046d320(1,iVar6,local_10,local_14,local_24);
    }
    iVar5 = __ftol();
    if (local_c < iVar5) {
      FUN_0046d320(2,iVar6,local_8,local_c,local_24);
    }
    local_20 = local_20 + 1;
  } while (local_20 < 3);
  return;
}


