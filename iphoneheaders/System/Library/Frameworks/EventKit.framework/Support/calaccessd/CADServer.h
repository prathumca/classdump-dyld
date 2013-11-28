/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <calaccessd/calaccessd-Structs.h>
#import <calaccessd/ClientConnectionDelegate.h>

@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, BirthdayCalendarManager, LocalAttachmentCleanUpSupport, NSLock;

@interface CADServer : NSObject <ClientConnectionDelegate> {

	BOOL _running;
	unsigned _serverPort;
	CFDictionaryRef _connectionMap;
	NSObject<OS_xpc_object>* _xpcConnection;
	NSObject<OS_dispatch_queue>* _xpcQueue;
	BirthdayCalendarManager* _birthdayManager;
	LocalAttachmentCleanUpSupport* _localAttachmentCleanupManager;
	NSLock* _connectionLock;
	NSObject<OS_dispatch_source>* _shutdownTimer;
	BOOL _keepAlive;
	NSObject<OS_dispatch_queue>* _notificationQueue;

}

@property (assign,nonatomic) BOOL keepAlive;              //@synthesize keepAlive=_keepAlive - In the implementation block
+(id)server;
-(void)rebuildBirthdays;
-(void)dumpState;
-(id)clientConnectionFromPort:(unsigned)arg1 ;
-(void)clientConnectionDied:(id)arg1 ;
-(void)addClientConnection:(id)arg1 forPort:(unsigned)arg2 ;
-(BOOL)_isProtectedDataAvailable;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)_registerForTimeChangeNotifications;
-(void)_registerForIdentityOrphanCleanup;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(void)_establishKeepAlivePath;
-(void)_removeKeepAlivePath;
-(void)shutdownTimerExpired;
-(void)removeClientConnectionForPort:(unsigned)arg1 ;
-(void)_protectedDataWillBecomeUnavailable;
-(void)_protectedDataDidBecomeAvailable;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)setKeepAlive:(BOOL)arg1 ;
-(BOOL)keepAlive;
-(void)shutdown;
@end
