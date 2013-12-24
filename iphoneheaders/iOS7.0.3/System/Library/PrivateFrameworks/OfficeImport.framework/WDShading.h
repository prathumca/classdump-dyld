/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSUColor;

@interface WDShading : NSObject <NSCopying> {

	int mStyle;
	TSUColor* mForegroundColor;
	TSUColor* mBackgroundColor;

}
+(id)autoForegroundColor;
+(id)autoBackgroundColor;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)style;
-(id)background;
-(void)setBackground:(id)arg1 ;
-(id)foreground;
-(void)setForeground:(id)arg1 ;
-(void)setShading:(id)arg1 ;
-(BOOL)isEqualToShading:(id)arg1 ;
@end
