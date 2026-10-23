// FUN_00411598 @ 411598 size=1467

undefined4 __thiscall FUN_00411598(int param_1,undefined4 param_2,int param_3,char *param_4)

{
  size_t sVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_284;
  undefined4 local_27c;
  undefined4 local_278;
  int *local_274;
  int local_230;
  int local_22c;
  undefined1 local_228 [256];
  int local_128;
  int local_124;
  size_t local_120;
  char local_11c [256];
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007b99d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007a630a(local_11c,s_gfx_fonts__d__s_0082f03c,DAT_00dc1544,param_2);
  local_128 = FUN_007a6615(local_11c,&DAT_0082f04c);
  if (local_128 == 0) {
    FUN_007a630a(local_11c,s_gfx_fonts__s_0082f050,param_2);
    local_128 = FUN_007a6615(local_11c,&DAT_0082f060);
    if (local_128 == 0) {
      FUN_007a630a(local_228,s_didnt_find_FONT____s_0082f064,param_2);
      FUN_00429a50(local_228);
      ExceptionList = local_10;
      return 0;
    }
  }
  FUN_007a6429(local_128);
  (**(code **)(*DAT_0088ebb4 + 0x18))(param_2,param_1);
  sVar1 = _strlen(local_11c);
  pvVar2 = operator_new(sVar1 + 1);
  *(void **)(param_1 + 0xc) = pvVar2;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_007a74f0(*(undefined4 *)(param_1 + 0xc),local_11c);
    local_120 = 0;
    if (param_4 != (char *)0x0) {
      local_120 = _strlen(param_4);
    }
    pvVar2 = operator_new(0x28);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_274 = (int *)0x0;
    }
    else {
      local_274 = (int *)FUN_0040e950(local_11c);
    }
    local_8 = 0xffffffff;
    local_18 = local_274;
    if (local_274 == (int *)0x0) {
      FUN_00429a00(s_bitmap_error__s__0082f07c,param_2);
      uVar3 = 0;
    }
    else {
      *(int *)(param_1 + 0x10) = param_3;
      *(int *)(param_1 + 4) = local_274[1];
      local_124 = local_274[6];
      local_14 = (**(code **)(*local_274 + 8))();
      pvVar2 = operator_new(0x400);
      *(void **)(param_1 + 8) = pvVar2;
      for (local_1c = 0; local_1c < 0x100; local_1c = local_1c + 1) {
        *(undefined4 *)(*(int *)(param_1 + 8) + local_1c * 4) = 0;
      }
      pvVar2 = operator_new(8);
      local_8 = 1;
      if (pvVar2 == (void *)0x0) {
        local_278 = 0;
      }
      else {
        local_278 = FUN_00411210();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x80) = local_278;
      *(undefined2 *)(*(int *)(*(int *)(param_1 + 8) + 0x80) + 4) = 0;
      **(undefined4 **)(*(int *)(param_1 + 8) + 0x80) = 0;
      *(short *)(*(int *)(*(int *)(param_1 + 8) + 0x80) + 6) = (short)(*(int *)(param_1 + 4) / 6);
      if (param_4 == (char *)0x0) {
        for (local_230 = 0x21; local_230 < 0x100; local_230 = local_230 + 1) {
          pvVar2 = operator_new(8);
          local_8 = 3;
          if (pvVar2 == (void *)0x0) {
            local_284 = 0;
          }
          else {
            local_284 = FUN_00411210();
          }
          local_8 = 0xffffffff;
          *(undefined4 *)(*(int *)(param_1 + 8) + local_230 * 4) = local_284;
          FUN_00411259(local_124,*(undefined4 *)(param_1 + 4),param_3,local_14);
          local_14 = local_14 + local_124 * param_3;
        }
        (**(code **)(*local_18 + 0xc))();
        if (local_18 != (int *)0x0) {
          (**(code **)*local_18)(1);
        }
        uVar3 = 1;
      }
      else {
        for (local_22c = 0; local_22c < (int)local_120; local_22c = local_22c + 1) {
          pvVar2 = operator_new(8);
          local_8 = 2;
          if (pvVar2 == (void *)0x0) {
            local_27c = 0;
          }
          else {
            local_27c = FUN_00411210();
          }
          local_8 = 0xffffffff;
          *(undefined4 *)(*(int *)(param_1 + 8) + param_4[local_22c] * 4) = local_27c;
          FUN_00411259(local_124,*(undefined4 *)(param_1 + 4),param_3,local_14);
          local_14 = local_14 + local_124 * param_3;
        }
        (**(code **)(*local_18 + 0xc))();
        if (local_18 != (int *)0x0) {
          (**(code **)*local_18)(1);
        }
        uVar3 = 1;
      }
    }
  }
  ExceptionList = local_10;
  return uVar3;
}


