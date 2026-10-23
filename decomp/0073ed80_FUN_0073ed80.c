// FUN_0073ed80 @ 73ed80 size=630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0073ed80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x12);
  if (iVar1 == 0) {
    return 0;
  }
  if (0x1c4 < iVar1) {
    return 0;
  }
  if (-1 < *(int *)(param_1 + 0x16)) {
    param_2 = (&DAT_0089cad8)[*(int *)(param_1 + 0x16)];
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar5 = false;
  iVar1 = iVar1 * 0x12;
  if (*(int *)(param_1 + 0x1e) < 100) {
    if (0 < *(int *)(param_1 + 0x1e)) {
      iVar4 = (**(code **)(*(int *)((int)&DAT_008ea368 + iVar1) + 4))();
      local_8 = (int)ROUND((float)*(int *)(param_1 + 0x1e) * _DAT_007e543c * (float)iVar4);
      bVar5 = false;
      goto LAB_0073ee0e;
    }
  }
  else {
    local_8 = (**(code **)(*(int *)((int)&DAT_008ea368 + iVar1) + 4))();
    bVar5 = true;
LAB_0073ee0e:
    if (local_8 != 0) goto LAB_0073ee1f;
  }
  local_8 = 1;
LAB_0073ee1f:
  iVar4 = *(int *)(param_1 + 0x16);
  if (*(int *)(param_1 + 0x1a) == 1) {
    if (iVar4 == -3) {
      for (iVar1 = *(int *)((int)&DAT_008ea36c + iVar1); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        cVar3 = FUN_0044b300(*(undefined4 *)(param_2 + 6));
        if ((cVar3 == '\0') && (cVar3 = FUN_0044a690(*(undefined4 *)(param_2 + 6)), cVar3 == '\0'))
        {
          if (bVar5) {
            return 0;
          }
        }
        else {
          local_8 = local_8 + -1;
          if (local_8 < 1) {
            return 1;
          }
        }
      }
    }
    else {
      piVar2 = *(int **)((int)&DAT_008ea36c + iVar1);
      if (iVar4 == -2) {
        for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
          cVar3 = FUN_0044b280(*(undefined4 *)(param_2 + 6));
          if (cVar3 == '\0') {
            if (bVar5) {
              return 0;
            }
          }
          else {
            local_8 = local_8 + -1;
            if (local_8 < 1) {
              return 1;
            }
          }
        }
      }
      else {
        for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
          if (*(int *)(*piVar2 + 0x3d8) == param_2) {
            local_8 = local_8 + -1;
            if (local_8 < 1) {
              return 1;
            }
          }
          else if (bVar5) {
            return 0;
          }
        }
      }
    }
  }
  else if (iVar4 == -3) {
    for (iVar1 = *(int *)((int)&DAT_008ea36c + iVar1); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      cVar3 = FUN_0044b300(*(undefined4 *)(param_2 + 6));
      if ((cVar3 == '\0') && (cVar3 = FUN_0044a690(*(undefined4 *)(param_2 + 6)), cVar3 == '\0')) {
        if (bVar5) {
          return 0;
        }
      }
      else {
        local_8 = local_8 + -1;
        if (local_8 < 1) {
          return 1;
        }
      }
    }
  }
  else {
    piVar2 = *(int **)((int)&DAT_008ea36c + iVar1);
    if (iVar4 == -2) {
      for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        cVar3 = FUN_0044b280(*(undefined4 *)(param_2 + 6));
        if (cVar3 == '\0') {
          if (bVar5) {
            return 0;
          }
        }
        else {
          local_8 = local_8 + -1;
          if (local_8 < 1) {
            return 1;
          }
        }
      }
    }
    else {
      for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        if (*(int *)(*piVar2 + 0x3d4) == param_2) {
          local_8 = local_8 + -1;
          if (local_8 < 1) {
            return 1;
          }
        }
        else if (bVar5) {
          return 0;
        }
      }
    }
  }
  if (0 < local_8) {
    return 0;
  }
  return 1;
}


