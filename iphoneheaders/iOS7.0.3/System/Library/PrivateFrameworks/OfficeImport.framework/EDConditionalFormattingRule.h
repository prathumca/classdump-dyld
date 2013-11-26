/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class EDResources, NSMutableArray, NSString;

@interface EDConditionalFormattingRule : NSObject {

	EDResources* mResources;
	int mType;
	int mOperator;
	NSMutableArray* mFormulas;
	unsigned mDifferentialStyleIndex;
	bool mStopIfTrue;
	long mPriority;
	bool mAboveAverage;
	bool mBottom;
	bool mEqualAverage;
	bool mPercent;
	unsigned long mRank;
	long mStdDev;
	NSString* mText;
	int mTimePeriod;

}
+(id)conditionalFormattingRuleWithResources:(id)arg1 ;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)text;
-(void)setText:(id)arg1 ;
-(long)priority;
-(void)setPriority:(long)arg1 ;
-(bool)percent;
-(unsigned)formulaCount;
-(id)formulaAtIndex:(unsigned)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setStopIfTrue:(bool)arg1 ;
-(void)setOperatorEnum:(int)arg1 ;
-(void)addFormula:(id)arg1 worksheet:(id)arg2 ;
-(void)setDifferentialStyle:(id)arg1 ;
-(id)differentialStyle;
-(int)compareToOtherRuleUsingPriority:(id)arg1 ;
-(int)operatorEnum;
-(bool)stopIfTrue;
-(bool)aboveAverage;
-(void)setAboveAverage:(bool)arg1 ;
-(bool)equalAverage;
-(void)setEqualAverage:(bool)arg1 ;
-(void)setPercent:(bool)arg1 ;
-(unsigned long)rank;
-(void)setRank:(unsigned long)arg1 ;
-(long)stdDev;
-(void)setStdDev:(long)arg1 ;
-(int)timePeriod;
-(void)setTimePeriod:(int)arg1 ;
-(unsigned)differentialStyleIndex;
-(void)setDifferentialStyleIndex:(unsigned)arg1 ;
-(bool)bottom;
-(void)setBottom:(bool)arg1 ;
@end
