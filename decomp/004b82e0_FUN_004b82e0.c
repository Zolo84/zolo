// FUN_004b82e0 @ 4b82e0 size=414

undefined4 * __thiscall
FUN_004b82e0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428bc0(param_3);
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e6edc;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined1 *)((int)param_1 + 0x6e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = param_2;
  param_1[0x1f] = 0;
  param_1[0x20] = param_4;
  param_1[0x21] = param_5;
  param_1[0x24] = *(undefined4 *)(param_2 + 0x12);
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x9a) = 1;
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  *(undefined1 *)((int)param_1 + 0xae) = 0;
  *(undefined ***)((int)param_1 + 0x9e) = &PTR_LAB_007e75e8;
  *param_1 = &PTR_FUN_007e7564;
  param_1[2] = &PTR_LAB_007e7550;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_007a630a(local_10c,s__s__d_in_Prov_d_0083ed38,s_Combat_0083ed48,
               *(undefined4 *)((int)param_1 + 0xe),*(undefined4 *)(param_1[0x1e] + 0x12));
  FUN_00425ba0(local_10c);
  *(undefined4 **)(param_1[0x20] + 0x40) = param_1;
  *(undefined4 **)(param_1[0x21] + 0x40) = param_1;
  if (DAT_00dc191a != '\0') {
    puVar2 = *(undefined4 **)((int)param_1 + 0xa2);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[2];
      FUN_00796cd8(*puVar2);
      FUN_00796cd8(puVar2);
      puVar2 = puVar1;
    }
    *(undefined4 *)((int)param_1 + 0xa2) = 0;
    *(undefined4 *)((int)param_1 + 0xa6) = 0;
    *(undefined4 *)((int)param_1 + 0xaa) = 0;
  }
  ExceptionList = local_c;
  return param_1;
}


