// FUN_00579770 @ 579770 size=38

void FUN_00579770(void)

{
  UINT UVar1;
  char cVar2;
  
  cVar2 = 'C';
  do {
    PTR_LAB_00856f5c._0_1_ = cVar2;
    UVar1 = GetDriveTypeA((LPCSTR)&PTR_LAB_00856f5c);
    if (UVar1 == 5) {
      return;
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < 'U');
  return;
}


