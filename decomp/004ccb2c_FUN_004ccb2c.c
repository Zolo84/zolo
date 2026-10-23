// FUN_004ccb2c @ 4ccb2c size=564

int __thiscall FUN_004ccb2c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_10 = *(int *)(param_2 + 6);
  local_8 = 0;
  local_c = *(int **)(param_1 + 4);
LAB_004ccb54:
  do {
    do {
      if (local_c == (int *)0x0) {
        return local_10;
      }
      piVar4 = (int *)local_c[2];
      iVar3 = *local_c;
      local_c = piVar4;
    } while (((iVar3 == 0) || (iVar2 = (**(code **)(*(int *)(iVar3 + 0x28) + 4))(), iVar2 < 1)) ||
            (iVar2 = FUN_004c9f81(), iVar2 == 0));
    FUN_004c9f81();
    cVar1 = FUN_004a0d10();
  } while (cVar1 != '\0');
  if (param_2 != 0) goto code_r0x004ccbd8;
  goto LAB_004ccc00;
code_r0x004ccbd8:
  iVar2 = FUN_004c9f81();
  cVar1 = FUN_0044b280(*(undefined4 *)(iVar2 + 6));
  if (cVar1 == '\0') {
LAB_004ccc00:
    local_14 = (**(code **)(*(int *)(iVar3 + 0x28) + 4))();
    FUN_004c9f81();
    iVar2 = FUN_0044e1d0();
    if (iVar3 == iVar2) {
      iVar3 = FUN_004c9f81();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x120) + 0x9c2);
    }
    else {
      iVar3 = FUN_004c9f81();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x120) + 0x9c6);
    }
    local_14 = local_14 + iVar3;
    cVar1 = FUN_004ca33c();
    if (cVar1 != '\0') {
      local_14 = local_14 + 7;
    }
    FUN_004c9f81();
    cVar1 = FUN_004a0a80();
    if (cVar1 != '\0') {
      local_14 = local_14 + 5;
    }
    piVar4 = (int *)FUN_004c9f81();
    cVar1 = (**(code **)(*piVar4 + 0x1c))();
    if (cVar1 != '\0') {
      iVar3 = FUN_004c9f81();
      if (*(int *)(iVar3 + 0x3350) != 0) {
        FUN_004c9f81();
        iVar3 = FUN_004c9f81();
        iVar3 = *(int *)(iVar3 + 6);
        iVar2 = FUN_00584c90();
        if (iVar2 == iVar3) {
          local_14 = local_14 + 5;
        }
      }
      if ((local_8 <= local_14) &&
         ((local_14 != local_8 || (iVar3 = FUN_004c9f81(), local_10 < *(int *)(iVar3 + 6))))) {
        local_8 = local_14;
        iVar3 = FUN_004c9f81();
        local_10 = *(int *)(iVar3 + 6);
      }
    }
  }
  goto LAB_004ccb54;
}


