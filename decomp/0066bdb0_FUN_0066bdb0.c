// FUN_0066bdb0 @ 66bdb0 size=493

void FUN_0066bdb0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar2 = DAT_00d11154;
  piVar1 = (int *)*DAT_00d11154;
  if (((DAT_00d1115c == 0) || (piVar3 = (int *)FUN_00674a70(local_c), piVar1 != (int *)*piVar3)) ||
     (piVar2 != DAT_00d11154)) {
    while (piVar1 != piVar2) {
      puVar4 = (undefined4 *)FUN_006755e0(local_c,0);
      FUN_006751a0(local_4,*puVar4);
    }
  }
  else {
    FUN_006755a0(DAT_00d11154[1]);
    DAT_00d11154[1] = DAT_00d11168;
    DAT_00d1115c = 0;
    *DAT_00d11154 = (int)DAT_00d11154;
    DAT_00d11154[2] = (int)DAT_00d11154;
    FUN_00674a70(local_8);
  }
  piVar2 = DAT_00d11034;
  piVar1 = (int *)*DAT_00d11034;
  if (((DAT_00d1103c == 0) || (piVar3 = (int *)FUN_00674bd0(local_4), piVar1 != (int *)*piVar3)) ||
     (piVar2 != DAT_00d11034)) {
    while (piVar1 != piVar2) {
      puVar4 = (undefined4 *)FUN_00675d20(local_4,0);
      FUN_006758a0(local_c,*puVar4);
    }
  }
  else {
    FUN_00675cd0(DAT_00d11034[1]);
    DAT_00d11034[1] = DAT_00d11170;
    DAT_00d1103c = 0;
    *DAT_00d11034 = (int)DAT_00d11034;
    DAT_00d11034[2] = (int)DAT_00d11034;
    FUN_00674bd0(local_8);
  }
  piVar2 = DAT_00d11144;
  piVar1 = (int *)*DAT_00d11144;
  if (DAT_00d1114c == 0) {
    DAT_00d1114c = 0;
    while (piVar1 != piVar2) {
      puVar4 = (undefined4 *)FUN_00675d20(local_8,0);
      FUN_006758a0(local_c,*puVar4);
    }
    return;
  }
  FUN_00675cd0(DAT_00d11144[1]);
  DAT_00d11144[1] = DAT_00d11170;
  DAT_00d1114c = 0;
  *DAT_00d11144 = (int)DAT_00d11144;
  DAT_00d11144[2] = (int)DAT_00d11144;
  FUN_00674bd0(local_4);
  return;
}


