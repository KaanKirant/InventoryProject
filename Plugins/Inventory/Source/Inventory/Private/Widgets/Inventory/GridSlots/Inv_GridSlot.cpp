// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Inventory/GridSlots/Inv_GridSlot.h"

#include "Components/Image.h"

void UInv_GridSlot::SetUnoccupiedTexture()
{
	GridSlotSlate = EInv_GridSlotSlate::Unoccupied;
	Image_GridSlot->SetBrush(Brush_Unoccupied);
}

void UInv_GridSlot::SetOccupiedTexture()
{
	GridSlotSlate = EInv_GridSlotSlate::Occupied;
	Image_GridSlot->SetBrush(Brush_Occupied);
}

void UInv_GridSlot::SetSelectedTexture()
{
	GridSlotSlate = EInv_GridSlotSlate::Selected;
	Image_GridSlot->SetBrush(Brush_Selected);
}

void UInv_GridSlot::SetGrayedOutTexture()
{
	GridSlotSlate = EInv_GridSlotSlate::GrayedOut;
	Image_GridSlot->SetBrush(Brush_GrayedOut);
}
