// FUN_00419080 @ 419080 size=197

void FUN_00419080(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = DAT_0088ec00;
  if (DAT_0088ec00 != (undefined4 *)0x0) {
    uVar6 = 0;
    if (DAT_0088ec00[1] != 0) {
      do {
        piVar3 = *(int **)(puVar5[2] + uVar6 * 4);
        while (piVar3 != (int *)0x0) {
          piVar1 = (int *)piVar3[1];
          if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar3)(1);
          }
          FUN_00796cd8(piVar3);
          piVar3 = piVar1;
        }
        uVar6 = uVar6 + 1;
        *(undefined4 *)(puVar5[2] + -4 + uVar6 * 4) = 0;
      } while (uVar6 < (uint)puVar5[1]);
    }
    *puVar5 = 0;
    puVar5 = DAT_0088ec00;
    if (DAT_0088ec00 != (undefined4 *)0x0) {
      uVar6 = 0;
      if (DAT_0088ec00[1] != 0) {
        do {
          iVar4 = *(int *)(puVar5[2] + uVar6 * 4);
          while (iVar4 != 0) {
            iVar2 = *(int *)(iVar4 + 4);
            FUN_00796cd8(iVar4);
            iVar4 = iVar2;
          }
          uVar6 = uVar6 + 1;
          *(undefined4 *)(puVar5[2] + -4 + uVar6 * 4) = 0;
        } while (uVar6 < (uint)puVar5[1]);
      }
      *puVar5 = 0;
      FUN_00796cd8(puVar5[2]);
      FUN_00796cd8(puVar5);
    }
    DAT_0088ec00 = (undefined4 *)0x0;
  }
  return;
}


