/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WirelessDiagnostics/WirelessDiagnostics-Structs.h>
@interface AWDServerConnection : NSObject {

	AWDServerConnection* fServerConnection;

}
-(void)dealloc;
-(id)initWithComponentId:(unsigned long)arg1 andBlockOnConfiguration:(BOOL)arg2 ;
-(id)newMetricContainerWithIdentifier:(unsigned long)arg1 ;
-(BOOL)submitMetric:(id)arg1 ;
-(id)initWithComponentId:(unsigned long)arg1 ;
-(BOOL)registerQueriableMetricCallback:(/*^block*/ id)arg1 forIdentifier:(unsigned long)arg2 ;
-(BOOL)registerQueriableMetricCallbackForLogging:(/*^block*/ id)arg1 ;
-(BOOL)registerConfigChangeCallback:(/*^block*/ id)arg1 ;
-(unsigned long long)getAWDTimestamp;
-(void)flushToQueue:(id)arg1 block:(/*^block*/ id)arg2 ;
@end
