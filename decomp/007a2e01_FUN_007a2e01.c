// FUN_007a2e01 @ 7a2e01 size=280

undefined4 * FUN_007a2e01(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  byte *pbVar5;
  int iVar6;
  undefined4 local_3c;
  undefined4 uStack_38;
  byte *pbStack_34;
  int iStack_30;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_30 = unaff_EBP + -0x10;
  pbStack_34 = (byte *)0x7a2e20;
  uStack_38 = FUN_0074c2a0();
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_30 = 1;
  pbStack_34 = (byte *)0x0;
  local_3c = 0x7a2e30;
  uVar3 = FUN_0079b652();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  iStack_30 = 0x7a2e42;
  FUN_0074c280();
  pbVar5 = *(byte **)(*(int *)(unaff_EBP + 0x20) + 4);
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)&DAT_007f0c98;
  }
  *(undefined1 *)(unaff_EBP + 0x20) = 0;
  if (*pbVar5 == 0x2d) {
    *(undefined1 *)(unaff_EBP + 0x20) = 1;
    pbVar5 = pbVar5 + 1;
  }
  bVar1 = *pbVar5;
  while ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x10) + (uint)bVar1 * 2) >> 2 & 1) != 0)
  {
    bVar1 = pbVar5[iVar6 + 1];
    iVar6 = iVar6 + 1;
  }
  iStack_30 = 0;
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1b);
  pbStack_34 = (byte *)0x7a2e89;
  FUN_00674910();
  uStack_38 = 0x7a2e93;
  pbStack_34 = pbVar5;
  iStack_30 = iVar6;
  FUN_00674d80();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar6 == 0) {
    iStack_30 = 0x30;
    pbStack_34 = (byte *)0x1;
    uStack_38 = 0x7a2ea5;
    FUN_00797965();
  }
  *(undefined4 **)(unaff_EBP + -0x14) = &local_3c;
  local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)(unaff_EBP + -0x2c));
  FUN_00674910(0);
  FUN_00674710(unaff_EBP + -0x2c,0,DAT_007f33d8);
  puVar4 = (undefined4 *)
           FUN_007a3e0c(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + 0x20));
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  uVar3 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_30 = 1;
  *puVar2 = uVar3;
  puVar2[1] = puVar4[1];
  pbStack_34 = (byte *)0x7a2f06;
  FUN_00674910();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


