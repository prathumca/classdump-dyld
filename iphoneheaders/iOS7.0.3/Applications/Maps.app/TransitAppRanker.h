/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@class NSMutableArray;

@interface TransitAppRanker : NSObject <NSCoding> {

	NSMutableArray* _rankings;

}

@property (nonatomic,retain) NSMutableArray * rankings;              //@synthesize rankings=_rankings - In the implementation block
-(void)recordAppLaunch:(id)arg1 ;
-(id)rankApps:(id)arg1 ;
-(id)rankedTransitAppsProxiesWithProxies:(id)arg1 ;
-(id)initWithRecentlyLaunchedApps:(id)arg1 ;
-(id)recentlyLaunchedApps;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)rankings;
-(void)setRankings:(id)arg1 ;
@end
