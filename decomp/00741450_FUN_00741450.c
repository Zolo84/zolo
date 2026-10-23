// FUN_00741450 @ 741450 size=161

undefined4 * __thiscall
FUN_00741450(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 unaff_SI;
  undefined4 uVar2;
  undefined1 local_191;
  undefined1 local_190 [400];
  
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined4 *)((int)param_1 + 10) = param_4;
  *(undefined1 *)((int)param_1 + 0xe) = local_191;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 1;
  *(undefined4 *)((int)param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x36) = 0xffffcfc7;
  *param_1 = &PTR_FUN_007fa188;
  iVar1 = Ordinal_115(0x202,local_190);
  if (iVar1 == 0) {
    if (((char)unaff_SI == '\x02') && ((char)((ushort)unaff_SI >> 8) == '\x02')) {
      return param_1;
    }
    uVar2 = 0x2e6;
  }
  else {
    uVar2 = 0x2d5;
  }
  FUN_0074bc80(s_Could_not_find_a_usable_WinSock_D_00874360,s_Unknown_method_00874398,
               s_C__Dev_HoI2_Projects_Darkest_Hou_008743a8,uVar2);
  return param_1;
}


