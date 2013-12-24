/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EBReaderState, EDSheet;

@interface EBReaderSheetState : NSObject {

	EBReaderState* mReaderState;
	EDSheet* mEDSheet;
	map<int, unsigned int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned int> > >* mSharedFormulas;
	unsigned mChartIndex;

}
-(void)dealloc;
-(id).cxx_construct;
-(id)workbook;
-(id)resources;
-(XlBinaryReader*)xlReader;
-(id)readerState;
-(id)edSheet;
-(void)reportWorksheetWarning:(CPTaggedMessageStructure*)arg1 ;
-(unsigned)sharedFormulaIndexForRowCol:(int)arg1 ;
-(void)setSharedFormulaIndex:(unsigned)arg1 forRowCol:(int)arg2 ;
-(unsigned)nextChartIndex;
-(id)initWithReaderState:(id)arg1 ;
-(void)setEDSheet:(id)arg1 ;
-(void).cxx_destruct;
@end
