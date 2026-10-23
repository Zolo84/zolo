// FUN_00430360 @ 430360 size=139

void __thiscall FUN_00430360(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char local_100 [256];
  
  *(undefined1 *)(param_1 + 0x11e) = 1;
  FUN_007a630a(local_100,s_scenarios__s_0083b864,param_2);
  uVar2 = 0xffffffff;
  iVar4 = 0;
  iVar3 = 0;
  pcVar5 = local_100;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    do {
      cVar1 = local_100[iVar3];
      if (((cVar1 != '+') && (cVar1 != '?')) && (cVar1 != '*')) {
        *(char *)(param_1 + 0x10 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(~uVar2 - 1));
  }
  *(undefined1 *)(param_1 + 0x10 + iVar4) = 0;
  *(undefined1 *)(param_1 + 0x116) = 1;
  *(undefined4 *)(param_1 + 0x118) = param_3;
  *(undefined1 *)(param_1 + 0x11c) = param_4;
  return;
}


