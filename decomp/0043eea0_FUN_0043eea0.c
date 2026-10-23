// FUN_0043eea0 @ 43eea0 size=66

void __thiscall FUN_0043eea0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x8c);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    *(undefined4 *)(iVar2 + 0x6e) = 0;
    *(undefined4 *)(iVar2 + 0x72) = 0;
    piVar3 = piVar1;
  }
  (**(code **)(*(int *)(param_1 + 0x9a) + 0x10))(param_2);
  FUN_004424d0(param_2);
  return;
}


