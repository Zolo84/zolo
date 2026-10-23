// FUN_00523690 @ 523690 size=252

bool __thiscall FUN_00523690(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar2 = FUN_005129d0();
  if ((cVar2 != '\0') && (*(int *)((int)param_1 + 0x282) == param_2)) {
    if (param_2 != *(int *)((int)param_1 + 0x212)) {
      return true;
    }
    if ((((param_1[0x99] == 10) || (param_1[0x99] == 0xb)) &&
        (cVar2 = (**(code **)(*param_1 + 0x30))(), cVar2 != '\0')) &&
       (iVar3 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))(), 0 < iVar3)) {
      piVar1 = *(int **)((int)param_1 + 0x26);
      do {
        if (piVar1 == (int *)0x0) {
          cVar2 = FUN_0050bdb0();
          if (cVar2 == '\0') {
            return false;
          }
          cVar2 = FUN_0050bde0();
          if (cVar2 != '\0') {
            return false;
          }
          uVar4 = FUN_004e9370(param_1[3]);
          cVar2 = FUN_0050c570(uVar4);
          if (cVar2 != '\0') {
            return false;
          }
          FUN_004e9370(param_1[3]);
          cVar2 = FUN_004e5a40();
          if (cVar2 == '\0') {
            cVar2 = *(char *)((int)param_1 + 0x271);
          }
          else {
            cVar2 = (char)param_1[0x9c];
          }
          if (cVar2 == '\0') {
            return false;
          }
          uVar4 = (**(code **)(*param_1 + 0x18))();
          cVar2 = FUN_0050c360(uVar4);
          return cVar2 == '\0';
        }
        iVar3 = *piVar1;
        piVar1 = (int *)piVar1[2];
      } while (*(char *)(iVar3 + 0x157) == '\0');
    }
  }
  return false;
}


