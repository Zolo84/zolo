// FUN_0079a05b @ 79a05b size=85

void __fastcall FUN_0079a05b(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_18 [20];
  
  FUN_00798acc();
  puVar1 = (undefined4 *)FUN_007a592b(local_18);
  *(undefined4 *)(param_1 + 8) = *puVar1;
  *(undefined4 *)(param_1 + 0xc) = puVar1[1];
  *(undefined4 *)(param_1 + 0x10) = puVar1[2];
  *(undefined4 *)(param_1 + 0x14) = puVar1[3];
  if (DAT_00dc4fd8 == 0) {
    DAT_00dc4fd8 = *(int *)(param_1 + 0x10);
    FUN_007a63e8(&LAB_0079a0b0);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_00798b68();
  return;
}


