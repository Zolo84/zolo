// FUN_0040e510 @ 40e510 size=211

undefined4 __fastcall FUN_0040e510(char *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*param_1 != '\0') && (piVar1 = *(int **)(param_1 + 10), piVar1 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,0,0,0,0);
    if (iVar3 == 0) {
      if (param_1[0x42] != '\0') {
        (**(code **)(**(int **)(param_1 + 0x3a) + 0x14))
                  (*(int **)(param_1 + 0x3a),param_1 + 0x22,*(undefined4 *)(param_1 + 6),
                   param_1 + 0x12,0x1000000,0);
        FUN_0057ab40();
      }
      return 1;
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0x3e) + 0x1c))(*(int **)(param_1 + 0x3e),0);
    if (-1 < iVar3) {
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
  }
  return 0;
}


