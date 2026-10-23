// FUN_00413509 @ 413509 size=157

void __thiscall
FUN_00413509(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined2 param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_8 = *(undefined4 *)(param_5 + 8);
  local_c = *(int *)(param_5 + 4);
  iVar1 = FUN_004129c4(param_2);
  iVar2 = iVar1 >> 0x1f;
  if (param_7 != (undefined4 *)0x0) {
    local_14 = *param_7;
    local_10 = param_7[1];
    iVar2 = param_7[2];
    local_8 = param_7[3];
    local_c = iVar2;
  }
  *(undefined1 *)(param_1 + 0x414) = 1;
  FUN_00411e4d(param_2,param_3 - iVar1 / 2,param_4,&local_14,param_5,
               CONCAT22((short)((uint)iVar2 >> 0x10),param_6));
  return;
}


