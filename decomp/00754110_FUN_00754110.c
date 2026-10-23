// FUN_00754110 @ 754110 size=122

byte __thiscall FUN_00754110(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    return 0xe;
  }
  param_2 = *(undefined4 *)(param_2 + 0x24);
  local_4 = param_2;
  FUN_00754250(&local_8,&param_2);
  if (local_8 != *(int *)(param_1 + 8)) {
    iVar2 = FUN_00748610(&local_4);
    return -(*(int *)(iVar2 + 0x5c) != *(int *)(iVar1 + 0x28)) & 9;
  }
  return 3;
}


