// FUN_0041b680 @ 41b680 size=485

undefined4 FUN_0041b680(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((((param_1 == 0) || (param_2 < 1)) || (9 < param_2)) || ((param_4 < 0 || (0xfa < param_4)))) {
    return 0xfffffffe;
  }
  if (param_4 == 0) {
    param_4 = 0x1e;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(code **)(param_1 + 0x24) = FUN_0041b870;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(code **)(param_1 + 0x28) = FUN_0041b890;
  }
  piVar1 = (int *)(**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x2c),0xd9b0,1);
  if (piVar1 == (int *)0x0) {
    return 0xfffffffd;
  }
  *piVar1 = param_1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  iVar2 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x2c),param_2 * 400000,1);
  piVar1[4] = iVar2;
  iVar2 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x2c),param_2 * 400000 + 0x88,1);
  piVar1[5] = iVar2;
  iVar3 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x2c),0x40004,1);
  iVar2 = piVar1[4];
  piVar1[6] = iVar3;
  if (iVar2 != 0) {
    if ((piVar1[5] != 0) && (iVar3 != 0)) {
      piVar1[2] = 2;
      piVar1[1] = 2;
      piVar1[0x9b] = 0;
      piVar1[0x9c] = param_2;
      piVar1[0x9a] = param_3;
      piVar1[0x99] = 0;
      piVar1[0x12] = param_2 * 100000 + -0x13;
      piVar1[0xc] = param_4;
      piVar1[9] = piVar1[5];
      piVar1[10] = iVar2;
      piVar1[0xb] = 0;
      piVar1[8] = iVar2;
      *(int **)(param_1 + 0x20) = piVar1;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      piVar1[0xd] = 0x100;
      piVar1[0xe] = 0;
      piVar1[0x11] = 0;
      piVar1[0x13] = 0;
      piVar1[0x14] = 0;
      piVar1[0x98] = -1;
      piVar4 = piVar1 + 0x16;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      piVar1[0x9b] = piVar1[0x9b] + 1;
      return 0;
    }
    if (iVar2 != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),iVar2);
    }
  }
  if (piVar1[5] != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),piVar1[5]);
  }
  if (piVar1[6] != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),piVar1[6]);
  }
  (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),piVar1);
  return 0xfffffffd;
}


