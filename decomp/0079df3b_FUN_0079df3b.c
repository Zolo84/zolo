// FUN_0079df3b @ 79df3b size=316

undefined4 * FUN_0079df3b(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  short *psVar7;
  int unaff_EBP;
  short *psVar8;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  short *psStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  iStack_34 = unaff_EBP + -0x14;
  uStack_38 = 0x79df5a;
  uStack_3c = FUN_0074c2a0();
  iStack_34 = 1;
  uStack_38 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  psStack_40 = (short *)0x79df68;
  piVar4 = (int *)FUN_007a0e75();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_34 = 0x79df79;
  FUN_0074c280();
  psVar8 = *(short **)(*(int *)(unaff_EBP + 0x20) + 4);
  if (psVar8 == (short *)0x0) {
    psVar8 = &DAT_00800310;
  }
  *(undefined1 *)(unaff_EBP + -0x10) = 0;
  iStack_34 = 0x2d;
  uStack_38 = 0x79df93;
  uVar5 = FUN_0079c11f();
  if (*psVar8 == (short)uVar5) {
    *(undefined1 *)(unaff_EBP + -0x10) = 1;
    psVar8 = psVar8 + 1;
  }
  iStack_34 = CONCAT22((short)((uint)uVar5 >> 0x10),*psVar8);
  iVar1 = *piVar4;
  uStack_38 = 4;
  *(undefined4 *)(unaff_EBP + 0x20) = 0;
  uStack_3c = 0x79dfaf;
  uVar5 = (**(code **)(iVar1 + 8))();
  cVar3 = (char)uVar5;
  psVar7 = psVar8;
  while (cVar3 != '\0') {
    *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
    psVar7 = psVar7 + 1;
    uStack_3c = CONCAT22((short)((uint)uVar5 >> 0x10),*psVar7);
    psStack_40 = (short *)0x4;
    uStack_44 = 0x79dfc7;
    uVar5 = (**(code **)(*piVar4 + 8))();
    cVar3 = (char)uVar5;
  }
  uStack_3c = 0;
  *(undefined1 *)(unaff_EBP + -0x30) = *(undefined1 *)(unaff_EBP + 0x1b);
  psStack_40 = (short *)0x79dfdc;
  FUN_007a0afc();
  uStack_3c = *(undefined4 *)(unaff_EBP + 0x20);
  uStack_44 = 0x79dfe8;
  psStack_40 = psVar8;
  FUN_007a0867();
  uStack_3c = 1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x20) == 0) {
    uStack_3c = 0x30;
    psStack_40 = (short *)0x79dffa;
    uStack_3c = FUN_0079c11f();
    psStack_40 = (short *)0x1;
    uStack_44 = 0x79e005;
    FUN_007a03f8();
  }
  auStack_48[0] = *(undefined1 *)(unaff_EBP + -0x30);
  *(undefined1 **)(unaff_EBP + 0x20) = auStack_48;
  FUN_007a0afc(0);
  FUN_007a0789(unaff_EBP + -0x30,0,DAT_00800314);
  puVar6 = (undefined4 *)
           FUN_0079fe22(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + -0x10));
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  uVar5 = *puVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_3c = 1;
  *puVar2 = uVar5;
  puVar2[1] = puVar6[1];
  psStack_40 = (short *)0x79e064;
  FUN_007a0afc();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


