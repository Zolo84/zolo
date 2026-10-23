// FUN_0045b830 @ 45b830 size=94

bool __fastcall FUN_0045b830(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  for (iVar1 = param_1[1]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    iVar2 = *param_1;
    FUN_00459c00(iVar1);
    cVar3 = (**(code **)(iVar2 + 0xc))();
    if (cVar3 != '\0') break;
  }
  return iVar1 != 0;
}


