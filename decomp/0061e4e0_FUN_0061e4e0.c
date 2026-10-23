// FUN_0061e4e0 @ 61e4e0 size=100

void FUN_0061e4e0(undefined4 param_1,int param_2)

{
  undefined1 local_100 [256];
  
  if (param_2 == 0) {
    FUN_0061e550(param_1,&DAT_0088ebf8,0);
    return;
  }
  FUN_007a630a(local_100,s_gfx_interface_pics__s_bmp_0085d184,*(undefined4 *)(param_2 + 0x2e));
  FUN_0061e550(param_1,local_100,*(undefined4 *)(param_2 + 0x1e));
  return;
}


