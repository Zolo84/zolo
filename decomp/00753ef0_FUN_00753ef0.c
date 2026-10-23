// FUN_00753ef0 @ 753ef0 size=139

undefined4 __thiscall FUN_00753ef0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    return 0xe;
  }
  param_2 = *(undefined4 *)(param_2 + 0x24);
  local_4 = param_2;
  FUN_00754250(&local_8,&param_2);
  if (local_8 == *(int *)(param_1 + 8)) {
    return 3;
  }
  iVar2 = FUN_00748610(&local_4);
  if (*(int *)(iVar1 + 0x28) == *(int *)(iVar2 + 0x5c)) {
    return 5;
  }
  uVar3 = FUN_0074b2e0(iVar1);
  return uVar3;
}


