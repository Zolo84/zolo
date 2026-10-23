// FUN_00797771 @ 797771 size=111

void __thiscall FUN_00797771(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_007a8307(*(int *)(param_1 + 0x50),param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_007a9c7b(*(undefined4 *)(param_1 + 0x50),&local_c);
      if (iVar1 == 0) {
        local_24[0] = 0;
        local_1c = local_c;
        local_18 = local_8;
        local_14 = *(undefined4 *)(param_1 + 0x40);
        puVar2 = local_24;
        goto LAB_007977d3;
      }
    }
  }
  puVar2 = (undefined4 *)FUN_007979fe(0xffffffff);
LAB_007977d3:
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


