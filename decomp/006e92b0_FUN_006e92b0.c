// FUN_006e92b0 @ 6e92b0 size=66

void FUN_006e92b0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  iVar1 = *DAT_00d12b40;
  puVar2 = (undefined1 *)(iVar1 + 0x10b);
  puVar3 = &DAT_00d3635a;
  do {
    puVar2[-0xfb] = puVar3[1];
    *puVar2 = *puVar3;
    puVar2[0xfb] = puVar3[5];
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 0x1a;
  } while ((int)(puVar2 + (-0x10b - iVar1)) < 0xfb);
  return;
}


