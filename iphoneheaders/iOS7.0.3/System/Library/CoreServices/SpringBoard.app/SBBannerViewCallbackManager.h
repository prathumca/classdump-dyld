/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBUIBannerView, SBUIBannerSource;
@class UIView, ;

@interface SBBannerViewCallbackManager : NSObject {

	UIView<SBUIBannerView>* _view;
	<SBUIBannerSource>* _source;
	BOOL _sentWillAppear;
	BOOL _sentDidAppear;
	BOOL _sentWillDismiss;
	BOOL _sentDidDismiss;
	int _dismissReason;

}
-(id)initWithBannerView:(id)arg1 ;
-(BOOL)hasSentAnyCallbacks;
-(void)noteDidDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(void)matchPreviousCallbacks:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
