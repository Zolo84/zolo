// FUN_00695520 @ 695520 size=197

int __fastcall FUN_00695520(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  
  cVar5 = FUN_0044beb0();
  if ((cVar5 != '\0') && (*(int *)(*(int *)(param_1 + 10) + 0x3350) != 0)) {
    FUN_006a9d50();
    piVar4 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x3350) + 0x22) + 4);
    while (piVar4 != (int *)0x0) {
      piVar1 = (int *)piVar4[2];
      iVar2 = (&DAT_0089cad8)[*piVar4];
      piVar4 = piVar1;
      if (((iVar2 != *(int *)(param_1 + 10)) &&
          (cVar5 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xb8) + 0x24))
                             (*(undefined4 *)(iVar2 + 6)), cVar5 == '\0')) &&
         ((&DAT_00dc0fd4)[*(int *)(iVar2 + 6)] == 0)) {
        piVar1 = *(int **)(iVar2 + 0xe86e);
        while (piVar1 != (int *)0x0) {
          piVar3 = (int *)piVar1[2];
          iVar2 = *piVar1;
          piVar1 = piVar3;
          if (((0 < *(int *)(iVar2 + 0x52)) && (cVar5 = FUN_004ca33c(), cVar5 != '\0')) &&
             (iVar6 = FUN_00695380(iVar2), 0 < iVar6)) {
            return iVar2;
          }
        }
      }
    }
  }
  return 0;
}


