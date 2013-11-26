/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDictionary;

@interface SYDCredentials : NSObject {

	NSString* _user;
	NSString* _userName;
	NSDictionary* _accountProperties;

}

@property (nonatomic,readonly) NSString * user;                        //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * userName;                    //@synthesize userName=_userName - In the implementation block
@property (nonatomic,readonly) NSString * apsEnvironment; 
-(id)initWithUser:(id)arg1 userName:(id)arg2 accountProperties:(id)arg3 ;
-(id)apsEnvironment;
-(id)publicURLForConfigurationWithService:(id)arg1 ;
-(id)user;
-(id)userName;
-(void)dealloc;
@end
