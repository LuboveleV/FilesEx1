/*
 * Video.h
 *
 *  Created on: May 18, 2017
 *      Author: LyBo-Pc
 */

#ifndef VIDEO_H_
#define VIDEO_H_
#include<iostream>
using namespace std;

enum Janr{COMEDY,HORROR,FANTASY,DRAMA};
class Video {
private:
	string name;
	Janr janre;
public:
	Video();
	Video(string name,Janr janre);
	virtual ~Video();
	const string& getName() const;
	void setName(const string& name);
	Janr getJanre() const;
	void setJanre(Janr janre);
};

#endif /* VIDEO_H_ */
