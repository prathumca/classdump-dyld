/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSNumber;

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem {

	NSNumber* _remainingPortion;

}

@property (nonatomic,retain) NSNumber * remainingPortion;              //@synthesize remainingPortion=_remainingPortion - In the implementation block
-(id)initWithAccountURL:(id)arg1 usage:(id)arg2 ;
-(void)setRemainingPortion:(id)arg1 ;
-(id)remainingPortion;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
@end
