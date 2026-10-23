// FUN_0040dcb0 @ 40dcb0 size=326

void __thiscall FUN_0040dcb0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  param_2 = *(int *)(param_1 + 0x26) + param_2;
  *(int *)(param_1 + 0x26) = param_2;
  if (*(int *)(param_1 + 0x22) < param_2) {
    *(int *)(param_1 + 0x26) = *(int *)(param_1 + 0x22);
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  local_10 = *(undefined4 *)(iVar2 + 0x228);
  local_c = *(undefined2 *)(iVar2 + 0x22c);
  local_8 = *(undefined4 *)(iVar2 + 0x222);
  local_4 = *(undefined2 *)(iVar2 + 0x226);
  cVar1 = FUN_0042ddd0(&DAT_00d61388);
  if (cVar1 == '\0') {
    local_10 = DAT_00d61388;
    local_c = DAT_00d6138c;
  }
  cVar1 = FUN_0042ddd0(&local_10);
  if (cVar1 == '\0') {
    local_8 = local_10;
    local_4 = local_c;
  }
  FUN_0042e140();
  FUN_0042e140();
  FUN_0042e140();
  FUN_0042e140();
  iVar3 = *(int *)(param_1 + 0x36) * 0xc;
  iVar2 = __ftol();
  *(int *)(param_1 + 0x2a) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  if (iVar3 < *(int *)(param_1 + 0x2a)) {
    *(int *)(param_1 + 0x2a) = iVar3;
  }
  return;
}


