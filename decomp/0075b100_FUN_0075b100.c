// FUN_0075b100 @ 75b100 size=98

uint __fastcall FUN_0075b100(int param_1)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  uVar2 = *(uint *)(param_1 + 200);
  if (((&DAT_0089cad8)[*(uint *)(param_1 + 200)] != 0) &&
     (iVar3 = 0, uVar2 = DAT_00877554, 0 < (int)DAT_00877554)) {
    do {
      psVar1 = (short *)FUN_0044ae20(local_8,iVar3);
      if ((*(int *)(psVar1 + 1) == *(int *)(param_1 + 0xe)) &&
         (*psVar1 == *(short *)(param_1 + 0xc))) {
        return CONCAT31((int3)(CONCAT22((short)((uint)psVar1 >> 0x10),*psVar1) >> 8),1);
      }
      iVar3 = iVar3 + 1;
      uVar2 = DAT_00877554;
    } while (iVar3 < (int)DAT_00877554);
  }
  return uVar2 & 0xffffff00;
}


