// FUN_0042e830 @ 42e830 size=102

undefined4 * __thiscall FUN_0042e830(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  param_1[2] = param_3;
  uVar2 = 0xffffffff;
  *param_1 = &PTR_LAB_007e3f0c;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)((int)param_1 + 0x11f) = 0;
  *(undefined1 *)((int)param_1 + 0x116) = 0;
  *(undefined1 *)((int)param_1 + 0x11e) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  do {
    pcVar4 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)(param_1 + 4);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_0042efb0();
  return param_1;
}


