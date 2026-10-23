// FUN_00753270 @ 753270 size=360

void __fastcall FUN_00753270(int param_1)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  tagMSG local_1c;
  
  iVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
  while (iVar2 != 0) {
    BVar3 = GetMessageA(&local_1c,(HWND)0x0,0,0);
    if (BVar3 != 0) {
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
    }
    iVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
  }
  (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x88) + 0x232);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = &DAT_007f0c98;
  }
  cVar1 = FUN_00582170(puVar4,0);
  if (cVar1 == '\0') {
    if ((DAT_00bd1500 != (undefined4 *)0x0) && (FUN_0057be80(), DAT_00bd1500 != (undefined4 *)0x0))
    {
      (**(code **)*DAT_00bd1500)(1);
    }
    DAT_00bd1500 = (undefined4 *)0x0;
    FUN_005820d0();
    FUN_00582270();
    FUN_005821e0(1,0x10001,0);
    (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
    return;
  }
  FUN_005823b0();
  FUN_006cd7d0(s_localhost_00874c60);
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x88) + 0x232);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = &DAT_007f0c98;
  }
  FUN_006cd7a0(puVar4);
  *(undefined4 *)(param_1 + 0x84) = 7;
  FUN_006ff680(7,param_1);
  FUN_00750750();
  (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
  return;
}


