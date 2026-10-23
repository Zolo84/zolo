// FUN_0062ff40 @ 62ff40 size=327

void __thiscall FUN_0062ff40(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x172) = param_2;
  *(undefined1 *)(param_1 + 0x123) = 0;
  *(undefined1 *)(param_1 + 0x122) = 0;
  *(undefined4 *)(param_1 + 0x152) = 0;
  *(undefined4 *)(param_1 + 0x156) = 0;
  *(undefined1 *)(param_1 + 0x170) = 1;
  *(undefined4 *)(param_1 + 0x14e) = 1;
  *(undefined4 *)(param_1 + 0x14a) = 1;
  pcVar1 = s_gfx_interface_ill_inst_airbase_b_00860df8;
  switch(param_2) {
  case 3:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_navalbase_00860dd0);
    return;
  case 5:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_airbase_b_00860df8);
    return;
  case 6:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_factory_b_00860dac);
    return;
  case 7:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_aa_bmp_00860d8c);
    return;
  case 8:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_lfort_bmp_00860d68);
    return;
  case 9:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_cfort_bmp_00860d44);
    return;
  case 10:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_radar_bmp_00860d20);
    return;
  case 0xb:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_nuclear_b_00860cfc);
    return;
  case 0xc:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_rocket_bm_00860cd8);
    return;
  case 0xd:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_infra_bmp_00860cb4);
    return;
  case 0xe:
    pcVar1 = s_gfx_interface_ill_inst_escort_bm_00860c6c;
    break;
  case 0xf:
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(s_gfx_interface_ill_inst_convoy_bm_00860c90);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x16c) + 0x2c))(pcVar1);
  return;
}


