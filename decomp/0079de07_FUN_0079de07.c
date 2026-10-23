// FUN_0079de07 @ 79de07 size=308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0079de07(void)

{
  undefined4 *puVar1;
  bool bVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar7;
  int local_60;
  char *pcStack_5c;
  undefined8 local_58;
  
  FUN_007a9c5c();
  bVar2 = *(double *)(unaff_EBP + 0x20) < _DAT_007e3348;
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined1 *)(unaff_EBP + -0x14) = 0;
  if (bVar2) {
    *(double *)(unaff_EBP + 0x20) = -*(double *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x14) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((_DAT_00800328 <= *(double *)(unaff_EBP + 0x20) && (*(uint *)(unaff_EBP + -0x10) < 5000)))
  {
    dVar3 = *(double *)(unaff_EBP + 0x20) * _DAT_00800320;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10;
    *(double *)(unaff_EBP + 0x20) = dVar3;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
  local_58 = 0x79de74;
  FUN_007a0afc();
  local_58 = *(undefined8 *)(unaff_EBP + 0x20);
  local_60 = unaff_EBP + -0x50;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcStack_5c = "%.0Lf";
  iVar4 = FUN_007a630a();
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      local_58 = CONCAT44((int)*(char *)(unaff_EBP + -0x50 + iVar7),0x79dea3);
      uVar5 = FUN_0079c11f();
      local_58 = CONCAT44(uVar5,1);
      pcStack_5c = (char *)0x79deaf;
      FUN_007a03f8();
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  local_58 = 0x300079debb;
  uVar5 = FUN_0079c11f();
  local_58 = CONCAT44(uVar5,*(undefined4 *)(unaff_EBP + -0x10));
  pcStack_5c = (char *)0x79dec8;
  FUN_007a03f8();
  *(int **)(unaff_EBP + 0x24) = &local_60;
  local_60 = CONCAT31(local_60._1_3_,*(undefined1 *)(unaff_EBP + -0x28));
  FUN_007a0afc(0);
  FUN_007a0789(unaff_EBP + -0x28,0,DAT_00800314);
  puVar6 = (undefined4 *)
           FUN_0079fe22(unaff_EBP + 0x20,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + -0x14));
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar5 = *puVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = uVar5;
  puVar1[1] = puVar6[1];
  local_58 = 0x10079df28;
  FUN_007a0afc();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


