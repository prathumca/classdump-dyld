/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITabBarController.h>

@protocol UINavigationControllerDelegate;
@class NSArray, , UINavigationController, MusicRadioViewController;

@interface MusicTabBarController : UITabBarController {

	BOOL _isVisible;
	BOOL _needsReloadWhenBecomingVisible;
	BOOL _supportsTransiency;
	BOOL _displayEmptyTabs;
	NSArray* _customizableViewControllerIdentifiers;
	<UINavigationControllerDelegate>* _navigationControllerDelegate;
	NSArray* _orderedViewControllerIdentifiers;
	UINavigationController* _radioNavigationController;
	MusicRadioViewController* _radioViewController;

}

@property (nonatomic,copy) NSArray * customizableViewControllerIdentifiers;                                       //@synthesize customizableViewControllerIdentifiers=_customizableViewControllerIdentifiers - In the implementation block
@property (assign,nonatomic,__weak) <MusicTabBarControllerDelegate> * delegate; 
@property (assign,nonatomic,__weak) <UINavigationControllerDelegate> * navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,copy) NSArray * orderedViewControllerIdentifiers;                                            //@synthesize orderedViewControllerIdentifiers=_orderedViewControllerIdentifiers - In the implementation block
@property (nonatomic,readonly) UINavigationController * radioNavigationController;                                //@synthesize radioNavigationController=_radioNavigationController - In the implementation block
@property (nonatomic,readonly) MusicRadioViewController * radioViewController;                                    //@synthesize radioViewController=_radioViewController - In the implementation block
@property (assign,nonatomic) BOOL supportsTransiency;                                                             //@synthesize supportsTransiency=_supportsTransiency - In the implementation block
@property (assign,nonatomic) BOOL displayEmptyTabs;                                                               //@synthesize displayEmptyTabs=_displayEmptyTabs - In the implementation block
+(Class)_moreNavigationControllerClass;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)moreNavigationController;
-(void)_setSelectedViewController:(id)arg1 ;
-(void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3 ;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void)switchToShortcutIdentifier:(id)arg1 ;
-(void)_reloadTabsAnimated:(BOOL)arg1 ;
-(void)_isRadioEnabledDidChangeNotification:(id)arg1 ;
-(id)_mergedOrderedViewControllerIdentifiersWithViewControllers:(id)arg1 ;
-(void)_setOrderedViewControllerIdentifiers:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)setOrderedViewControllerIdentifiers:(id)arg1 animated:(BOOL)arg2 ;
-(id)_navigationControllerIdentifierForViewControllerIdentifier:(id)arg1 ;
-(id)_navigationControllerForNavigationIdentifier:(id)arg1 ;
-(id)_orderedViewControllerIdentifiersForViewControllers:(id)arg1 ;
-(id)_viewControllerIdentifierForNavigationControllerIdentifier:(id)arg1 ;
-(BOOL)displayEmptyTabs;
-(void)setCustomizableViewControllerIdentifiers:(id)arg1 ;
-(void)setNavigationControllerDelegate:(id)arg1 ;
-(void)setOrderedViewControllerIdentifiers:(id)arg1 ;
-(void)setSupportsTransiency:(BOOL)arg1 ;
-(void)switchToPlaylistWithPID:(id)arg1 ;
-(id)_tabBarCustomizableViewControllerIdentifiers;
-(id)customizableViewControllerIdentifiers;
-(id)navigationControllerDelegate;
-(id)orderedViewControllerIdentifiers;
-(id)radioNavigationController;
-(id)radioViewController;
-(BOOL)supportsTransiency;
-(void)setDisplayEmptyTabs:(BOOL)arg1 ;
-(void).cxx_destruct;
@end
