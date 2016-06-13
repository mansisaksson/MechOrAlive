#include "MechOrAlive.h"
#include "Mech.h"

AMech::AMech()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMech::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMech::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMech::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	
	InputComponent->BindAxis("MoveSideways", this, &AMech::MoveSideways);
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMech::Jump);
}

void AMech::MoveSideways(float Value)
{
	if (Value != 0.0f)
		AddMovementInput(FVector(1.f, 0.f, 0.f), Value);
}