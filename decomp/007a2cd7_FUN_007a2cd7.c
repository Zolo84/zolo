// FUN_007a2cd7 @ 7a2cd7 size=298

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_007a2cd7(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  double dVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar7;
  int local_60;
  char *pcStack_5c;
  undefined8 local_58;
  
  FUN_007a9c5c();
  bVar3 = *(double *)(unaff_EBP + 0x20) < _DAT_007e3348;
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined1 *)(unaff_EBP + -0x14) = 0;
  if (bVar3) {
    *(double *)(unaff_EBP + 0x20) = -*(double *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x14) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((_DAT_00800328 <= *(double *)(unaff_EBP + 0x20) && (*(uint *)(unaff_EBP + -0x10) < 5000)))
  {
    dVar4 = *(double *)(unaff_EBP + 0x20) * _DAT_00800320;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10;
    *(double *)(unaff_EBP + 0x20) = dVar4;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
  local_58 = 0x7a2d44;
  FUN_00674910();
  local_58 = *(undefined8 *)(unaff_EBP + 0x20);
  local_60 = unaff_EBP + -0x50;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcStack_5c = "%.0Lf";
  iVar5 = FUN_007a630a();
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      *(undefined1 *)(unaff_EBP + 0x24) = *(undefined1 *)(unaff_EBP + -0x50 + iVar7);
      local_58 = CONCAT44(*(undefined4 *)(unaff_EBP + 0x24),1);
      pcStack_5c = (char *)0x7a2d7c;
      FUN_00797965();
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  local_58 = CONCAT44(0x30,*(undefined4 *)(unaff_EBP + -0x10));
  pcStack_5c = (char *)0x7a2d8e;
  FUN_00797965();
  *(int **)(unaff_EBP + 0x24) = &local_60;
  local_60 = CONCAT31(local_60._1_3_,*(undefined1 *)(unaff_EBP + -0x28));
  FUN_00674910(0);
  FUN_00674710(unaff_EBP + -0x28,0,DAT_007f33d8);
  puVar6 = (undefined4 *)
           FUN_007a3e0c(unaff_EBP + 0x20,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + -0x14));
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar2 = *puVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = uVar2;
  puVar1[1] = puVar6[1];
  local_58 = 0x1007a2dee;
  FUN_00674910();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


