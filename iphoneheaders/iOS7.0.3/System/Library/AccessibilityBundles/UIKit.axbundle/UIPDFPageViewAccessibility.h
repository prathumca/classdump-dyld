/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:03:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPDFPageViewAccessibility_super.h>

@interface UIPDFPageViewAccessibility : UIPDFPageViewAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(CGPDFPageRef)_axPageRef;
-(id)_axLineSelections;
-(CGPDFSelectionRef)_lineSelectionForSelection:(CGPDFSelectionRef)arg1 ;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(int)accessibilityLineNumberForPoint:(CGPoint)arg1 ;
-(CGRect)accessibilityFrameForLineNumber:(int)arg1 ;
-(id)accessibilityContentForLineNumber:(int)arg1 ;
-(id)accessibilityPageContent;
@end
