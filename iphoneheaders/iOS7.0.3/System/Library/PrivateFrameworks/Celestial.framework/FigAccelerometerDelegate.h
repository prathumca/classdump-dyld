/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/SBSAccelerometerDelegate.h>

@class SBSAccelerometer;

@interface FigAccelerometerDelegate : NSObject <SBSAccelerometerDelegate> {

	SBSAccelerometer* sbsaccel;
	opaque_pthread_mutex_t ringMutex;
	int ringIndex;
	float ringX[64];
	float ringY[64];
	float ringZ[64];
	double ringTime[64];

}
-(void)dealloc;
-(id)init;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(void)deferOnRunloop_accelerometerEventsEnable;
-(void)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
@end
