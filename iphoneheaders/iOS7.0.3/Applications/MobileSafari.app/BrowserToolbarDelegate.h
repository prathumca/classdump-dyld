/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol BrowserToolbarDelegate <NSObject>
@optional
-(void)showTabsFromButtonBar;
-(void)presentAddTabPopoverFromButtonBar;
-(void)showCloudTabsFromButtonBar;
-(void)addTabFromButtonBar;
-(CGPoint*)targetPointForButtonBarLinkImageAnimationIntoLayer:(id)arg1 proposedTargetPoint:(CGPoint)arg2;

@required
-(void)toggleBookmarksFromButtonBar;
-(void)backFromButtonBar;
-(void)forwardFromButtonBar;
-(void)showActionPanelFromButtonBar;
-(void)presentBackPopoverFromButtonBar;
-(void)presentForwardPopoverFromButtonBar;
@end
