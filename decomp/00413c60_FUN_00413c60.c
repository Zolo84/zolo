// FUN_00413c60 @ 413c60 size=176

undefined2 __thiscall FUN_00413c60(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  double dVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  double local_20;
  
  iVar5 = 0;
  local_20 = 10000000.0;
  iVar4 = 1;
  pbVar3 = (byte *)(param_1 + 0x109);
  do {
    dVar2 = ((double)param_4 - (double)pbVar3[1]) * ((double)param_4 - (double)pbVar3[1]) +
            ((double)param_3 - (double)*pbVar3) * ((double)param_3 - (double)*pbVar3) +
            ((double)param_2 - (double)pbVar3[-1]) * ((double)param_2 - (double)pbVar3[-1]);
    bVar1 = dVar2 < local_20;
    if (bVar1) {
      iVar5 = iVar4;
      local_20 = dVar2;
    }
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 4;
  } while (iVar4 < 0x100);
  return CONCAT11(bVar1,(char)iVar5);
}


