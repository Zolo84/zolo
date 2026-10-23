// FUN_00483ab0 @ 483ab0 size=419

undefined4 __thiscall FUN_00483ab0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  char cVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 *puVar10;
  int *unaff_EBP;
  
  iVar1 = (&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0x14)];
  iVar9 = FUN_00428460((short)(*(int *)(param_2 + 4) + 0xe));
  if (((iVar9 != 0) && (iVar9 != 8)) && (iVar1 != 0)) {
    iVar9 = FUN_00585e50(0x12,0,(short)param_1);
    FUN_0049ebd0(SUB42((float)-iVar9,0));
    puVar10 = (undefined2 *)FUN_0044df10();
    cVar6 = (**(code **)(*(int *)(param_1 + 0x3608) + 0x24))
                      (*puVar10,(short)((uint)*(undefined4 *)(puVar10 + 1) >> 0x10));
    if (cVar6 == '\0') {
      puVar10 = (undefined2 *)FUN_0044df10();
      cVar6 = (**(code **)(*(int *)(param_1 + 0x362c) + 0x24))
                        (*puVar10,(short)((uint)*(undefined4 *)(puVar10 + 1) >> 0x10));
      if (cVar6 == '\0') {
        puVar10 = (undefined2 *)FUN_0044df10();
        FUN_004739f0(*puVar10,(short)((uint)*(undefined4 *)(puVar10 + 1) >> 0x10));
        cVar6 = FUN_0042e980();
        if (cVar6 != '\0') {
          FUN_00713790(param_1,0,0);
        }
        cVar6 = FUN_00444290();
        if (cVar6 != '\0') {
          uVar2 = *(undefined4 *)(iVar1 + 6);
          uVar7 = (**(code **)(*unaff_EBP + 0xc))();
          uVar8 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(uVar7);
          FUN_006ea3b0(9,uVar2,&DAT_0088ebf8,uVar8,uVar7);
        }
        piVar5 = *(int **)(param_1 + 0x3654);
        while (piVar5 != (int *)0x0) {
          piVar3 = (int *)piVar5[2];
          puVar4 = (undefined4 *)*piVar5;
          piVar5 = piVar3;
          if ((*(int *)(puVar4[6] + 0xe) == *(int *)((int)unaff_EBP + 0xe)) &&
             (*(short *)(puVar4[6] + 0xc) == (short)unaff_EBP[3])) {
            if (puVar4[7] != 0) {
              *(undefined4 *)(puVar4[7] + 0xd8) = 0;
            }
            (**(code **)(*(int *)(param_1 + 0x3650) + 0x18))((short)puVar4);
            if (puVar4 != (undefined4 *)0x0) {
              (**(code **)*puVar4)(1);
            }
          }
        }
      }
    }
  }
  return 0;
}


