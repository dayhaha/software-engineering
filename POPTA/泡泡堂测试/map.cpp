#include "map.h"

Box::Box(void){

};

Box::Box(int state, HTEXTURE image){
	Box_image = image;
	Box_state = state;
}

Box::~Box(void){

};

void Box::state_change(int state){
	Box_state = state;
};

void Box::image_change(HGE *hge, HTEXTURE image){
	Box_image = image;
}

void Box::Image_for_state(HGE *hge){
	switch(Box_state){
	case 0:
		Box_image = hge->Texture_Load("0.png");
		break;
	case 1:
		Box_image = hge->Texture_Load("1.png");
		break;
	case 2:
		Box_image = hge->Texture_Load("2.png");
		break;
	default:
		break;
	}
}

map::map(void)
{
}

map::map(HGE *hge, int state[BOX_NUM][BOX_NUM]){
	for(int i = 0; i < BOX_NUM; i++)
		for(int j = 0; j < BOX_NUM; j++)
		{
			box[i][j].Box_state = state[i][j];
			box[i][j].Image_for_state(hge);	
		}
}


map::~map(void)
{
}

