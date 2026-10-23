// FUN_00743a50 @ 743a50 size=263

void __fastcall FUN_00743a50(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  BOOL BVar6;
  int iVar7;
  undefined4 *puStack_4;
  
  *param_1 = &PTR_FUN_007fa1a0;
  iVar7 = *(int *)((int)param_1 + 0x2e);
  puStack_4 = param_1;
  while (iVar7 != 0) {
    piVar2 = (int *)**(int **)((int)param_1 + 0x2a);
    puVar3 = *(undefined4 **)(**(int **)((int)param_1 + 0x2a) + 8);
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_00796cd8(piVar2);
    *(int *)((int)param_1 + 0x2e) = *(int *)((int)param_1 + 0x2e) + -1;
    FUN_00796cd8(*puVar3);
    FUN_00796cd8(puVar3);
    iVar7 = *(int *)((int)param_1 + 0x2e);
  }
  if ((*(char *)((int)param_1 + 0x32) != '\0') &&
     (*(undefined4 **)((int)param_1 + 0x36) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x36))(1);
  }
  *(undefined4 *)((int)param_1 + 0xe) = &PTR_FUN_007fa1d8;
  BVar6 = CloseHandle(*(HANDLE *)((int)param_1 + 0x22));
  if (BVar6 == 0) {
    FUN_0074bc80(s_CloseHandle__mutex__failed__0087459c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x50);
  }
  iVar7 = *(int *)((int)param_1 + 0x16);
  if (iVar7 != 0) {
    cVar1 = *(char *)(iVar7 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar7 + -1));
    }
    else {
      *(char *)(iVar7 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  if ((undefined4 *)((int)param_1 + 0xe) == (undefined4 *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)param_1 + 0x26;
  }
  puVar3 = *(undefined4 **)(iVar7 + 4);
  puVar5 = (undefined4 *)*puVar3;
  while (puVar5 != puVar3) {
    puVar4 = (undefined4 *)*puVar5;
    FUN_00744360(&puStack_4,puVar5);
    puVar5 = puVar4;
  }
  FUN_00796cd8(*(undefined4 *)(iVar7 + 4));
  *(undefined4 *)(iVar7 + 4) = 0;
  *(undefined4 *)(iVar7 + 8) = 0;
  return;
}


