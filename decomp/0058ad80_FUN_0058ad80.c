// FUN_0058ad80 @ 58ad80 size=113

void __thiscall FUN_0058ad80(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  uVar2 = 0;
  do {
    *(undefined1 *)(uVar2 + param_1 + 8 + param_2 * 0x15c) =
         *(undefined1 *)(param_1 + 8 + param_3 * 0x15c + uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x158);
  pbVar3 = (byte *)(param_2 + 8 + param_1);
  pbVar4 = (byte *)(param_3 + 8 + param_1);
  iVar5 = 0x158;
  do {
    bVar1 = *pbVar4;
    *pbVar3 = bVar1;
    if (0x5f < bVar1) {
      *pbVar3 = 0x5f;
    }
    pbVar3 = pbVar3 + 0x15c;
    pbVar4 = pbVar4 + 0x15c;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


