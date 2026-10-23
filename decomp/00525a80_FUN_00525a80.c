// FUN_00525a80 @ 525a80 size=142

int __fastcall FUN_00525a80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cStack_17;
  char cStack_16;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_8 [8];
  
  iVar2 = *(int *)(param_1 + 0x26);
  iVar3 = 0;
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 8);
    local_10 = *(undefined4 *)(DAT_00893530 + 0x14);
    local_c = *(undefined2 *)(DAT_00893530 + 0x18);
    puVar4 = (undefined4 *)FUN_0042e060(local_8,&local_10);
    cStack_16 = (char)((uint)*puVar4 >> 0x10);
    cStack_17 = (char)((uint)*puVar4 >> 8);
    iVar1 = (int)cStack_17 + ((int)cStack_16 + *(short *)(puVar4 + 1) * 0xc) * 0x1e;
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
  }
  return iVar3;
}


