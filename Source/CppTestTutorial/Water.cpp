// Fill out your copyright notice in the Description page of Project Settings.

#include "Water.h"
#include "Classes/Components/BoxComponent.h"
#include "ConstructorHelpers.h"

// Sets default values
AWater::AWater()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	sceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Water component"));
	RootComponent = sceneRoot;

	
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Water mesh component"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMeshObj_FloorTemplate(TEXT("StaticMesh'/Game/Geometry/Meshes/TemplateFloor.TemplateFloor'"));
	if (StaticMeshObj_FloorTemplate.Object)
		mesh->SetStaticMesh(StaticMeshObj_FloorTemplate.Object);
	mesh->SetupAttachment(sceneRoot);

	//The box component is for collisions I think.
	shape = CreateDefaultSubobject<UBoxComponent>(TEXT("Water shape component"));
	shape->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	shape->SetupAttachment(sceneRoot);

}

// Called when the game starts or when spawned
void AWater::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

