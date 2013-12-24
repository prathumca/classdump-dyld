/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUArrayCellConfiguration.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class NSMutableDictionary, NSMutableArray;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {

	NSMutableDictionary* _artworkByURL;
	NSMutableArray* _artworkLoadOperations;

}
+(id)copyDefaultContext;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)dealloc;
-(void)setRepresentedObject:(id)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)cancelArtworkRequests;
-(id)copyImageDataProvider;
-(id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2 ;
-(void)reloadAfterArtworkLoad;
-(id)artworkImageForItemImage:(id)arg1 ;
-(id)artworkImageForURL:(id)arg1 ;
@end
