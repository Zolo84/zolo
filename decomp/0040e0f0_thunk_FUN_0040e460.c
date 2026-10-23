// thunk_FUN_0040e460 @ 40e0f0 size=5

undefined4 __fastcall thunk_FUN_0040e460(char *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*param_1 != '\0') {
    piVar1 = *(int **)(param_1 + 0x3e);
    *param_1 = '\0';
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,0);
    if (iVar3 < 0) {
      return 0;
    }
    piVar1 = *(int **)(param_1 + 2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
    }
    piVar1 = *(int **)(param_1 + 0xe);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
    }
    piVar1 = *(int **)(param_1 + 6);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
    }
    piVar1 = *(int **)(param_1 + 10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
    }
    puVar2 = *(undefined4 **)(param_1 + 0x32);
    if ((puVar2 != (undefined4 *)0x0) && (param_1[0x42] != '\0')) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      param_1[0x32] = '\0';
      param_1[0x33] = '\0';
      param_1[0x34] = '\0';
      param_1[0x35] = '\0';
    }
    piVar1 = *(int **)(param_1 + 0x3e);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      param_1[0x40] = '\0';
      param_1[0x41] = '\0';
    }
  }
  return 1;
}


