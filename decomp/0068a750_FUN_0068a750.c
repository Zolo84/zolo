// FUN_0068a750 @ 68a750 size=229

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0068a750(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar6 = (**(code **)(*(int *)(param_2 + 0x22) + 4))();
  uVar10 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  uVar7 = (uint)((ulonglong)uVar10 >> 0x20);
  iVar6 = iVar6 + (int)uVar10;
  if (iVar6 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x26);
    uVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    param_1 = 0;
    piVar4 = (int *)*puVar1;
    while (piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      switch(*(undefined4 *)(*piVar4 + 0x134)) {
      case 3:
        param_1 = param_1 + 1;
        piVar4 = piVar2;
        break;
      case 4:
      case 5:
        iVar8 = iVar8 + 1;
        piVar4 = piVar2;
        break;
      default:
        uVar7 = uVar7 + 1;
        piVar4 = piVar2;
        break;
      case 9:
      case 0xb:
        iVar9 = iVar9 + 1;
        piVar4 = piVar2;
      }
    }
    puVar5 = *(uint **)(param_2 + 0x26);
    while (puVar5 != (uint *)0x0) {
      uVar7 = *puVar5;
      switch(*(undefined4 *)(uVar7 + 0x134)) {
      case 3:
        param_1 = param_1 + 1;
        break;
      case 4:
      case 5:
        iVar8 = iVar8 + 1;
        break;
      case 9:
      case 0xb:
        iVar9 = iVar9 + 1;
      }
      puVar5 = (uint *)puVar5[2];
    }
    if (((iVar9 < 1) && (fVar3 = (float)(param_1 + iVar8) / (float)iVar6, _DAT_007e86e4 < fVar3)) &&
       (fVar3 < _DAT_007e86e0)) {
      return CONCAT44(uVar7,1);
    }
  }
  return (ulonglong)uVar7 << 0x20;
}


