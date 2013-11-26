/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLSortedAlbumList, PLAssetContainerListChangeNotification;

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {

	PLSortedAlbumList* _albumList;
	PLAssetContainerListChangeNotification* _backingNotification;

}
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)object;
-(id)albumList;
-(BOOL)shouldReload;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(BOOL)countDidChange;
-(id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2 ;
@end
