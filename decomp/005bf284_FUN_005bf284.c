// FUN_005bf284 @ 5bf284 size=673

/* WARNING: Removing unreachable block (ram,0x005bf51a) */

undefined * FUN_005bf284(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined *local_44 [4];
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = &DAT_00be4b48 + param_2 * 0x12 + *(int *)(param_1 + 6) * 0x9d8;
  local_10 = local_10 & 0xffffff00;
  local_14 = *(undefined4 **)(local_8 + 4);
  do {
    if (local_14 == (undefined4 *)0x0) {
      local_c = 1;
      local_18 = FUN_0042b6c9(s_DIVISION_0085984c);
      if ((param_2 == 0x1c) || (param_2 == 0x1d)) {
        local_18 = FUN_0042b6c9(s_FLOTILLA_00859858);
      }
      while( true ) {
        local_44[0] = &DAT_00859864;
        local_44[1] = &DAT_00859868;
        local_44[2] = &DAT_0085986c;
        local_44[3] = &DAT_00859870;
        local_34 = &DAT_00859874;
        local_30 = &DAT_00859878;
        local_2c = &DAT_0085987c;
        local_28 = &DAT_00859880;
        local_24 = &DAT_00859884;
        local_20 = &DAT_00859888;
        if (local_c % 100 == 0xd) {
          uVar3 = FUN_004ff320(param_2,local_18);
          uVar4 = FUN_0042b6c9(&DAT_0085988c);
          FUN_007a630a(&DAT_00be3210,s__d_s__s___s_00859890,local_c,uVar4,uVar3);
        }
        else if (local_c % 100 == 0xc) {
          uVar3 = FUN_004ff320(param_2,local_18);
          uVar4 = FUN_0042b6c9(&DAT_0085989c);
          FUN_007a630a(&DAT_00be3210,s__d_s__s___s_008598a0,local_c,uVar4,uVar3);
        }
        else if (local_c % 100 == 0xb) {
          uVar3 = FUN_004ff320(param_2,local_18);
          uVar4 = FUN_0042b6c9(&DAT_008598ac);
          FUN_007a630a(&DAT_00be3210,s__d_s__s___s_008598b0,local_c,uVar4,uVar3);
        }
        else {
          uVar3 = FUN_004ff320(param_2,local_18);
          uVar4 = FUN_0042b6c9(local_44[local_c % 10]);
          FUN_007a630a(&DAT_00be3210,s__d_s__s___s_008598bc,local_c,uVar4,uVar3);
        }
        cVar2 = FUN_005beaed(param_1,&DAT_00be3210,param_2);
        if (cVar2 == '\0') break;
        local_c = local_c + 1;
      }
      return &DAT_00be3210;
    }
    puVar1 = local_14 + 2;
    local_1c = (undefined *)*local_14;
    local_14 = (undefined4 *)*puVar1;
  } while (((local_10 & 0xff) != 0) ||
          (cVar2 = FUN_005beaed(param_1,local_1c,param_2), cVar2 != '\0'));
  local_10 = CONCAT31(local_10._1_3_,1);
  FUN_007a74f0(&DAT_00be3210,local_1c,extraout_var);
  return local_1c;
}


