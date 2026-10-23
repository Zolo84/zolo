// FUN_006ee700 @ 6ee700 size=336

undefined4 FUN_006ee700(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_108 [2];
  undefined1 local_100 [256];
  
  iVar4 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  iVar3 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  FUN_00407e90(0);
  FUN_00406300(iVar4,iVar3,0,0,0x400,0x300,0,DAT_00bd1bac,0);
  FUN_004136a0(s_eurostilecond18bold_bmp_0085b444);
  puVar5 = &DAT_00893640;
  puVar7 = local_108;
  for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar5 = local_108;
  puVar7 = local_108;
  for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar4 = iVar4 + 0x3fe;
  FUN_00413369(local_100,iVar4,iVar3 + 1,DAT_00bd1bac,0xffff,0);
  iVar2 = DAT_00bd1bac;
  iVar6 = 0x10;
  if (DAT_00dc4b5e != '\0') {
    uVar8 = 0;
    uVar1 = FUN_00584270(0xd0,0xe8,0xf8);
    FUN_00413369(s_____DEBUG_ENABLED______0086f44c,iVar4,iVar3 + 0x10,iVar2,uVar1,uVar8);
    iVar6 = 0x20;
  }
  iVar2 = DAT_00bd1bac;
  uVar8 = 0;
  uVar1 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(&DAT_00dc3c04,iVar4,iVar6 + iVar3,iVar2,uVar1,uVar8);
  return 0;
}


