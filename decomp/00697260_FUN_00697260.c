// FUN_00697260 @ 697260 size=147

void __thiscall FUN_00697260(int param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x8e + param_2 * 0x12);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_0069a430(param_3);
      if (param_4 != '\0') {
        FUN_00691d40(param_2);
      }
      return;
    }
    if ((*(int *)(*piVar1 + 8) != 0) &&
       (*(float *)(*(int *)(*(int *)(*piVar1 + 8) + 0x40) + 0x44) <
        *(float *)(*(int *)(*(int *)(param_3 + 8) + 0x40) + 0x44))) break;
    piVar1 = (int *)piVar1[2];
  }
  FUN_006971a0(param_2);
  FUN_0069a480(param_3,piVar1);
  if (param_4 == '\0') {
    return;
  }
  FUN_00691d40(param_2);
  return;
}


