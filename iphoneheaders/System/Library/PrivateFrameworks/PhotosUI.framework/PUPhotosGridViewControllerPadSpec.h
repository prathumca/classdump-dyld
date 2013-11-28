/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosGridViewControllerSpec.h>

@interface PUPhotosGridViewControllerPadSpec : PUPhotosGridViewControllerSpec {

	float _gridItemSideSizePortrait;
	float _gridItemSideSizeLandscape;
	float _gridHSpacingPortrait;
	float _gridHSpacingLandscape;
	float _gridVSpacingPortrait;
	float _gridVSpacingLandscape;
	float _gridSideMarginsPortrait;
	float _gridSideMarginsLandscape;

}
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(int)thumbnailImageFormat;
-(int)cellFillMode;
-(BOOL)shouldPlaceDeleteInCenterToolbarPosition;
-(BOOL)canDisplayEditActionsInNavigationBar;
-(BOOL)canDisplayOptionsInPopover;
-(BOOL)canDisplaySlideshowButton;
-(id)albumPickerViewControllerSpec;
-(void)configureCollectionViewGridLayout:(id)arg1 forWidth:(float)arg2 ;
-(float)globalFooterHeight;
-(BOOL)usesStackPopTransition;
-(id)photoBrowserSpec;
-(void)protoSettingsDidChange;
-(CGSize)baseInterItemSpacing;
-(id)photosPickerViewControllerSpec;
-(void)_reloadProtoSettings;
@end
