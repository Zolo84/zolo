// FUN_00439630 @ 439630 size=111

void __fastcall FUN_00439630(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  FUN_00439520();
  uVar2 = 0xffffffff;
  pcVar3 = *(char **)(param_1 + 0x26);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  do {
    uVar2 = uVar2 - 1;
    if ((int)uVar2 < 1) goto LAB_00439672;
  } while ((*(char **)(param_1 + 0x26))[uVar2] != '\\');
  FUN_00436a00(s__070________0083bae8,0x20000,1,&DAT_0088f28c);
LAB_00439672:
  FUN_004396a0(*(undefined4 *)(param_1 + 0x26),*(undefined4 *)(param_1 + 0x2e),1);
  FUN_004396a0(*(undefined4 *)(param_1 + 0x26),*(undefined4 *)(param_1 + 0x2e),0);
  FUN_004353e0();
  return;
}


