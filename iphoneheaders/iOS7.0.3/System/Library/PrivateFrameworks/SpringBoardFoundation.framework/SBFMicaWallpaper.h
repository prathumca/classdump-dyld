/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardFoundation/SBFProceduralWallpaper.h>

@class NSBundle, _UICAPackageView, UIView;

@interface SBFMicaWallpaper : SBFProceduralWallpaper {

	NSBundle* _loadedBundle;
	_UICAPackageView* _packageView;
	UIView* _rootView;

}
+(id)identifier;
+(id)presetWallpaperOptions;
+(id)thumbnailImageForOptions:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setWallpaperOptions:(id)arg1 ;
-(void)_unloadView;
-(void)_loadView;
@end
