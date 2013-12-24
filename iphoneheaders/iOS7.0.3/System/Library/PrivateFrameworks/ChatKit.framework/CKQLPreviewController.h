/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLPreviewController.h>
#import <ChatKit/QLPreviewControllerDataSource.h>

@class NSArray;

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {

	NSArray* _previewItems;

}

@property (nonatomic,copy) NSArray * previewItems;              //@synthesize previewItems=_previewItems - In the implementation block
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)init;
-(int)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(id)currentPreviewItem;
-(void)setPreviewItems:(id)arg1 ;
-(id)previewItems;
@end
