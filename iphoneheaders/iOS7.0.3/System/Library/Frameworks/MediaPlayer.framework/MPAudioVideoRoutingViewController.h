/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@protocol MPAudioVideoRoutingViewControllerDelegate;
@class UINavigationController, MPAudioVideoRoutingTableViewController, ;

@interface MPAudioVideoRoutingViewController : UIViewController {

	UINavigationController* _navigationController;
	MPAudioVideoRoutingTableViewController* _tableViewController;
	<MPAudioVideoRoutingViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <MPAudioVideoRoutingViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)hasWirelessDisplayRoutes;
-(void)_doneAction:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)viewDidLoad;
-(void).cxx_destruct;
@end
