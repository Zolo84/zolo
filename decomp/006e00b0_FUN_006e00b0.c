// FUN_006e00b0 @ 6e00b0 size=200

void __fastcall FUN_006e00b0(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007d9c93;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7cf0;
  param_1[2] = &PTR_LAB_007f7cec;
  local_4 = 1;
  iVar1 = DAT_00893530 + 0x14;
  FUN_0042e8b0();
  cVar2 = FUN_0042ddd0(iVar1);
  if (cVar2 == '\0') {
    FUN_0042cc70();
  }
  if (*(undefined4 **)((int)param_1 + 0x6a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x6a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x66) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x66))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x6e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x6e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x5e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x5e))(1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_007a8882(param_1 + 0x1f,0x3e,0x20,&LAB_0057b1f0);
  local_4 = 0xffffffff;
  FUN_00441ec0();
  ExceptionList = pvStack_c;
  return;
}


