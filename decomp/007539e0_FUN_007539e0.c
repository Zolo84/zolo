// FUN_007539e0 @ 7539e0 size=815

undefined4 __thiscall
FUN_007539e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined1 param_7,int param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 local_1ac;
  undefined1 *puStack_1a8;
  undefined1 **ppuStack_1a4;
  undefined1 **ppuStack_1a0;
  undefined1 local_189;
  undefined1 *local_188;
  undefined1 local_184 [4];
  int local_180;
  undefined **local_178;
  undefined1 local_174 [16];
  undefined1 local_164 [16];
  undefined1 local_154 [20];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_118 [20];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc [63];
  
  if (param_2 == 0) {
    ppuStack_1a0 = (undefined1 **)0x1;
    ppuStack_1a4 = (undefined1 **)0x753a05;
    FUN_00674910();
    return 0xe;
  }
  if ((*(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0x10)) && (*(uint *)(param_1 + 0x14) != 0))
  {
    if (param_8 != 0) {
      cVar1 = *(char *)(param_8 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(param_8 + -1) = cVar1 + -1;
        return 2;
      }
      ppuStack_1a0 = (undefined1 **)(param_8 + -1);
      ppuStack_1a4 = (undefined1 **)0x753a59;
      FUN_00796cd8();
    }
    return 2;
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    ppuStack_1a0 = (undefined1 **)0x1;
    ppuStack_1a4 = (undefined1 **)0x753a83;
    FUN_00674910();
    return 7;
  }
  ppuStack_1a0 = &local_188;
  ppuStack_1a4 = (undefined1 **)0x753aa4;
  FUN_00748df0();
  if (local_188 != *(undefined1 **)(param_1 + 8)) {
    do {
      ppuStack_1a0 = (undefined1 **)param_3;
      ppuStack_1a4 = (undefined1 **)0x753abf;
      iVar2 = FUN_00676e10();
      if (iVar2 == 0) break;
      ppuStack_1a0 = (undefined1 **)0x753acc;
      FUN_0074a5d0();
    } while (local_188 != *(undefined1 **)(param_1 + 8));
  }
  if (local_188 != *(undefined1 **)(param_1 + 8)) {
    ppuStack_1a0 = (undefined1 **)0x1;
    ppuStack_1a4 = (undefined1 **)0x753af0;
    FUN_00674910();
    return 1;
  }
  ppuStack_1a0 = (undefined1 **)0x0;
  local_174[0] = local_189;
  ppuStack_1a4 = (undefined1 **)0x753b15;
  FUN_00674910();
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_0088ebf8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ppuStack_1a0 = (undefined1 **)(~uVar3 - 1);
  ppuStack_1a4 = (undefined1 **)&DAT_0088ebf8;
  puStack_1a8 = (undefined1 *)0x753b33;
  FUN_00674d80();
  ppuStack_1a0 = (undefined1 **)&local_189;
  ppuStack_1a4 = (undefined1 **)&DAT_0088ebf8;
  puStack_1a8 = (undefined1 *)0x753b46;
  FUN_00673c70();
  ppuStack_1a0 = (undefined1 **)&local_189;
  ppuStack_1a4 = (undefined1 **)&DAT_0088ebf8;
  puStack_1a8 = (undefined1 *)0x753b59;
  FUN_00673c70();
  ppuStack_1a0 = (undefined1 **)0x753b62;
  FUN_00748760();
  ppuStack_1a0 = (undefined1 **)0x753b6e;
  FUN_00748950();
  local_188 = (undefined1 *)&local_1ac;
  local_104 = 0;
  local_178 = &PTR_FUN_007fa22c;
  local_1ac = CONCAT31(local_1ac._1_3_,param_7);
  FUN_00674910(0);
  FUN_00674710(&param_7,0,DAT_007f33d8);
  FUN_0074b100(param_6,param_2,param_3,param_4,param_5);
  ppuStack_1a0 = (undefined1 **)0x753bea;
  ppuStack_1a0 = (undefined1 **)FUN_00753d10();
  local_fc[0] = param_6;
  ppuStack_1a4 = (undefined1 **)0x753bfe;
  FUN_00748e00();
  ppuStack_1a0 = (undefined1 **)local_fc;
  ppuStack_1a4 = &local_188;
  puStack_1a8 = (undefined1 *)0x753c12;
  FUN_00749540();
  ppuStack_1a0 = (undefined1 **)local_184;
  ppuStack_1a4 = &local_188;
  puStack_1a8 = (undefined1 *)0x753c25;
  FUN_00754320();
  ppuStack_1a0 = (undefined1 **)0x753c35;
  FUN_0074af70();
  ppuStack_1a0 = (undefined1 **)0x753c41;
  FUN_0074af70();
  ppuStack_1a0 = (undefined1 **)DAT_007f33d8;
  puStack_1a8 = local_174;
  ppuStack_1a4 = (undefined1 **)0x0;
  local_1ac = 0x753c57;
  FUN_00674710();
  puStack_1a8 = local_164;
  ppuStack_1a0 = (undefined1 **)DAT_007f33d8;
  ppuStack_1a4 = (undefined1 **)0x0;
  local_1ac = 0x753c6d;
  FUN_00674710();
  puStack_1a8 = local_154;
  ppuStack_1a0 = (undefined1 **)DAT_007f33d8;
  ppuStack_1a4 = (undefined1 **)0x0;
  local_1ac = 0x753c82;
  FUN_00674710();
  puStack_1a8 = local_140;
  ppuStack_1a0 = (undefined1 **)DAT_007f33d8;
  ppuStack_1a4 = (undefined1 **)0x0;
  local_1ac = 0x753c98;
  FUN_00674710();
  puStack_1a8 = local_130;
  ppuStack_1a0 = (undefined1 **)DAT_007f33d8;
  ppuStack_1a4 = (undefined1 **)0x0;
  local_1ac = 0x753cae;
  FUN_00674710();
  ppuStack_1a0 = (undefined1 **)local_118;
  *(undefined4 *)(local_180 + 0x68) = local_120;
  *(undefined4 *)(local_180 + 0x6c) = local_11c;
  ppuStack_1a4 = (undefined1 **)0x753ccf;
  FUN_007524b0();
  *(undefined4 *)(local_180 + 0x84) = local_104;
  *(undefined4 *)(local_180 + 0x88) = local_100;
  ppuStack_1a0 = (undefined1 **)0x753cf2;
  FUN_0074af70();
  ppuStack_1a0 = (undefined1 **)0x1;
  ppuStack_1a4 = (undefined1 **)0x753d00;
  FUN_00674910();
  return 0;
}


