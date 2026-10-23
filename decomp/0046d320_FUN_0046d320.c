// FUN_0046d320 @ 46d320 size=478

void __thiscall FUN_0046d320(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_stack_00000014;
  
  piVar1 = *(int **)(param_1 + 0x117f8);
  iVar8 = 0;
  iVar9 = 0;
  piVar4 = *(int **)(param_1 + 0x4508);
joined_r0x0046d341:
  do {
    while( true ) {
      while( true ) {
        do {
          if (piVar4 == (int *)0x0) {
            while (piVar1 != (int *)0x0) {
              iVar6 = *piVar1;
              piVar1 = (int *)piVar1[2];
              if (((*(int *)(iVar6 + 0x26) == in_stack_00000014) &&
                  (cVar5 = FUN_00509ed0(), cVar5 != '\0')) &&
                 (*(int *)(iVar6 + 0x22) == param_2 + 1)) {
                iVar3 = *(int *)(iVar6 + 0x42 + param_2 * 4);
                if ((*(uint *)(iVar6 + 0x1e) >> 9 & 1) == 0) {
                  iVar7 = *(int *)(iVar6 + 0x32);
                  if (iVar3 <= *(short *)(DAT_00893530 + 0x18)) {
                    iVar7 = iVar7 + 3;
                  }
                }
                else {
                  iVar7 = *(int *)(iVar6 + 0x32);
                  if (*(short *)(DAT_00893530 + 0x18) < iVar3) {
                    iVar7 = iVar7 + -2;
                  }
                }
                if (iVar9 <= iVar7) {
                  iVar8 = iVar6;
                  iVar9 = iVar7;
                }
              }
            }
            if ((iVar8 != 0) && (cVar5 = FUN_0050a160(), cVar5 != '\0')) {
              FUN_0045c450(iVar8,1);
            }
            return;
          }
          piVar2 = (int *)piVar4[2];
          iVar6 = *piVar4;
          piVar4 = piVar2;
        } while (((*(int *)(iVar6 + 0x14a) == 0) ||
                 (iVar6 = FUN_0051c480(), *(int *)(iVar6 + 0x26) != in_stack_00000014)) ||
                (iVar6 = FUN_0051c480(), *(int *)(iVar6 + 0x22) != param_2 + 1));
        iVar6 = FUN_0051c480();
        if ((*(uint *)(iVar6 + 0x1e) >> 9 & 1) == 0) break;
        iVar6 = FUN_0051c480();
        if ((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(iVar6 + 0x42 + param_2 * 4))
        goto LAB_0046d434;
        iVar6 = FUN_0051c480();
        if (iVar9 <= *(int *)(iVar6 + 0x32) + 3) {
          iVar8 = FUN_0051c480();
          iVar9 = *(int *)(iVar8 + 0x32) + 3;
          goto LAB_0046d44c;
        }
      }
      iVar6 = FUN_0051c480();
      if ((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(iVar6 + 0x42 + param_2 * 4)) break;
      iVar6 = FUN_0051c480();
      if (iVar9 <= *(int *)(iVar6 + 0x32) + 8) {
        iVar8 = FUN_0051c480();
        iVar9 = *(int *)(iVar8 + 0x32) + 8;
        goto LAB_0046d44c;
      }
    }
    iVar6 = FUN_0051c480();
  } while (*(int *)(iVar6 + 0x32) + 5 < iVar9);
  iVar8 = FUN_0051c480();
  iVar9 = *(int *)(iVar8 + 0x32) + 5;
  goto LAB_0046d44c;
LAB_0046d434:
  iVar6 = FUN_0051c480();
  if (*(int *)(iVar6 + 0x32) + 1 < iVar9) goto joined_r0x0046d341;
  iVar8 = FUN_0051c480();
  iVar9 = *(int *)(iVar8 + 0x32) + 1;
LAB_0046d44c:
  iVar8 = FUN_0051c480();
  goto joined_r0x0046d341;
}


