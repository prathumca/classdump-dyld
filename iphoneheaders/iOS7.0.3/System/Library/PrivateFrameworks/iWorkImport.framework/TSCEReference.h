/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSCEReference : NSObject {

	SCD_Struct_TS335* mRef;
	NSString* mOverrideText;
	NSString* mOverrideTextAsTyped;
	unsigned char mStickyBits;
	BOOL mWasConstructedViaNames;

}
-(id)referenceTextWithCalculationEngine:(id)arg1 hostTableID:(CFUUIDRef)arg2 ;
-(SCD_Struct_TS274*)rangeReference;
-(id)initWithRangeReference:(SCD_Struct_TS274*)arg1 ;
-(CFUUIDRef)tableID;
-(id)initWithCellReference:(SCD_Struct_TS285*)arg1 ;
-(void)setWasConstructedViaNames:(BOOL)arg1 ;
-(void)setOverrideText:(id)arg1 ;
-(void)setStickyBits:(unsigned char)arg1 ;
-(void)setOverrideTextAsTyped:(id)arg1 ;
-(unsigned char)stickyBits;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5 ;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5 ;
-(id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 ;
-(BOOL)wasConstructedViaNames;
-(SCD_Struct_TS336*)cReference;
-(id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(BOOL)arg2 ;
-(id)overrideText;
-(id)overrideTextAsTyped;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id).cxx_construct;
@end
