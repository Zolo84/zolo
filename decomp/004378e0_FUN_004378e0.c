// FUN_004378e0 @ 4378e0 size=48

void __thiscall FUN_004378e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  piVar3 = *(int **)(*(int *)(param_1 + 0xc) + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (*(int *)(iVar2 + 0x23e) == param_2) {
      *(int *)(param_1 + 0x14) = iVar2;
    }
  }
  return;
}


