/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class NSArray, UILabel, NSString;

@interface _ACUITextWithLinkButtonFooterView : UIView <PSHeaderFooterView> {

	NSArray* _linkButtons;
	UILabel* _textLabel;
	NSString* _footerText;

}
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)layoutSubviews;
-(float)_heightForFooterTextConstrainedToWidth:(float)arg1 ;
-(float)_heightForEmptyLineConstrainedToWidth:(float)arg1 ;
-(float)_heightForLinkButton:(id)arg1 constrainedToWidth:(float)arg2 ;
-(void).cxx_destruct;
@end
