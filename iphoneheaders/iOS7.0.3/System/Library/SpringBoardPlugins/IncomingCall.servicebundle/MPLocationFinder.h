/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/CLLocationManagerDelegate.h>

@class CLLocationManager, PCPersistentTimer;

@interface MPLocationFinder : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	/*^block*/ id _completionHandler;
	PCPersistentTimer* _timer;

}
+(void)findLocationWithBundleID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)initWithBundleID:(id)arg1 ;
-(void)_timerFired;
-(void)dealloc;
-(void)start;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(void)stop;
@end
