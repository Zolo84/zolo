// FUN_006d3d10 @ 6d3d10 size=228

void __thiscall FUN_006d3d10(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = FUN_0042e8e0();
  if ((cVar1 == '\0') || (cVar1 = FUN_0042e900(), cVar1 == '\x01')) {
    FUN_006ff7d0(param_2);
    (**(code **)(*(int *)(param_1 + 0x24) + 4))(param_2);
    return;
  }
  if (((DAT_00d0ca90 == 0) || (iVar2 = FUN_0064c310(param_2), iVar2 == 0)) &&
     (iVar2 = (**(code **)(*(int *)(param_1 + 0x24) + 4))(param_2), iVar2 == 0)) {
    piVar3 = (int *)FUN_006436d0(0x39);
    iVar2 = (**(code **)(*piVar3 + 4))(param_2);
  }
  if ((DAT_00d1335e & 1) == 0) {
    DAT_00d1335e = DAT_00d1335e | 1;
    DAT_00d1334d = 0x35f < *(int *)(DAT_00bd1bac + 8);
  }
  if (iVar2 != 0) {
    return;
  }
  if (((DAT_00d1334d != '\0') || (cVar1 = FUN_006523c0(), cVar1 != '\0')) &&
     (iVar2 = (**(code **)(*(int *)(DAT_00d37ed0 + 0x12) + 4))(param_2), iVar2 != 0)) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x42) + 4))(param_2);
  return;
}


