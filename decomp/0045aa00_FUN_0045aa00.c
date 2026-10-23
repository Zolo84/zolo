// FUN_0045aa00 @ 45aa00 size=76

bool __fastcall FUN_0045aa00(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  for (iVar1 = param_1[1]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 10)) {
    iVar2 = *param_1;
    FUN_00446d10(iVar1);
    cVar3 = (**(code **)(iVar2 + 0xc))();
    if (cVar3 != '\0') break;
  }
  return iVar1 != 0;
}


