// FUN_0040b580 @ 40b580 size=189

int __thiscall
FUN_0040b580(int param_1,int param_2,short param_3,short param_4,short param_5,short param_6)

{
  short sVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x34) + 10);
  sVar3 = param_3 + 1;
  local_4 = 0;
  if (sVar3 == sVar1) {
    return 0;
  }
  iVar4 = (int)param_6;
  iVar6 = (int)param_5 * (int)param_4;
  cVar2 = *(char *)(iVar4 + iVar6 + (int)param_3 + param_2);
  iVar5 = (int)sVar3;
  if (cVar2 != *(char *)(iVar4 + iVar6 + (int)sVar3 + param_2)) {
    do {
      if (cVar2 == '\0') {
        return local_4;
      }
      if (cVar2 == '\x01') {
        return local_4;
      }
      local_4 = local_4 + 1;
      sVar3 = sVar3 + 1;
      if (sVar3 == sVar1) {
        return local_4;
      }
      if (local_4 == 0x3e) {
        return 0x3e;
      }
      cVar2 = *(char *)((int)param_5 * (int)param_4 + iVar4 + iVar5 + param_2);
      iVar5 = (int)sVar3;
    } while (cVar2 != *(char *)(iVar4 + iVar6 + (int)sVar3 + param_2));
  }
  return local_4;
}


