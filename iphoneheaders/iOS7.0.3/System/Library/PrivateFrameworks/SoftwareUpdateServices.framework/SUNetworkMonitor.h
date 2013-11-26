/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
@class NSHashTable;

@interface SUNetworkMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	NSHashTable* _observers;
	int _currentNetworkType;
	BOOL _roaming;

}
+(id)sharedInstance;
+(BOOL)holdsWiFiAssertion;
+(void)setHoldsWiFiAssertion:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isCellularDataRoamingEnabled;
-(BOOL)_isCurrentlyRoaming;
-(void)_initNetworkObservation;
-(int)_networkTypeFromFlags:(unsigned)arg1 ;
-(void)setCurrentNetworkType:(int)arg1 ;
-(int)currentNetworkType;
-(int)_networkTypeFromCurrentCellularData;
-(BOOL)isNetworkTypeCellular:(int)arg1 ;
-(BOOL)isCellularRoaming;
-(void)setCellularRoaming:(BOOL)arg1 ;
-(void)_carrierBundleChanged;
-(void)_operatorBundleChanged;
@end
