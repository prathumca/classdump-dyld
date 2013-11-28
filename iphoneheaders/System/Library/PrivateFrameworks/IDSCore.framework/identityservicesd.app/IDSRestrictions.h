/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/identityservicesd.app/identityservicesd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/MCProfileConnectionObserver.h>

@class NSMutableDictionary;

@interface IDSRestrictions : NSObject <MCProfileConnectionObserver> {

	NSMutableDictionary* _parentalControls;
	BOOL _active;
	BOOL _shouldPostNotifications;

}

@property (nonatomic,readonly) BOOL active;                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL shouldPostNotifications;              //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)active;
-(void)setShouldPostNotifications:(BOOL)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(BOOL)disableService:(id)arg1 ;
-(BOOL)disableAccount:(id)arg1 ;
-(BOOL)shouldPostNotifications;
-(void)updateAccountActivation;
@end
