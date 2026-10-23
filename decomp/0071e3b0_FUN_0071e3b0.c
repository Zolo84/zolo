// FUN_0071e3b0 @ 71e3b0 size=190

undefined4 * __thiscall
FUN_0071e3b0(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,char *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined2 *puVar2;
  uint local_8;
  
  puVar2 = operator_new(0x56);
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)0x0;
  }
  else {
    FUN_0042d2d0();
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
  }
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007eaa1c;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar2 = param_2;
  iVar1 = param_1[1];
  local_8 = local_8 & 0xff000000;
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = local_8;
  *(undefined2 *)(iVar1 + 6) = 0;
  *param_1 = &PTR_FUN_007ea21c;
  *(undefined4 *)(param_1[1] + 0x4e) = param_5;
  _strncpy((char *)(param_1[1] + 0xe),param_4,0x3f);
  *(undefined1 *)(param_1[1] + 0x4d) = 0;
  *(undefined4 *)(param_1[1] + 0x52) = param_6;
  return param_1;
}


