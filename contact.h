#pragma once
#include <iostream>
#include <string>
using namespace std;
#define MAX 1000
enum
{
	EXIT,
	ADD,
	SHOW,
	DEL,
	SEARCH,
	MODIFY,
	EMPTIFY
};

typedef struct PeoInfo
{
	string name;
	int sex;
	int age;
	string tele;
	string addr;
}PeoInfo;
typedef struct Contact
{
	PeoInfo data[MAX];
	int size;
}Contact;
void Add(Contact* con);
void Show(const Contact* con);
void Del(Contact* con);
void Search(const Contact* con);
void Modify(Contact* con);
void Emptify(Contact* con);
