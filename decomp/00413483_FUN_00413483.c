// FUN_00413483 @ 413483 size=134

void __thiscall
FUN_00413483(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined2 param_6,undefined4 *param_7)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_8 = *(undefined4 *)(param_5 + 8);
  local_c = *(undefined4 *)(param_5 + 4);
  if (param_7 != (undefined4 *)0x0) {
    local_14 = *param_7;
    local_10 = param_7[1];
    local_c = param_7[2];
    local_8 = param_7[3];
  }
  *(undefined1 *)(param_1 + 0x414) = 1;
  FUN_00411e4d(param_2,param_3,param_4,&local_14,param_5,
               CONCAT22((short)((uint)local_c >> 0x10),param_6));
  return;
}


