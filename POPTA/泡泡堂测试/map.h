#pragma once
#include <hge.h>
#include <hgefont.h>
#include <hgegui.h>
const int MAP_SIZE[2] = {800, 800};
const int BOX_NUM = 20;

class Box
{
public:
	Box(void);
	Box(int state, HTEXTURE image);
	~Box(void);
	void state_change(int s);
	void image_change(HGE *hge, HTEXTURE image);
	void Image_for_state(HGE *hge);
	friend class map;
private:
	int Box_state;
	HTEXTURE Box_image;        //该方格上对应的图片
};

class map
{
public:
	map(void);
	map(HGE *hge, int state[BOX_NUM][BOX_NUM]);
	~map(void);
private:
	Box box[BOX_NUM][BOX_NUM];
};

