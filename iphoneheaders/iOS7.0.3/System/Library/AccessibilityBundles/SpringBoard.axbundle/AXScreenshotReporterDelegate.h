/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:03:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSData, UIAlertView;

@interface AXScreenshotReporterDelegate : NSObject <UIAlertViewDelegate> {

	NSData* _screenshotData;
	UIAlertView* _alertView;

}

@property (nonatomic,retain) NSData * screenshotData;              //@synthesize screenshotData=_screenshotData - In the implementation block
@property (assign,nonatomic) UIAlertView * alertView;              //@synthesize alertView=_alertView - In the implementation block
-(id)screenshotData;
-(void)setScreenshotData:(id)arg1 ;
-(void)setAlertView:(id)arg1 ;
-(id)alertView;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)_cleanup;
@end
