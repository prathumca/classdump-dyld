/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXWorksheet : NSObject
+(void)setupProcessors:(id)arg1 ;
+(id)edSheetWithState:(id)arg1 ;
+(bool)readDistinctSheetElementsFrom:(xmlTextReaderRef)arg1 state:(id)arg2 ;
+(void)readOtherSheetComponentsWithState:(id)arg1 ;
+(void)readTables:(id)arg1 ;
+(void)readWorksheetViewsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readWorksheetFormatPropertiesFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readColumnInfosFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readConditionalFormattingsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readHyperlinksFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readOleObjectsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readDataValidationsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readCommentTextFrom:(id)arg1 ;
+(void)readPivotTables:(id)arg1 ;
@end
