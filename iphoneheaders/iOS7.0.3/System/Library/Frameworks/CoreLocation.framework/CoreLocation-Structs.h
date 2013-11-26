/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_CL0;

typedef struct {
	int suitability;
	SCD_Struct_CL0 coordinate;
	double horizontalAccuracy;
	double altitude;
	double verticalAccuracy;
	double speed;
	double speedAccuracy;
	double course;
	double courseAccuracy;
	double timestamp;
	int confidence;
	double lifespan;
	int type;
	SCD_Struct_CL0 rawCoordinate;
	double rawCourse;
} SCD_Struct_CL1;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	int field1;
	SCD_Struct_CL0 field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	int field11;
	double field12;
	int field13;
	SCD_Struct_CL0 field14;
	double field15;
} SCD_Struct_CL3;

typedef struct __CLClient* CLClientRef;

typedef struct {
	double bestAccuracy;
} SCD_Struct_CL5;

typedef struct {
	double x;
	double y;
	double z;
	double magneticHeading;
	double trueHeading;
	double accuracy;
	double timestamp;
	double temperature;
	double magnitude;
	double inclination;
	int calibration;
} SCD_Struct_CL6;

typedef struct {
	BOOL proximityUUID[512];
	unsigned short major;
	unsigned short minor;
	int definitionMask;
	bool notifyEntryStateOnDisplay;
} SCD_Struct_CL7;

typedef struct {
	SCD_Struct_CL0 center;
	double radius;
	double desiredAccuracy;
} SCD_Struct_CL8;

typedef struct {
	BOOL identifier[512];
	int type;
	bool notifyOnEntry;
	bool notifyOnExit;
	/*function pointer*/ void* ;
	SCD_Struct_CL7 beaconAttributes;
	SCD_Struct_CL8) circularAttributes;
} SCD_Struct_CL9;

typedef struct {
	BOOL field1[512];
	int field2;
	bool field3;
	bool field4;
	/*function pointer*/ void* field5;
	= field6;
	SCD_Struct_CL7 field7;
	SCD_Struct_CL8 field8;
} SCD_Struct_CL10;

typedef struct {
	BOOL field1[512];
	int field2;
	bool field3;
	bool( field4;
	/*function pointer*/ void* field5;
	= field6;
	SCD_Struct_CL7 field7;
	SCD_Struct_CL8) field8;
} SCD_Struct_CL11;
