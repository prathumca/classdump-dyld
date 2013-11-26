/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AirTraffic/AirTraffic-Structs.h>
@class NSDictionary;

@interface ATClientController : NSObject {

	NSDictionary* _clientMap;
	CFDictionaryRef _queueMap;

}
+(id)sharedInstance;
+(id)controllerForDataclasses:(id)arg1 ;
-(void)dealloc;
-(id)allClients;
-(dispatch_queue_sRef)queueForClient:(id)arg1 ;
-(void)resetQueues;
-(BOOL)_loadClientsForDataclasses:(id)arg1 ;
-(id)clientForDataclass:(id)arg1 ;
-(void)waitToDrain;
@end
