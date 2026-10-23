// FUN_00568050 @ 568050 size=283

void FUN_00568050(int *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  
  WaitForSingleObjectEx(DAT_00dc4b68,0xffffffff,0);
  cVar4 = FUN_0042e8e0();
  if (cVar4 == '\0') {
    uVar5 = (**(code **)(*param_1 + 8))();
    uVar5 = FUN_00566aa0(uVar5);
    uVar5 = (**(code **)(*param_1 + 8))(uVar5);
    FUN_00568040(s_Sending__d___s__00856d50,uVar5);
  }
  else {
    uVar5 = (**(code **)(*param_1 + 8))();
    uVar5 = FUN_00566aa0(uVar5);
    cVar4 = *(char *)(DAT_00893530 + 0x14);
    cVar1 = *(char *)(DAT_00893530 + 0x15);
    cVar2 = *(char *)(DAT_00893530 + 0x16);
    sVar3 = *(short *)(DAT_00893530 + 0x18);
    uVar5 = (**(code **)(*param_1 + 8))(uVar5);
    FUN_00568040(s__d__02d__02d__0d___Sending__d____00856d8c,(int)sVar3,(int)cVar2,(int)cVar1,
                 (int)cVar4,uVar5);
  }
  FUN_0057d600(**(undefined2 **)((int)param_1 + 10),*(undefined2 **)((int)param_1 + 10),param_2);
  DAT_00bcf050 = DAT_00bcf050 + (uint)**(ushort **)((int)param_1 + 10);
  DAT_00bcf054 = DAT_00bcf054 + 1;
  iVar6 = (**(code **)(*param_1 + 8))();
  (&DAT_00bcf05c)[iVar6] = (&DAT_00bcf05c)[iVar6] + (uint)**(ushort **)((int)param_1 + 10);
  iVar6 = (**(code **)(*param_1 + 8))();
  (&DAT_00bcf878)[iVar6] = (&DAT_00bcf878)[iVar6] + 1;
  ReleaseMutex(DAT_00dc4b68);
  return;
}


