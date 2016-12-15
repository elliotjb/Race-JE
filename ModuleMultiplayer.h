#pragma once
#include "ModuleScene.h"
#include "p2DynArray.h"
#include "Globals.h"
#include "Primitive.h"
#include "p2List.h"

#define MAX_OBJECTS 100
struct PhysBody3D;
enum Direction;

class ModuleMultiplayer : public ModuleScene
{
public:
	ModuleMultiplayer(Application* app, bool start_enabled = false);
	~ModuleMultiplayer();

	bool Start();
	update_status Update(float dt);
	bool CleanUp();
	void OnCollision(PhysBody3D* body1, PhysBody3D* body2);

	void CreateMap(int num_rows, int num_columns);

public:
	uint RedSelected = 0;
	uint BlueSelected = 0;
};