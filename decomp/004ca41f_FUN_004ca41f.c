// FUN_004ca41f @ 4ca41f size=52

bool __fastcall FUN_004ca41f(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_004c9f81();
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0044e1d0();
    bVar2 = iVar1 == param_1;
  }
  return bVar2;
}


