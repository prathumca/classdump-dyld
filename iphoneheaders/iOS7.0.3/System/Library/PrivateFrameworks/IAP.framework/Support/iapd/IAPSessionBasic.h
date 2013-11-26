/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iapd/iapd-Structs.h>
#import <iapd/IAPSession.h>

@class NSCondition, NSThread, NSMutableData;

@interface IAPSessionBasic : IAPSession {

	NSCondition* _sessionPacketsFromAppCondition;
	EAPacket* _sessionPacketsFromApp;
	unsigned _sessionPacketsFromAppHead;
	unsigned _sessionPacketsFromAppReady;
	unsigned _sessionPacketsFromAppTail;
	unsigned long _sessionPacketsBytesRemainingCached;
	NSThread* _sessionPacketsFromAppThread;
	BOOL _hasSessionPacketFromAppNotificationBeenPosted;
	NSMutableData* _sessionDataFromAcc;
	NSCondition* _sessionDataFromAccCondition;
	NSThread* _sessionDataFromAccThread;
	unsigned _numberOfSessionPacketsFromApp;
	unsigned _numberOfSessionPacketsFromAppMask;

}
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(BOOL)closeDataPipes;
-(id)initWithClient:(id)arg1 connectionID:(unsigned)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(void)_writeSessionDataFromAccThread;
-(void)_readSessionDataFromAppThread;
-(BOOL)bufferToAppHasSpaceAvailable;
-(unsigned long)_sessionPacketsFromAppBytesFree;
-(void)_sessionBufferToAppHasSpaceAvailable;
-(BOOL)isPacketAvailable;
-(EAPacket*)consumeNextOutPacket;
-(void)recycleOutPacket:(EAPacket*)arg1 ;
-(unsigned)sendBytesToApp:(const char*)arg1 length:(int)arg2 ;
-(void)dealloc;
-(id)init;
@end
