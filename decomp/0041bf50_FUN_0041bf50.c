// FUN_0041bf50 @ 41bf50 size=197

undefined4 FUN_0041bf50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (((param_1 == 0) || (((param_3 != 0 && (param_3 != 1)) || (param_2 < 0)))) || (4 < param_2)) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(code **)(param_1 + 0x24) = FUN_0041b870;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(code **)(param_1 + 0x28) = FUN_0041b890;
  }
  piVar1 = (int *)(**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x2c),0xfa6e,1);
  if (piVar1 == (int *)0x0) {
    return 0xfffffffd;
  }
  *piVar1 = param_1;
  *(int **)(param_1 + 0x20) = piVar1;
  piVar1[1] = 10;
  piVar1[7] = 0;
  piVar1[6] = 0;
  *(undefined4 *)((int)piVar1 + 0xc5e) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((int)piVar1 + 0xc4e) = 0;
  *(undefined4 *)((int)piVar1 + 0xc4a) = 0;
  *(undefined4 *)((int)piVar1 + 0xc46) = 0;
  *(undefined4 *)((int)piVar1 + 0x26) = 0;
  *(int *)((int)piVar1 + 0x2a) = param_2;
  *(char *)(piVar1 + 9) = (char)param_3;
  return 0;
}


