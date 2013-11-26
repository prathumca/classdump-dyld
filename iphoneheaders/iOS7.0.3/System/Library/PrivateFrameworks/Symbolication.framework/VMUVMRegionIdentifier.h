/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject {

	NSMutableArray* _regions;
	NSMapTable* _mallocZoneStatisticsMap;

}
-(id)initWithTask:(unsigned)arg1 ;
-(void)dealloc;
-(id)regions;
-(id)initWithTask:(unsigned)arg1 options:(unsigned)arg2 ;
-(id)descriptionForRange:(VMURange)arg1 options:(unsigned)arg2 ;
-(id)descriptionForMallocZoneTotalsWithOptions:(unsigned)arg1 ;
-(id)descriptionForRange:(VMURange)arg1 ;
-(id)descriptionForRegionTotalsWithOptions:(unsigned)arg1 ;
@end
