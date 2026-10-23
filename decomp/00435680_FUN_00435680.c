// FUN_00435680 @ 435680 size=1438

int __thiscall FUN_00435680(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *unaff_EBX;
  undefined4 *local_24;
  undefined4 uStack_20;
  int iStack_1c;
  int *apiStack_18 [2];
  float fStack_10;
  int iStack_c;
  undefined1 auStack_8 [8];
  
  local_24 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + -0xe);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((((*(int **)(param_1 + 0x14) != (int *)0x0) &&
       (local_24 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x14) + 4))(param_2),
       *(int *)(param_1 + 0x14) != 0)) && (iVar4 = (**(code **)(*param_2 + 8))(), iVar4 == 0xe)) &&
     (cVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))
                        (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a)),
     cVar3 != '\0')) {
    (**(code **)(*(int *)(param_1 + -0x12) + 0x30))(*(undefined4 *)(param_1 + 0x14));
    return 3;
  }
  iVar4 = (**(code **)(*param_2 + 8))();
  if (iVar4 == 0xe) {
    if (*(char *)(param_1 + 0x4c) != '\0') {
      (**(code **)(*(int *)(param_1 + -0x12) + 0x38))(0);
    }
    FUN_00433930();
  }
  apiStack_18[0] = *(int **)(param_1 + 0x2c);
  iVar4 = param_1 + -0x12;
  iStack_1c = iVar4;
  if (((apiStack_18[0] != (int *)0x0) && (FUN_00436e20(&fStack_10,0), apiStack_18[0] != (int *)0x0))
     || (cVar3 = FUN_00434fd0(), cVar3 != '\0')) {
    if (local_24 != (undefined4 *)0x0) {
      return (int)local_24;
    }
    local_24 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x38) + 4))(param_2);
    cVar3 = FUN_00433910();
    if ((cVar3 != '\0') && (iVar5 = (**(code **)(*param_2 + 8))(), iVar5 == 0x11)) {
      fStack_10 = *(float *)(param_2[1] + 0x16);
      iVar5 = *(int *)(param_2[1] + 0x1a);
      iVar6 = (**(code **)(**(int **)(param_1 + 0x38) + 0x28))(&fStack_10);
      local_24 = (undefined4 *)0x3;
      *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 4) - iVar5;
    }
    cVar3 = FUN_00433910();
    if ((cVar3 != '\0') && (iVar5 = (**(code **)(*param_2 + 8))(), iVar5 == 0x13)) {
      fStack_10 = *(float *)(param_2[1] + 0x16);
      iVar4 = *(int *)(param_1 + 0x40);
      apiStack_18[0] = *(int **)(iVar4 + 0x14);
      iStack_c = *(int *)(param_2[1] + 0x1a) + (*(int *)(param_1 + 0x58) - *(int *)(iVar4 + 0x18));
      if (iStack_c < 0) {
        iStack_c = 0;
      }
      iVar5 = iStack_c;
      iVar4 = *(int *)(iVar4 + 0x1c);
      iVar6 = FUN_00415be0();
      if (iVar4 - iVar6 < iVar5) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c);
        iStack_c = FUN_00415be0();
        iStack_c = iVar4 - iStack_c;
      }
      apiStack_18[0] = (int *)(float)iStack_c;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c);
      iVar6 = FUN_00415be0();
      iVar5 = 0;
      fStack_10 = (float)apiStack_18[0] / (float)(iVar4 - iVar6);
      apiStack_18[0] = *(int **)(param_1 + -0xe);
      while (apiStack_18[0] != (int *)0x0) {
        iVar4 = (**(code **)(*(int *)*apiStack_18[0] + 0x18))();
        iVar5 = iVar5 + iVar4;
        FUN_00436e10(&local_24,0);
      }
      apiStack_18[0] = (int *)(iVar5 - *(int *)(param_1 + 0x18));
      iVar4 = __ftol();
      if (0 < iVar4) {
        local_24 = *(undefined4 **)(param_1 + -0xe);
        while (local_24 != (undefined4 *)0x0) {
          iVar5 = (**(code **)(*(int *)*local_24 + 0x18))();
          iVar4 = iVar4 - iVar5;
          if (iVar4 < 0) {
            *(undefined4 **)(param_1 + 0x2c) = local_24;
            break;
          }
          FUN_00436e10(apiStack_18,0);
        }
      }
      iVar4 = *(int *)(param_1 + 0x40);
      local_24 = *(undefined4 **)(iVar4 + 0x14);
      uStack_20 = *(undefined4 *)(iVar4 + 0x18);
      iVar4 = *(int *)(iVar4 + 0x1c);
      piVar1 = *(int **)(param_1 + 0x38);
      iVar5 = *piVar1;
      apiStack_18[0] = piVar1;
      iVar6 = FUN_00415be0();
      apiStack_18[0] = (int *)(iVar4 - iVar6);
      uVar7 = __ftol();
      puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x28))(auStack_8,uVar7);
      (**(code **)(iVar5 + 0x18))(*puVar8);
      *(undefined1 *)(param_1 + 0x52) = 1;
      local_24 = (undefined4 *)0x3;
      iVar4 = iStack_1c;
    }
    if ((*(char *)(param_1 + 0x52) != '\0') && (iVar5 = (**(code **)(*param_2 + 8))(), iVar5 == 0xe)
       ) {
      *(undefined1 *)(param_1 + 0x52) = 0;
      return 3;
    }
    if (local_24 != (undefined4 *)0x0) {
      return (int)local_24;
    }
    puVar8 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x30) + 4))(param_2);
    local_24 = puVar8;
    if (*(char *)(*(int *)(param_1 + 0x30) + 0x9d) != '\0') {
      FUN_00435030();
    }
    if (puVar8 != (undefined4 *)0x0) {
      return (int)local_24;
    }
    puVar8 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x34) + 4))(param_2);
    local_24 = puVar8;
    if (*(char *)(*(int *)(param_1 + 0x34) + 0x9d) != '\0') {
      FUN_004351b0();
    }
    if (puVar8 != (undefined4 *)0x0) {
      return (int)local_24;
    }
    iVar5 = (**(code **)(*param_2 + 8))();
    if (iVar5 == 0xc) {
      iVar5 = param_2[1];
      iVar6 = *(int *)(iVar5 + 0x16) - *(int *)(iVar4 + 0x32);
      iVar9 = *(int *)(iVar5 + 0x1a) - *(int *)(iVar4 + 0x36);
      if (((-1 < iVar6) && (iVar6 < *(int *)(iVar4 + 0x2e))) &&
         ((-1 < iVar9 && (iVar9 < *(int *)(iVar4 + 0x2a))))) {
        if (0 < *(int *)(iVar5 + 0x12)) {
          FUN_00435030();
          return 3;
        }
        FUN_004351b0();
        return 3;
      }
    }
    else {
      iVar5 = (**(code **)(*param_2 + 8))();
      if (iVar5 == 0xe) {
        iStack_c = *(int *)(param_2[1] + 0x1a);
        iVar5 = *(int *)(param_1 + 0x40);
        iVar6 = *(int *)(param_2[1] + 0x16) - *(int *)(iVar5 + 0x14);
        if ((((-5 < iVar6) && (iVar6 < 0xe)) &&
            (iVar6 = iStack_c - *(int *)(iVar5 + 0x18), -1 < iVar6)) &&
           (iVar6 < *(int *)(iVar5 + 0x1c))) {
          iVar5 = *(int *)(param_1 + 0x18);
          if (((*(int *)(iVar4 + 0x3e) != 0) && (*(int *)(*(int *)(iVar4 + 0x3e) + 4) != 0)) ||
             (cVar3 = FUN_00434fd0(), cVar3 != '\0')) {
            iVar4 = (**(code **)(**(int **)(param_1 + 0x38) + 0x28))(auStack_8);
            if (iStack_c < *(int *)(iVar4 + 4)) {
              iVar4 = -1;
            }
            else {
              iVar6 = (**(code **)(**(int **)(param_1 + 0x38) + 0x28))(auStack_8);
              iVar9 = FUN_00415be0();
              iVar4 = 1;
              if (iStack_c <= *(int *)(iVar6 + 4) + iVar9) {
                iVar4 = 0;
              }
            }
            if (0 < iVar5) {
              do {
                if (iVar4 == -1) {
                  FUN_00435030();
                }
                else if (iVar4 == 1) {
                  FUN_004351b0();
                }
                iVar6 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x2c) + 0x18))();
                iVar5 = iVar5 - iVar6;
              } while (0 < iVar5);
              goto LAB_00435b0a;
            }
          }
        }
      }
    }
  }
  if (local_24 != (undefined4 *)0x0) {
    return (int)local_24;
  }
