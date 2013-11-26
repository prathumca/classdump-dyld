/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface PSCellularUsageApp : NSObject {

	NSString* _bundleIdentifier;
	NSString* _displayName;
	double _totalBytesUsed;
	double _roamingBytesUsed;

}

@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) double totalBytesUsed;                    //@synthesize totalBytesUsed=_totalBytesUsed - In the implementation block
@property (assign,nonatomic) double roamingBytesUsed;                  //@synthesize roamingBytesUsed=_roamingBytesUsed - In the implementation block
-(double)totalBytesUsed;
-(void)setTotalBytesUsed:(double)arg1 ;
-(double)roamingBytesUsed;
-(void)setRoamingBytesUsed:(double)arg1 ;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
@end
