// FUN_007b6179 @ 7b6179 size=28

bool FUN_007b6179(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}


