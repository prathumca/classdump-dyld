/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDValueAxis : CHDAxis {

	bool mPercentageFormattingFlag;
	bool mAutoMajorUnitValue;
	bool mAutoMinorUnitValue;
	double mMajorUnitValue;
	double mMinorUnitValue;
	double mScalingLogBase;

}
-(id)initWithResources:(id)arg1 ;
-(void)setMajorUnitValue:(double)arg1 ;
-(void)setMinorUnitValue:(double)arg1 ;
-(void)setScalingLogBase:(double)arg1 ;
-(double)minorUnitValue;
-(bool)isAutoMinorUnitValue;
-(double)majorUnitValue;
-(bool)isAutoMajorUnitValue;
-(double)scalingLogBase;
-(void)adjustAxisPositionForHorizontalChart;
-(bool)isPercentageFormattingFlag;
-(void)setPercentageFormattingFlag:(bool)arg1 ;
@end
