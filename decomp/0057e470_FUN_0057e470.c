// FUN_0057e470 @ 57e470 size=166

void __fastcall FUN_0057e470(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007c8c8f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ead88;
  param_1[2] = &PTR_LAB_007ead84;
  local_4 = 1;
  if (param_1[3] != 0) {
    piVar3 = param_1 + 4;
    iVar2 = 0x40;
    do {
      iVar4 = 0x80;
      do {
        piVar1 = (int *)*piVar3;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *piVar3 = 0;
        }
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0057f0f0();
  local_4 = 0xffffffff;
  FUN_005807f0();
  ExceptionList = pvStack_c;
  return;
}


