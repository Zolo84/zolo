// FUN_006f5650 @ 6f5650 size=115

undefined4 __fastcall FUN_006f5650(int param_1)

{
  char cVar1;
  
  FUN_0040e5f0(s_avi_euintro_avi_0086f928,1,1);
  cVar1 = FUN_0042c9c0(0xf);
  if (cVar1 == '\0') {
    FUN_00429a50(s_Fatal_error__Could_not_initializ_0086f8fc);
  }
  FUN_00583ac0(800,600,0x10,0);
  FUN_005846f0();
  FUN_006d37e0();
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_006ee4e0();
  return 1;
}


