// FUN_004132d0 @ 4132d0 size=153

void __thiscall
FUN_004132d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined2 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  uVar2 = *(undefined4 *)(param_5 + 8);
  local_10 = 0;
  local_c = *(undefined4 *)(param_5 + 4);
  local_8 = uVar2;
  if (param_7 != (undefined4 *)0x0) {
    local_14 = *param_7;
    local_10 = param_7[1];
    uVar2 = param_7[2];
    local_8 = param_7[3];
    local_c = uVar2;
  }
  *(undefined1 *)(param_1 + 0x414) = 0;
  uVar2 = CONCAT22((short)((uint)uVar2 >> 0x10),param_6);
  puVar3 = &local_14;
  iVar1 = FUN_004129c4(param_2);
  FUN_00411e4d(param_2,param_3 - iVar1 / 2,param_4,puVar3,param_5,uVar2);
  return;
}


