// FUN_00428810 @ 428810 size=392

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428810(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = DAT_0088f2cc;
  if (DAT_0088f2cc != (undefined4 *)0x0) {
    uVar4 = 0;
    if (DAT_0088f2cc[1] != 0) {
      do {
        iVar2 = *(int *)(puVar3[2] + uVar4 * 4);
        while (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 4);
          FUN_00796cd8(iVar2);
          iVar2 = iVar1;
        }
        uVar4 = uVar4 + 1;
        *(undefined4 *)(puVar3[2] + -4 + uVar4 * 4) = 0;
      } while (uVar4 < (uint)puVar3[1]);
    }
    *puVar3 = 0;
    puVar3 = DAT_0088f2cc;
    if (DAT_0088f2cc != (undefined4 *)0x0) {
      uVar4 = 0;
      if (DAT_0088f2cc[1] != 0) {
        do {
          iVar2 = *(int *)(puVar3[2] + uVar4 * 4);
          while (iVar2 != 0) {
            iVar1 = *(int *)(iVar2 + 4);
            FUN_00796cd8(iVar2);
            iVar2 = iVar1;
          }
          uVar4 = uVar4 + 1;
          *(undefined4 *)(puVar3[2] + -4 + uVar4 * 4) = 0;
        } while (uVar4 < (uint)puVar3[1]);
      }
      *puVar3 = 0;
      FUN_00796cd8(puVar3[2]);
      FUN_00796cd8(puVar3);
    }
    DAT_0088f2cc = (undefined4 *)0x0;
  }
  puVar3 = DAT_0088f2d0;
  if (DAT_0088f2d0 != (undefined4 *)0x0) {
    uVar4 = 0;
    if (DAT_0088f2d0[1] != 0) {
      do {
        iVar2 = *(int *)(puVar3[2] + uVar4 * 4);
        while (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 4);
          FUN_00796cd8(iVar2);
          iVar2 = iVar1;
        }
        uVar4 = uVar4 + 1;
        *(undefined4 *)(puVar3[2] + -4 + uVar4 * 4) = 0;
      } while (uVar4 < (uint)puVar3[1]);
    }
    *puVar3 = 0;
    puVar3 = DAT_0088f2d0;
    if (DAT_0088f2d0 != (undefined4 *)0x0) {
      uVar4 = 0;
      if (DAT_0088f2d0[1] != 0) {
        do {
          iVar2 = *(int *)(puVar3[2] + uVar4 * 4);
          while (iVar2 != 0) {
            iVar1 = *(int *)(iVar2 + 4);
            FUN_00796cd8(iVar2);
            iVar2 = iVar1;
          }
          uVar4 = uVar4 + 1;
          *(undefined4 *)(puVar3[2] + -4 + uVar4 * 4) = 0;
        } while (uVar4 < (uint)puVar3[1]);
      }
      *puVar3 = 0;
      FUN_00796cd8(puVar3[2]);
      FUN_00796cd8(puVar3);
    }
    DAT_0088f2d0 = (undefined4 *)0x0;
  }
  _DAT_0088f2ac = _DAT_0088f28c;
  DAT_0088f2ae._2_2_ = DAT_0088f28e._2_2_;
  DAT_0088f2d4 = 0;
  return;
}


