/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iap2d/iap2d-Structs.h>
@class LogFileWriter;

@interface iAP2Logging : NSObject {

	unsigned char _printIapPacketsPref;
	unsigned char _logIapDebug;
	unsigned char _printIapDebug;
	LogFileWriter* _iapLogWriter;

}
+(id)GetSharedInstance;
-(void)LogPacketForPort:(id)arg1 packet:(iAP2Packet_st*)arg2 dir:(int)arg3 ;
-(void)LogCommentForPort:(id)arg1 format:(id)arg2 ;
-(void)LogEventInternalForPort:(id)arg1 event:(id)arg2 format:(id)arg3 ;
-(void)LogEventForPort:(id)arg1 event:(id)arg2 format:(id)arg3 ;
-(void)LogCommentInternalForPort:(id)arg1 format:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