LAB_00435b0a:
  iVar4 = *(int *)(param_1 + 0x24);
  puVar8 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    while (iVar4 < *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x18)) {
      puVar2 = (undefined4 *)puVar8[2];
      piVar1 = (int *)*puVar8;
      (**(code **)(*piVar1 + 0x38))
                (*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x4e) + iVar4);
      iVar5 = (**(code **)(*piVar1 + 4))(param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = (**(code **)(*param_2 + 8))();
      if ((iVar5 == 0xe) &&
         (cVar3 = (**(code **)(*piVar1 + 0x2c))
                            (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a)),
         cVar3 != '\0')) {
        (**(code **)(*unaff_EBX + 0x30))(piVar1);
        return 3;
      }
      iVar5 = (**(code **)(*param_2 + 8))();
      if (iVar5 == 0x1b) {
        (**(code **)(*piVar1 + 0x24))();
        puVar8 = (undefined4 *)FUN_00581e60();
        cVar3 = (**(code **)(*piVar1 + 0x2c))(*puVar8,puVar8[1]);
        if ((cVar3 != '\0') &&
           (((DAT_00d13360 == 0 || (*(char *)(DAT_00d13360 + 0xc) != '\0')) &&
            ((**(code **)(*piVar1 + 0x20))(*(undefined4 *)(param_1 + 0x1c)), DAT_00d13360 != 0)))) {
          *(undefined1 *)(DAT_00d13360 + 0xc) = 0;
        }
      }
      iVar5 = (**(code **)(*piVar1 + 0x18))();
      iVar4 = iVar4 + iVar5;
      puVar8 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        return (int)local_24;
      }
    }
  }
  return (int)local_24;
}


