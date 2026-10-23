// FUN_006d3980 @ 6d3980 size=710

void FUN_006d3980(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_300 [256];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  if (DAT_00dc3a00 == '\0') {
    if (DAT_00d0ca90 == 0) {
      FUN_007a630a(local_200,s_gfx_skins_default__s_0086ccd4,param_2);
    }
    else {
      FUN_007a630a(local_300,s_gfx_skins__s_s__s_0086cd28,DAT_00d0ca90 + 0x1b,DAT_00d0ca90 + 0x31a);
      FUN_007a630a(local_200,s_gfx_skins__s__s_0086cd04,DAT_00d0ca90 + 0x1b,param_2);
    }
    FUN_007a630a(local_100,s_gfx_skins_default__s_0086ccd4,param_2);
    iVar1 = FUN_007a6615(local_300,&DAT_0082eeb4);
    if (iVar1 == 0) {
      iVar1 = FUN_007a6615(local_200,&DAT_0082eeb4);
      if (iVar1 == 0) {
LAB_006d3afd:
        (**(code **)(*param_1 + 0x2c))(local_100);
        return;
      }
LAB_006d3c1f:
      FUN_007a6429(iVar1);
      (**(code **)(*param_1 + 0x2c))(local_200);
      return;
    }
  }
  else {
    if (DAT_00d0ca90 == 0) {
      FUN_007a630a(local_100,s_gfx_skins_default__s_0086ccd4,param_2);
      (**(code **)(*param_1 + 0x2c))(local_100);
      return;
    }
    FUN_007a630a(local_300,s__s_gfx_skins__s_s__s_0086cd3c,&DAT_00dc3a00,DAT_00d0ca90 + 0x1b,
                 DAT_00d0ca90 + 0x31a,param_2);
    iVar1 = FUN_007a6615(local_300,&DAT_0082eeb4);
    if (iVar1 == 0) {
      FUN_007a630a(local_300,s_gfx_skins__s_s__s_0086cd28,DAT_00d0ca90 + 0x1b,DAT_00d0ca90 + 0x31a,
                   param_2);
      iVar1 = FUN_007a6615(local_300,&DAT_0082eeb4);
      if (iVar1 == 0) {
        FUN_007a630a(local_200,s__s_gfx_skins__s__s_0086cd14,&DAT_00dc3a00,DAT_00d0ca90 + 0x1b,
                     param_2);
        iVar1 = FUN_007a6615(local_200,&DAT_0082eeb4);
        if (iVar1 == 0) {
          FUN_007a630a(local_200,s_gfx_skins__s__s_0086cd04,DAT_00d0ca90 + 0x1b,param_2);
          iVar1 = FUN_007a6615(local_200,&DAT_0082eeb4);
          if (iVar1 == 0) {
            FUN_007a630a(local_100,s__s_gfx_skins_default__s_0086ccec,&DAT_00dc3a00,param_2);
            iVar1 = FUN_007a6615(local_300,&DAT_0082eeb4);
            if (iVar1 != 0) {
              FUN_007a6429(iVar1);
              (**(code **)(*param_1 + 0x2c))(local_300);
              return;
            }
            FUN_007a630a(local_100,s_gfx_skins_default__s_0086ccd4,param_2);
            goto LAB_006d3afd;
          }
        }
        goto LAB_006d3c1f;
      }
    }
  }
  FUN_007a6429(iVar1);
  (**(code **)(*param_1 + 0x2c))(local_300);
  return;
}


