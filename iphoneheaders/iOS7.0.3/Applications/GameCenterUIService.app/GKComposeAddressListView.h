/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <UIKit/UIView.h>

@protocol GKComposeRecipientAtomDelegate;
@class NSMutableDictionary, NSOrderedSet, UITextField, , GKComposeRecipientAtom, GKComposeRecipient;

@interface GKComposeAddressListView : UIView {

	NSMutableDictionary* _atoms;
	NSOrderedSet* _recipients;
	UITextField* _textEntryField;
	float _firstLineIndent;
	float _preferredMaxLayoutWidth;
	<GKComposeRecipientAtomDelegate>* _delegate;
	GKComposeRecipientAtom* _selectedAtom;
	CGRect _textEntryRect;

}

@property (nonatomic,retain) NSMutableDictionary * atoms;                              //@synthesize atoms=_atoms - In the implementation block
@property (nonatomic,retain) NSOrderedSet * recipients;                                //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) UITextField * textEntryField;                             //@synthesize textEntryField=_textEntryField - In the implementation block
@property (nonatomic,readonly) CGRect textEntryRect;                                   //@synthesize textEntryRect=_textEntryRect - In the implementation block
@property (assign,nonatomic) float firstLineIndent;                                    //@synthesize firstLineIndent=_firstLineIndent - In the implementation block
@property (assign,nonatomic) float preferredMaxLayoutWidth;                            //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (nonatomic,retain) GKComposeRecipient * selectedRecipient; 
@property (assign,nonatomic) <GKComposeRecipientAtomDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKComposeRecipientAtom * selectedAtom;                    //@synthesize selectedAtom=_selectedAtom - In the implementation block
-(void)setSelectedRecipient:(id)arg1 ;
-(id)selectedRecipient;
-(id)selectedAtom;
-(void)setSelectedAtom:(id)arg1 ;
-(void)setRecipients:(id)arg1 animated:(BOOL)arg2 ;
-(CGRect)flowAtomsForRect:(CGRect)arg1 updateViewFrames:(BOOL)arg2 ;
-(void)layoutSubviewsAnimated:(BOOL)arg1 ;
-(void)selectRecipientBefore:(id)arg1 ;
-(void)selectRecipientAfter:(id)arg1 ;
-(id)atoms;
-(void)setAtoms:(id)arg1 ;
-(CGRect)textEntryRect;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(CGSize)intrinsicContentSize;
-(id)viewForBaselineLayout;
-(void)setPreferredMaxLayoutWidth:(float)arg1 ;
-(float)preferredMaxLayoutWidth;
-(void)setTextEntryField:(id)arg1 ;
-(id)textEntryField;
-(void)selectComposeRecipientAtom:(id)arg1 ;
-(void)addRecipients:(id)arg1 ;
-(void)removeRecipients:(id)arg1 ;
-(id)recipients;
-(float)firstLineIndent;
-(void)setFirstLineIndent:(float)arg1 ;
-(void)setRecipients:(id)arg1 ;
@end
