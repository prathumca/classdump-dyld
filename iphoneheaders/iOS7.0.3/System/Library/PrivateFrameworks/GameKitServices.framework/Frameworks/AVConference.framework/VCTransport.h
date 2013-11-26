/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, NSObject;

@interface VCTransport : NSObject {

	tagHANDLE* tpHandle;
	NSMutableDictionary* iceBlocks;
	NSObject<OS_dispatch_queue>* delegateQueue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(int)detailedErrorCodeForConnectionWithCallID:(unsigned long)arg1 ;
-(long)stopConnectivityCheckForCallID:(unsigned long)arg1 ;
-(long)discardRelayBindingForCallID:(unsigned long)arg1 ;
-(BOOL)ipPortStillExists:(tagIPPORT*)arg1 requiresWifi:(BOOL)arg2 ;
-(void)registerICEBlockForCallID:(unsigned long)arg1 block:(/*^block*/ id)arg2 ;
-(long)setSKEState:(SKEStateOpaqueRef)arg1 forCallID:(unsigned long)arg2 ;
-(long)processRemoteInterfaceChange:(unsigned long)arg1 remoteData:(void*)arg2 remoteLen:(int)arg3 ;
-(long)sendUDPPacketReliableEncrypted:(id)arg1 localIPPort:(tagIPPORT*)arg2 destinationIPPort:(tagIPPORT*)arg3 oftType:(int)arg4 ;
-(long)updateInterfaceList:(BOOL)arg1 isUpdateNeeded:(int*)arg2 ;
-(long)getConnectionDataForCallID:(unsigned long)arg1 version:(unsigned char)arg2 useCompressedData:(BOOL)arg3 pConnectionData:(void*)arg4 connectDataSizeInBytes:(int*)arg5 relayDictionary:(CFDictionaryRef)arg6 interfaceUpdate:(BOOL)arg7 nonCellularCandidateTimeout:(double)arg8 ;
-(long)getLoopbackIP:(tagIPPORT*)arg1 ;
-(long)setupDTLSSecurity:(unsigned long)arg1 connectionResult:(tagCONNRESULT*)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(long)setICETimeout:(double)arg1 ;
-(long)processConnectionResultChange:(tagCONNRESULT*)arg1 newResult:(tagCONNRESULT*)arg2 ;
-(long)flushBasebandQueue:(void*)arg1 ;
-(long)getSignalStrength:(int*)arg1 signalRaw:(int*)arg2 signalGrade:(int*)arg3 ;
-(long)getCellTechForCallID:(unsigned long)arg1 localCellTech:(int*)arg2 isLocalCellularQoSEnabled:(int*)arg3 remoteCellTech:(int*)arg4 isRemoteCellularQoSEnabled:(int*)arg5 ;
-(long)setupBaseband:(tagCONNRESULT*)arg1 ;
-(long)updateQoS:(BOOL)arg1 ;
-(long)updateICERoleForCallID:(unsigned long)arg1 role:(int)arg2 remoteCallID:(unsigned long)arg3 sessionID:(CFStringRef)arg4 ;
-(long)setForceRelayForCallID:(unsigned long)arg1 ;
-(long)setForceIPv6ForCallID:(unsigned long)arg1 ;
-(long)startConnectionCheckForCallID:(unsigned long)arg1 remoteConnectionDataBlob:(id)arg2 relayDictionary:(id)arg3 iceTimeout:(double)arg4 securityIdentity:(SecIdentityRef)arg5 skeState:(SKEStateOpaqueRef)arg6 usedRelay:(int*)arg7 ;
-(long)updateQualityIndicator:(int)arg1 ;
-(void)setARPLHandler:(/*^block*/ id)arg1 ;
-(void)iceConnectedForCallID:(unsigned long)arg1 result:(tagCONNRESULT*)arg2 didReceivePacket:(int)arg3 useRelay:(int)arg4 secretKey:(CFDataRef)arg5 skeResult:(int)arg6 ;
@end
