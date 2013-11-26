/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol TabOverflowListControllerDelegate;
@class NSArray, TabDocument, ;

@interface TabOverflowListController : UITableViewController {

	NSArray* _tabDocuments;
	TabDocument* _selectedDocument;
	<TabOverflowListControllerDelegate>* _delegate;

}
-(id)initWithTabDocuments:(id)arg1 selectedDocument:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)loadView;
@end
