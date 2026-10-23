// FUN_00607980 @ 607980 size=92

undefined4 __thiscall FUN_00607980(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x7e) + 0x20))(param_2,param_3);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x8a) != 0)) {
    uVar2 = FUN_00763760();
    return uVar2;
  }
  cVar1 = FUN_004355a0(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x86) + 0x3c))(param_2,param_3);
    return uVar2;
  }
  return 0;
}


