/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ECColumnWidthConvertor : NSObject {

	int mMultiplier;

}
-(double)lassoColumnWidthFromXl:(double)arg1 ;
-(void)setupWithEDFont:(id)arg1 state:(id)arg2 ;
-(double)xlColumnWidthFromXlBaseColumnWidth:(double)arg1 ;
-(CGSize)stringSizeWithFont:(id)arg1 edFont:(id)arg2 drawingState:(id)arg3 ;
-(double)xlColumnWidthFromLasso:(double)arg1 ;
-(double)xlBaseColumnWidthFromXlColumnWidth:(double)arg1 ;
@end
