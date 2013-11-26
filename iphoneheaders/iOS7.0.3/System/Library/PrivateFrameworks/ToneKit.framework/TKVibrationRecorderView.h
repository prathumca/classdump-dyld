/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>
#import <ToneKit/TKVibrationRecorderTouchSurfaceDelegate.h>

@protocol TKVibrationRecorderViewDelegate, TKVibrationRecorderStyleProvider;
@class , UILabel, UIToolbar, TKVibrationRecorderProgressView, TKVibrationRecorderTouchSurface, NSLayoutConstraint;

@interface TKVibrationRecorderView : UIView <TKVibrationRecorderTouchSurfaceDelegate> {

	BOOL _replayModeEnabled;
	BOOL _waitingForEndOfCurrentVibrationComponent;
	BOOL _animatingProgress;
	<TKVibrationRecorderViewDelegate>* _delegate;
	<TKVibrationRecorderStyleProvider>* _styleProvider;
	UILabel* _instructionsLabel;
	UIToolbar* _controlsToolbar;
	TKVibrationRecorderProgressView* _progressView;
	TKVibrationRecorderTouchSurface* _touchSurface;
	NSLayoutConstraint* _controlsToolbarTopConstraint;
	NSLayoutConstraint* _progressToolbarBottomConstraint;
	NSLayoutConstraint* _touchSurfaceTopConstraint;
	int _leftButtonIdentifier;
	int _rightButtonIdentifier;
	double _vibrationPatternMaximumDuration;
	double _currentVibrationProgressDidStartTimestamp;
	double _currentVibrationComponentDidStartTimestamp;

}

