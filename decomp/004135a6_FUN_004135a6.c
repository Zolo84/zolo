// FUN_004135a6 @ 4135a6 size=152

void __thiscall
FUN_004135a6(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined2 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_8 = *(undefined4 *)(param_5 + 8);
  local_c = *(undefined4 *)(param_5 + 4);
  uVar2 = FUN_004129c4(param_2);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (param_7 != (undefined4 *)0x0) {
    local_14 = *param_7;
    local_10 = param_7[1];
    uVar1 = param_7[2];
    local_8 = param_7[3];
    local_c = uVar1;
  }
  *(undefined1 *)(param_1 + 0x414) = 1;
  FUN_00411e4d(param_2,param_3 - (int)uVar2,param_4,&local_14,param_5,
               CONCAT22((short)((uint)uVar1 >> 0x10),param_6));
  return;
}


