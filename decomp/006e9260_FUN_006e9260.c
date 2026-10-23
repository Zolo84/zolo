// FUN_006e9260 @ 6e9260 size=66

void FUN_006e9260(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar4 = &DAT_00d3635a;
  iVar1 = *DAT_00d12b40;
  puVar2 = (undefined1 *)(iVar1 + 0x10b);
  do {
    puVar3 = puVar2 + 1;
    puVar4[1] = puVar2[-0xfb];
    *puVar4 = *puVar2;
    puVar4[5] = puVar2[0xfb];
    puVar4 = puVar4 + 0x1a;
    puVar2 = puVar3;
  } while ((int)(puVar3 + (-0x10b - iVar1)) < 0xfb);
  return;
}


