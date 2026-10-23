// FUN_00525c20 @ 525c20 size=279

undefined4 * __fastcall FUN_00525c20(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_4c [18];
  undefined2 local_4;
  
  iVar4 = DAT_00893530;
  pcVar1 = (char *)(DAT_00893530 + 0x14);
  pcVar2 = (char *)FUN_006ac770();
  if ((((pcVar2[1] != *(char *)(iVar4 + 0x15)) || (pcVar2[2] != *(char *)(iVar4 + 0x16))) ||
      (*(short *)(pcVar2 + 4) != *(short *)(iVar4 + 0x18))) || (*pcVar2 != *pcVar1)) {
    local_4c[0] = *(undefined4 *)(param_1 + 0xc);
    local_4c[1] = *(undefined4 *)(*(int *)(param_1 + 0x248) + 6);
    local_4c[0x11] = *(undefined4 *)(DAT_00893530 + 0x14);
    local_4 = *(undefined2 *)(DAT_00893530 + 0x18);
    local_4c[2] = 0;
    local_4c[3] = 0;
    local_4c[4] = 0;
    local_4c[5] = 0;
    local_4c[6] = 0;
    local_4c[7] = 0;
    local_4c[8] = 0;
    local_4c[9] = 0;
    local_4c[10] = 0;
    local_4c[0xb] = 0;
    local_4c[0xc] = 0;
    local_4c[0xd] = 0;
    local_4c[0xe] = 0;
    local_4c[0xf] = 0;
    local_4c[0x10] = 0;
    puVar5 = local_4c;
    puVar6 = (undefined4 *)(param_1 + 0xce);
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
    for (puVar5 = *(undefined4 **)(param_1 + 0x26); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[2]) {
      uVar3 = (**(code **)(*(int *)*puVar5 + 0x30))();
      FUN_006ac630(uVar3);
    }
  }
  return (undefined4 *)(param_1 + 0xce);
}


