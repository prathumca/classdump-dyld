/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <SpringBoardUIServices/SBUIStarkHomeScreenBackgroundProviderViewController.h>

@protocol CancellableTask;
@class StarkChromeViewController, ;

@interface StarkLauncherViewController : SBUIStarkHomeScreenBackgroundProviderViewController {

	StarkChromeViewController* _chromeViewController;
	BOOL _displayed;
	<CancellableTask>* _viewControllerAcquisitionTask;

}

@property (nonatomic,retain) <CancellableTask> * viewControllerAcquisitionTask;              //@synthesize viewControllerAcquisitionTask=_viewControllerAcquisitionTask - In the implementation block
-(id)viewControllerAcquisitionTask;
-(void)setViewControllerAcquisitionTask:(id)arg1 ;
-(void)_reacquireViewControllerIfNeeded;
-(void)_acquireStarkChrome:(id)arg1 ;
-(void)_removeStarkChrome;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setViewportFrame:(CGRect)arg1 ;
@end
