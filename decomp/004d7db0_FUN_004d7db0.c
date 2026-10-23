// FUN_004d7db0 @ 4d7db0 size=1318

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7db0(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  uint local_6c;
  int local_60;
  
  local_6c = 0;
  puVar9 = &DAT_00a43018;
  do {
    local_60 = 3;
    iVar8 = (int)puVar9 + 0x24;
    do {
      iVar5 = *(int *)(iVar8 + -0xc);
      if (iVar5 < *(int *)(iVar8 + 0x10)) {
        uVar6 = (iVar5 + 0x20) * 0x40;
        do {
          iVar7 = (uVar6 | local_6c) * 2;
          uVar2 = __ftol();
          uVar3 = __ftol(uVar2);
          uVar4 = __ftol(uVar3);
          uVar1 = FUN_00584270(uVar4,uVar3,uVar2);
          *(undefined2 *)(&DAT_00a44c34 + iVar7) = uVar1;
          uVar2 = __ftol();
          uVar3 = __ftol(uVar2);
          uVar4 = __ftol(uVar3);
          uVar1 = FUN_00584270(uVar4,uVar3,uVar2);
          *(undefined2 *)(&DAT_00a44c74 + iVar7) = uVar1;
          FUN_00402500(0,s_a____d_0084784c,iVar5);
          iVar5 = iVar5 + 1;
          uVar6 = uVar6 + 0x40;
        } while (iVar5 < *(int *)(iVar8 + 0x10));
      }
      iVar8 = iVar8 + 0x1c;
      local_60 = local_60 + -1;
    } while (local_60 != 0);
    iVar8 = 0;
    do {
      uVar2 = __ftol();
      uVar3 = __ftol();
      uVar4 = __ftol();
      iVar5 = (iVar8 << 6 | local_6c) * 2;
      uVar1 = FUN_00584270(uVar4,uVar3,uVar2);
      *(undefined2 *)(&DAT_00a44c34 + iVar5) = uVar1;
      uVar1 = FUN_00584270(uVar4,uVar3,uVar2);
      iVar8 = iVar8 + 1;
      *(undefined2 *)(&DAT_00a44c74 + iVar5) = uVar1;
    } while (iVar8 < 4);
    iVar8 = 4;
    do {
      iVar5 = (iVar8 << 6 | local_6c) * 2;
      uVar2 = __ftol();
      uVar3 = __ftol(uVar2);
      uVar4 = __ftol(uVar3);
      uVar1 = FUN_00584270(uVar4,uVar3,uVar2);
      *(undefined2 *)(&DAT_00a44c34 + iVar5) = uVar1;
      uVar2 = __ftol();
      uVar3 = __ftol(uVar2);
      uVar4 = __ftol(uVar3);
      uVar1 = FUN_00584270(uVar4,uVar3,uVar2);
      iVar8 = iVar8 + 1;
      *(undefined2 *)(&DAT_00a44c74 + iVar5) = uVar1;
    } while (iVar8 < 0x20);
    iVar8 = 0x60;
    do {
      iVar5 = (iVar8 << 6 | local_6c) * 2;
      uVar2 = __ftol();
      uVar3 = __ftol(uVar2);
      uVar4 = __ftol(uVar3);
      uVar1 = FUN_00584270(uVar4,uVar3,uVar2);
      *(undefined2 *)(&DAT_00a44c34 + iVar5) = uVar1;
      uVar2 = __ftol();
      uVar3 = __ftol(uVar2);
      uVar4 = __ftol(uVar3);
      uVar1 = FUN_00584270(uVar4,uVar3,uVar2);
      iVar8 = iVar8 + 1;
      *(undefined2 *)(&DAT_00a44c74 + iVar5) = uVar1;
    } while (iVar8 < 0x80);
    puVar9 = puVar9 + 0xe;
    local_6c = local_6c + 1;
  } while ((int)puVar9 < 0xa43e18);
  DAT_008477b0 = 1;
  DAT_00a98418 = DAT_00a98418 + 1;
  return;
}


