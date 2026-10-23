// FUN_00567ea0 @ 567ea0 size=412

void FUN_00567ea0(int *param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  (**(code **)(*param_1 + 8))();
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
    FUN_00568040(s__d__02d__02d__02d___Sending__d___00856d64,(int)sVar3,(int)cVar2,(int)cVar1,
                 (int)cVar4,uVar5);
  }
  FUN_0057d5c0(**(undefined2 **)((int)param_1 + 10),*(undefined2 **)((int)param_1 + 10));
  DAT_00bcf050 = DAT_00bcf050 + (uint)**(ushort **)((int)param_1 + 10);
  DAT_00bcf054 = DAT_00bcf054 + 1;
  iVar6 = (**(code **)(*param_1 + 8))();
  (&DAT_00bcf05c)[iVar6] = (&DAT_00bcf05c)[iVar6] + (uint)**(ushort **)((int)param_1 + 10);
  iVar6 = (**(code **)(*param_1 + 8))();
  (&DAT_00bcf878)[iVar6] = (&DAT_00bcf878)[iVar6] + 1;
  if (1000000 < DAT_00bcf050) {
    if (DAT_00bcf058 == '\0') {
      uVar5 = FUN_007a6615(s_traffic_csv_00856d44,&DAT_0082ef98);
      iVar6 = 0;
      do {
        uVar7 = FUN_00566aa0(iVar6,(&DAT_00bcf05c)[iVar6],(&DAT_00bcf878)[iVar6]);
        FUN_007a6628(uVar5,s__s__d__d_00856d38,uVar7);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x207);
      FUN_007a6429(uVar5);
    }
    DAT_00bcf058 = '\x01';
  }
  if (5000000 < DAT_00bcf050) {
    DAT_00bcf059 = 1;
  }
  ReleaseMutex(DAT_00dc4b68);
  return;
}


