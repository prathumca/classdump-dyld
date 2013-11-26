/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/FaceTime.app/FaceTime
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIButton.h>

@class PHInCallRingView;

@interface SixSquareButton : UIButton {

	UIEdgeInsets _contentInsets;
	PHInCallRingView* _ringView;

}

@property (retain) PHInCallRingView * ringView;              //@synthesize ringView=_ringView - In the implementation block
-(id)ringView;
-(void)setupButton;
-(void)setRingView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
@end
