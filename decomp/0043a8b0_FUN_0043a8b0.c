// FUN_0043a8b0 @ 43a8b0 size=462

void __thiscall FUN_0043a8b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_100 [256];
  
  iVar3 = 4;
  puVar1 = param_1 + 8;
  do {
    puVar1[-8] = 0;
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_007a630a(local_100,s_gfx_interface__s_plain_c_bmp_0083bc90,param_2);
  uVar2 = FUN_0043aad0(local_100);
  *param_1 = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_plain_l_bmp_0083bc70,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[4] = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_plain_r_bmp_0083bc50,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[8] = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_over_c_bmp_0083bc34,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[1] = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_over_l_bmp_0083bc18,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[5] = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_over_r_bmp_0083bbfc,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[9] = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_down_c_bmp_0083bbe0,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[2] = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_down_l_bmp_0083bbc4,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[6] = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_down_r_bmp_0083bba8,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[10] = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_dis_c_bmp_0083bb8c,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[3] = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_dis_l_bmp_0083bb70,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[7] = uVar2;
  FUN_007a630a(local_100,s_gfx_interface__s_dis_r_bmp_0083bb54,param_2);
  uVar2 = FUN_0043aad0(local_100);
  param_1[0xb] = uVar2;
  return;
}


