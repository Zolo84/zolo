// FUN_00417740 @ 417740 size=388

void __thiscall FUN_00417740(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 local_100 [256];
  
  switch(param_2) {
  case 0:
    FUN_007a630a(local_100,s_gfx_map_landscape_Plains_d_bmp_0082f414,param_3);
    (**(code **)(*param_1 + 0x2c))(local_100);
    pcVar2 = s_landscape_palette_bmp_0082f3fc;
    break;
  case 1:
    FUN_007a630a(local_100,s_gfx_map_landscape_trees_d_bmp_0082f3dc,param_3);
    (**(code **)(*param_1 + 0x2c))(local_100);
    pcVar2 = s_trees_palette_bmp_0082f3c8;
    break;
  case 2:
    FUN_007a630a(local_100,s_gfx_map_landscape_Mountain_d_bmp_0082f3a4,param_3);
    (**(code **)(*param_1 + 0x2c))(local_100);
    pcVar2 = s_mountain_palette_bmp_0082f38c;
    break;
  case 3:
    FUN_007a630a(local_100,s_gfx_map_landscape_Desert_d_bmp_0082f304,param_3);
    (**(code **)(*param_1 + 0x2c))(local_100);
    pcVar2 = s_desert_palette_bmp_0082f2f0;
    break;
  case 4:
    FUN_007a630a(local_100,s_gfx_map_landscape_Marsh_d_bmp_0082f2d0,param_3);
    (**(code **)(*param_1 + 0x2c))(local_100);
    pcVar2 = s_marsh_palette_bmp_0082f2bc;
    break;
  case 5:
    FUN_007a630a(local_100,s_gfx_map_landscape_hills_d_bmp_0082f338,param_3);
    (**(code **)(*param_1 + 0x2c))(local_100);
    pcVar2 = s_hills_palette_bmp_0082f324;
    break;
  case 6:
    FUN_007a630a(local_100,s_gfx_map_landscape_djungle_d_bmp_0082f36c,param_3);
    (**(code **)(*param_1 + 0x2c))(local_100);
    pcVar2 = s_djungle_palette_bmp_0082f358;
    break;
  default:
    goto switchD_00417757_default;
  }
  uVar1 = FUN_00413d60(pcVar2);
  FUN_00415f20(uVar1);
  param_1[0x25] = param_3;
switchD_00417757_default:
  return;
}


