// FUN_00415570 @ 415570 size=200

undefined4 __fastcall FUN_00415570(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_100 [64];
  
  iVar1 = *(int *)(param_1 + 0x62);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(iVar1 + 0x35e) = *(int *)(iVar1 + 0x35e) + -1;
  iVar1 = *(int *)(param_1 + 0x62);
  if (*(int *)(iVar1 + 0x35e) == 0) {
    puVar5 = (undefined4 *)(iVar1 + 0x25e);
    puVar6 = local_100;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar4 = FUN_004090f0(DAT_0088ebe4);
    piVar2 = (int *)0x0;
    for (piVar3 = *(int **)(DAT_0088ebe8 + iVar4 * 4); piVar3 != (int *)0x0;
        piVar3 = (int *)piVar3[1]) {
      if (*piVar3 == iVar1) {
        if (piVar3 != (int *)0x0) {
          if (piVar2 == (int *)0x0) {
            *(int *)(DAT_0088ebe8 + iVar4 * 4) = piVar3[1];
          }
          else {
            piVar2[1] = piVar3[1];
          }
          FUN_00796cd8(piVar3);
          DAT_0088ebe0 = DAT_0088ebe0 + -1;
        }
        break;
      }
      piVar2 = piVar3;
    }
    if (*(undefined4 **)(param_1 + 0x62) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x62))(1);
    }
    *(undefined4 *)(param_1 + 0x62) = 0;
  }
  return 1;
}


