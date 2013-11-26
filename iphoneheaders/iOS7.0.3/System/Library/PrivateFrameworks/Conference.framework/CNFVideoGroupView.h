/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Conference/Conference-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class CADisplayLink;

@interface CNFVideoGroupView : UIControl <UIGestureRecognizerDelegate> {

	CADisplayLink* _displayLink;
	CGPoint _velocity;
	CGPoint _target;
	CGRect _cornerLocationsRect;
	BOOL _startedThrowAnimation;
	int _corner;

}

@property (assign,nonatomic) CGRect cornerLocationsRect;              //@synthesize cornerLocationsRect=_cornerLocationsRect - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)addPanningGestureRecognizer;
-(void)setCornerLocationsRect:(CGRect)arg1 ;
-(CGPoint)centerPointForCurrentVideoGroupCorner;
-(void)refreshPositionInCorner;
-(void)cancelThrowAnimation;
-(CGRect)cornerLocationsRect;
-(void)handlePanDetected:(id)arg1 ;
-(void)setCorner:(int)arg1 ;
-(void)startThrowAnimation;
-(void)finishedThrowAnimation;
-(CGPoint)transformedCenter;
-(void)handlePanGestureFinished:(id)arg1 ;
-(void)updateThrowAnimation:(id)arg1 ;
-(void)setTransformForNewCenter:(CGPoint)arg1 ;
-(float)_gridViewRubberBandValueForValue:(float)arg1 target:(float)arg2 timeInterval:(float)arg3 velocity:(float*)arg4 ;
@end
