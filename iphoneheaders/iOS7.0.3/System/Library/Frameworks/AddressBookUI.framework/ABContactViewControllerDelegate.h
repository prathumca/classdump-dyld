/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ABContactViewControllerDelegate <NSObject>
@optional
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
-(void)contactViewController:(id)arg1 didChangeToEditMode:(BOOL)arg2;
-(id)contactViewController:(id)arg1 highlightColorForPropertyItem:(id)arg2 contact:(id)arg3;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
@end
