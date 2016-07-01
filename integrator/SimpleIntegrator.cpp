/*
 * SimpleIntegrator.cpp
 *
 *  Created on: 2016年7月1日
 *      Author: Administrator
 */

#include "SimpleIntegrator.h"
#include "RGB.h"
#include "Intersection.h"
#include "Scene.h"
SimpleIntegrator::SimpleIntegrator() {
	// TODO Auto-generated constructor stub

}

SimpleIntegrator::~SimpleIntegrator() {
	// TODO Auto-generated destructor stub
}

RGB SimpleIntegrator::Li(const Scene &scene, const Renderer &renderer,
		  const RayDifferential &ray, const Intersection &isect) const{
	    	Reference<Primitive> primitive= scene.getPrimitiveByID(isect.primitiveID);
	        return primitive->GetMaterial()->shade(isect);
}
