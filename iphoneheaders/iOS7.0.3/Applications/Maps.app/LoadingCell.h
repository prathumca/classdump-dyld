/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface LoadingCell : UITableViewCell {

	int _mode;
	UIView* _loadingView;
	UIView* _noAppsView;

}

@property (assign,nonatomic) int mode;                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UIView * loadingView;              //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,readonly) UIView * noAppsView;               //@synthesize noAppsView=_noAppsView - In the implementation block
-(id)initWithMode:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)noAppsView;
-(void)dealloc;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)loadingView;
@end