@property (assign,nonatomic) <TKVibrationRecorderViewDelegate> * delegate;                                                                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setStyleProvider:,nonatomic,retain) <TKVibrationRecorderStyleProvider> * _styleProvider;                                                                                       //@synthesize styleProvider=_styleProvider - In the implementation block
@property (setter=_setInstructionsLabel:,nonatomic,retain) UILabel * _instructionsLabel;                                                                                                          //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (setter=_setControlsToolbar:,nonatomic,retain) UIToolbar * _controlsToolbar;                                                                                                            //@synthesize controlsToolbar=_controlsToolbar - In the implementation block
@property (setter=_setProgressView:,nonatomic,retain) TKVibrationRecorderProgressView * _progressView;                                                                                            //@synthesize progressView=_progressView - In the implementation block
@property (setter=_setTouchSurface:,nonatomic,retain) TKVibrationRecorderTouchSurface * _touchSurface;                                                                                            //@synthesize touchSurface=_touchSurface - In the implementation block
@property (setter=_setControlsToolbarTopConstraint:,nonatomic,retain) NSLayoutConstraint * _controlsToolbarTopConstraint;                                                                         //@synthesize controlsToolbarTopConstraint=_controlsToolbarTopConstraint - In the implementation block
@property (setter=_setProgressToolbarBottomConstraint:,nonatomic,retain) NSLayoutConstraint * _progressToolbarBottomConstraint;                                                                   //@synthesize progressToolbarBottomConstraint=_progressToolbarBottomConstraint - In the implementation block
@property (setter=_setTouchSurfaceTopConstraint:,nonatomic,retain) NSLayoutConstraint * _touchSurfaceTopConstraint;                                                                               //@synthesize touchSurfaceTopConstraint=_touchSurfaceTopConstraint - In the implementation block
@property (assign,setter=_setReplayModeEnabled:,getter=_isReplayModeEnabled,nonatomic) BOOL _replayModeEnabled;                                                                                   //@synthesize replayModeEnabled=_replayModeEnabled - In the implementation block
@property (assign,setter=_setLeftButtonIdentifier:,nonatomic) int _leftButtonIdentifier;                                                                                                          //@synthesize leftButtonIdentifier=_leftButtonIdentifier - In the implementation block
@property (assign,setter=_setRightButtonIdentifier:,nonatomic) int _rightButtonIdentifier;                                                                                                        //@synthesize rightButtonIdentifier=_rightButtonIdentifier - In the implementation block
@property (assign,setter=_setVibrationPatternMaximumDuration:,nonatomic) double _vibrationPatternMaximumDuration;                                                                                 //@synthesize vibrationPatternMaximumDuration=_vibrationPatternMaximumDuration - In the implementation block
@property (assign,setter=_setCurrentVibrationProgressDidStartTimestamp:,nonatomic) double _currentVibrationProgressDidStartTimestamp;                                                             //@synthesize currentVibrationProgressDidStartTimestamp=_currentVibrationProgressDidStartTimestamp - In the implementation block
@property (assign,setter=_setCurrentVibrationComponentDidStartTimestamp:,nonatomic) double _currentVibrationComponentDidStartTimestamp;                                                           //@synthesize currentVibrationComponentDidStartTimestamp=_currentVibrationComponentDidStartTimestamp - In the implementation block
@property (assign,setter=_setWaitingForEndOfCurrentVibrationComponent:,getter=_isWaitingForEndOfCurrentVibrationComponent,nonatomic) BOOL _waitingForEndOfCurrentVibrationComponent;              //@synthesize waitingForEndOfCurrentVibrationComponent=_waitingForEndOfCurrentVibrationComponent - In the implementation block
@property (assign,setter=_setAnimatingProgress:,getter=_isAnimatingProgress,nonatomic) BOOL _animatingProgress;                                                                                   //@synthesize animatingProgress=_animatingProgress - In the implementation block
-(void)_updateProgress:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToWindow;
-(id)delegate;
-(id)initWithVibrationPatternMaximumDuration:(double)arg1 ;
-(void)wasAddedToNavigationController:(id)arg1 ;
-(void)navigationController:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3 ;
-(void)_setWaitingForEndOfCurrentVibrationComponent:(BOOL)arg1 ;
-(void)startAnimatingProgress;
-(void)enterReplayModeWithVibrationPattern:(id)arg1 ;
-(void)enterRecordingMode;
-(BOOL)_isWaitingForEndOfCurrentVibrationComponent;
-(double)_currentVibrationProgressDidStartTimestamp;
-(void)_setCurrentVibrationProgressDidStartTimestamp:(double)arg1 ;
-(void)exitRecordingModeWithPlayButtonEnabled:(BOOL)arg1 ;
-(void)exitReplayMode;
-(void)stopAnimatingProgress;
-(void)_setStyleProvider:(id)arg1 ;
-(id)_styleProvider;
-(void)_setVibrationPatternMaximumDuration:(double)arg1 ;
-(void)_setControlsToolbarTopConstraint:(id)arg1 ;
-(void)_setControlsToolbar:(id)arg1 ;
-(void)_setProgressToolbarBottomConstraint:(id)arg1 ;
-(void)_setProgressView:(id)arg1 ;
-(void)_setTouchSurfaceTopConstraint:(id)arg1 ;
-(void)_setTouchSurface:(id)arg1 ;
-(void)_setInstructionsLabel:(id)arg1 ;
-(void)_enterWaitingModeWithAnimation:(BOOL)arg1 enablePlayButton:(BOOL)arg2 ;
-(id)_touchSurface;
-(void)_setLeftButtonIdentifier:(int)arg1 ;
-(void)_setRightButtonIdentifier:(int)arg1 ;
-(id)_titleForControlsToolbarButtonWithIdentifier:(int)arg1 ;
-(void)_handleLeftButtonTapped:(id)arg1 ;
-(void)_handleRightButtonTapped:(id)arg1 ;
-(id)_controlsToolbar;
-(int)_leftButtonIdentifier;
-(int)_rightButtonIdentifier;
-(void)_setLeftButtonIdentifier:(int)arg1 enabled:(BOOL)arg2 rightButtonIdentifier:(int)arg3 enabled:(BOOL)arg4 animated:(BOOL)arg5 ;
-(id)_instructionsLabel;
-(void)_exitWaitingModeWithAnimation:(BOOL)arg1 ;
-(id)_progressView;
-(BOOL)_isReplayModeEnabled;
-(void)_setReplayModeEnabled:(BOOL)arg1 ;
-(void)_setAnimatingProgress:(BOOL)arg1 ;
-(BOOL)_isAnimatingProgress;
-(double)_vibrationPatternMaximumDuration;
-(double)_currentVibrationComponentDidStartTimestamp;
-(id)_controlsToolbarTopConstraint;
-(id)_progressToolbarBottomConstraint;
-(id)_touchSurfaceTopConstraint;
-(void)_setCurrentVibrationComponentDidStartTimestamp:(double)arg1 ;
-(BOOL)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg1 ;
-(void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg1 ;
-(void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg1 ;
-(void)vibrationRecorderTouchSurface:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2 ;
-(void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg1 ;
@end
