// FUN_0058e490 @ 58e490 size=672

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0058e490(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float local_2e4;
  int local_2e0;
  undefined **local_2dc;
  undefined **local_2d4;
  undefined **local_25e;
  void *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined2 local_11c;
  undefined4 local_11a;
  undefined4 local_116;
  float local_112;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9bce;
  local_c = ExceptionList;
  local_128 = 0;
  local_124 = 0x12d;
  local_120 = 0;
  ExceptionList = &local_c;
  local_12c = operator_new(0x4b4);
  local_4 = 0;
  FUN_0058cfc0(0,&DAT_00858094,0);
  local_11c = 0;
  local_11a = 0;
  local_116 = 0;
  local_112 = 0.0;
  local_2dc = &PTR_FUN_007eb0b0;
  local_2d4 = &PTR_LAB_007eb0ac;
  local_25e = &PTR_LAB_007eb0a8;
  local_4 = 1;
  do {
    while( true ) {
      while (iVar3 = FUN_00535490(), iVar3 != 1) {
        if (iVar3 == 2) {
          local_4 = 2;
          FUN_004338f0();
          FUN_00796cd8(*(undefined4 *)
                        (-(uint)(&stack0x00000000 != (undefined1 *)0x2dc) & (uint)&local_12c));
          ExceptionList = local_c;
          return 0xfffffffe;
        }
        piVar4 = (int *)FUN_00534391();
        if (*piVar4 == 4) {
          FUN_005343dc();
          local_4 = 3;
          FUN_004338f0();
          FUN_00796cd8(*(undefined4 *)
                        (-(uint)(&stack0x00000000 != (undefined1 *)0x2dc) & (uint)&local_12c));
          ExceptionList = local_c;
          return 0;
        }
      }
      iVar3 = FUN_004af6b0(param_1 + 2);
      if (iVar3 != 0) break;
      FUN_005349b0(s_unknown_country_tag_00858080);
    }
    FUN_00429d50(param_1 + 0x104,local_10c);
    piVar4 = *(int **)(local_2e0 + 0x11c);
    do {
      if (piVar4 == (int *)0x0) goto LAB_0058e5bc;
      piVar1 = (int *)piVar4[2];
      piVar2 = (int *)*piVar4;
      iVar3 = FUN_007a8730((int)piVar2 + 0xaa,local_10c);
      piVar4 = piVar1;
    } while (iVar3 != 0);
    if (piVar2 == (int *)0x0) {
LAB_0058e5bc:
      while (piVar4 = (int *)FUN_00534391(), *piVar4 != 4) {
        piVar4 = (int *)FUN_00534391();
        if (*piVar4 == 0x524) {
          FUN_005343dc();
          fVar5 = (float10)FUN_00429d80(*param_1 + 0x10);
          local_2e4 = (float)fVar5;
          if ((float10)_DAT_007e3380 <= fVar5) {
            if (_DAT_007eb018 < local_2e4) {
              local_2e4 = 1e+06;
            }
          }
          else {
            local_2e4 = 0.0;
          }
          FUN_0058e740(&local_2e4);
          if (local_112 < local_2e4) {
            local_112 = local_2e4;
          }
        }
        piVar4 = (int *)FUN_00534391();
        if (*piVar4 == 8) {
          FUN_005343dc();
        }
      }
      FUN_005343dc();
    }
    else {
      (**(code **)(*piVar2 + 8))(param_1);
    }
  } while( true );
}


