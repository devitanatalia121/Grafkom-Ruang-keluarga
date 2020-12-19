#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint depthmapShader, shadowmapShader, depthMap, depthMapFBO;
	const unsigned int SHADOW_WIDTH = 1024, SHADOW_HEIGHT = 1024;
	GLuint VBO, VAO, EBO, texture; // Buat Lantai
	GLuint VBO1, VAO1, EBO1, texture1; // Buat laci
	GLuint VBO2, VAO2, EBO2, texture2; // Buat lemari
	GLuint VBO3, VAO3, EBO3, texture3; // Buat tv
	GLuint VBO4, VAO4, EBO4, texture4; // Buat sofa
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildShaders();
	void BuildDepthMap();

	void BuildLantai();
	void DrawLantai(GLuint shader);
	void BuildLaci();
	void DrawLaci(GLuint shader);
	void BuildLemari();
	void DrawLemari(GLuint shader);
	void BuildTV();
	void DrawTV(GLuint shader);
	void BuildSofa();
	void DrawSofa(GLuint shader);
	
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void FlyCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

