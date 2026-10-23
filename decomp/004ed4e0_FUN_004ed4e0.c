// FUN_004ed4e0 @ 4ed4e0 size=260

bool __thiscall FUN_004ed4e0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = *(int *)(DAT_00ab27b4 + 0x28c + param_3 * 0x4b2);
  iVar1 = DAT_00ab27b4 + param_3 * 0x4b2;
  if (iVar2 != *(int *)(param_1 + 0x28c)) {
    switch(*(int *)(param_1 + 0x28c) + -99) {
    case 0:
      cVar3 = FUN_004ed1c0(param_2);
      if (cVar3 != '\0') {
        return false;
      }
      iVar1 = *(int *)(iVar1 + 0x28c);
      if ((100 < iVar1) && (iVar1 < 0x68)) {
        return true;
      }
      cVar3 = FUN_004ed1c0(param_2);
      break;
    case 1:
      cVar3 = FUN_004ed1c0(param_2);
      return cVar3 == '\0';
    case 2:
    case 3:
    case 4:
      if ((100 < iVar2) && (iVar2 < 0x68)) {
        return true;
      }
      if (iVar2 == 99) {
        cVar3 = FUN_004ed1c0(param_2);
        return cVar3 == '\0';
      }
      cVar3 = FUN_004ed1c0(param_2);
      break;
    default:
      goto switchD_004ed51d_default;
    }
    if ((cVar3 != '\0') && (cVar3 = FUN_004ed1c0(param_2), cVar3 != '\0')) {
      return false;
    }
  }
switchD_004ed51d_default:
  return true;
}


