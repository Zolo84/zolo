// FUN_004ddec0 @ 4ddec0 size=168

int FUN_004ddec0(double param_1,double param_2,double param_3,int param_4)

{
  double dVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  double local_20;
  
  iVar4 = 0x1267;
  local_20 = 10000000.0;
  iVar2 = 0;
  pbVar3 = (byte *)(param_4 + 1);
  do {
    dVar1 = ((double)pbVar3[-1] - param_1) * ((double)pbVar3[-1] - param_1) +
            ((double)*pbVar3 - param_2) * ((double)*pbVar3 - param_2) +
            ((double)pbVar3[1] - param_3) * ((double)pbVar3[1] - param_3);
    if (dVar1 < local_20) {
      iVar4 = iVar2;
      local_20 = dVar1;
    }
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 4;
  } while (iVar2 < 0x100);
  return iVar4;
}


