// FUN_0058cfc0 @ 58cfc0 size=119

undefined4 * __thiscall
FUN_0058cfc0(undefined4 *param_1,undefined2 param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_00433570(s_gfx_interface_eyr_eyr_btn_check__00857ffc,0,0xffffffff);
  uVar2 = 0xffffffff;
  *param_1 = &PTR_FUN_007eafb4;
  param_1[2] = &PTR_LAB_007eafb0;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007eafac;
  do {
    pcVar4 = param_3;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)param_1 + 0xaa);
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
  *(undefined2 *)((int)param_1 + 0x1ae) = param_2;
  *(undefined4 *)((int)param_1 + 0x1aa) = param_4;
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  return param_1;
}


