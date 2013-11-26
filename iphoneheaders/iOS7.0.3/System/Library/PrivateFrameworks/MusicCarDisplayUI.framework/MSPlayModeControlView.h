/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface MSPlayModeControlView : UIView {

	UIButton* _repeatButton;
	UIButton* _shuffleButton;
	BOOL _creatingGenius;

}

@property (nonatomic,readonly) UIButton * repeatButton;               //@synthesize repeatButton=_repeatButton - In the implementation block
@property (nonatomic,readonly) UIButton * shuffleButton;              //@synthesize shuffleButton=_shuffleButton - In the implementation block
@property (assign,nonatomic) BOOL creatingGenius;                     //@synthesize creatingGenius=_creatingGenius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)repeatButton;
-(id)shuffleButton;
-(BOOL)creatingGenius;
-(void)setCreatingGenius:(BOOL)arg1 ;
-(void).cxx_destruct;
@end
