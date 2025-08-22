// starter.c
// EFI payload to load ignition.c.
// Licensed under MIT.
// Copyright (c) 2025 Viewer. All Rights Reserved.
#include <efi.h>
#include <efilib.h>
EFI_STATUS
  efi_main(EFI_HANDLE ImageHandle,
           EFI_SYSTEM_TABLE *SystemTable) {
  InitializeLib(ImageHandle, SystemTable);
  Print(L"Starter.efi payload loaded.\n");
  return EFI_SUCCESS;
}
