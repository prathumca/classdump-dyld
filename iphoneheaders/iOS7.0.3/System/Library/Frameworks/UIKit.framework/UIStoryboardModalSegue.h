/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIStoryboardSegue.h>

@interface UIStoryboardModalSegue : UIStoryboardSegue {

	BOOL _useDefaultModalPresentationStyle;
	BOOL _useDefaultModalTransitionStyle;
	BOOL _animates;
	int _modalPresentationStyle;
	int _modalTransitionStyle;

}

@property (assign,nonatomic) BOOL useDefaultModalPresentationStyle;              //@synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL useDefaultModalTransitionStyle;                //@synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle - In the implementation block
@property (assign,nonatomic) int modalPresentationStyle;                         //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) int modalTransitionStyle;                           //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
@property (assign,nonatomic) BOOL animates;                                      //@synthesize animates=_animates - In the implementation block
-(int)modalPresentationStyle;
-(void)setModalPresentationStyle:(int)arg1 ;
-(int)modalTransitionStyle;
-(void)setModalTransitionStyle:(int)arg1 ;
-(void)perform;
-(BOOL)useDefaultModalPresentationStyle;
-(BOOL)useDefaultModalTransitionStyle;
-(BOOL)animates;
-(void)setUseDefaultModalPresentationStyle:(BOOL)arg1 ;
-(void)setUseDefaultModalTransitionStyle:(BOOL)arg1 ;
-(void)setAnimates:(BOOL)arg1 ;
@end
