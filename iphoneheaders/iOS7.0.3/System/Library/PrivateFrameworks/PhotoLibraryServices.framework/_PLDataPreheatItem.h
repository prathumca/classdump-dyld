/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLPreheatItem.h>

@class PLImageTable;

@interface _PLDataPreheatItem : PLPreheatItem {

	unsigned _thumbIndex;
	PLImageTable* _imageTable;

}
-(void)dealloc;
-(id)initWithThumbIndex:(unsigned)arg1 imageTable:(id)arg2 ;
-(void)startPreheatRequest;
@end
