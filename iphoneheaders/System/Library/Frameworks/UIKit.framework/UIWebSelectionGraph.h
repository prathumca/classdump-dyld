/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface UIWebSelectionGraph : NSObject {

	NSMutableArray* _selectionNodes;

}
-(void)dealloc;
-(id)init;
-(void)clearNodes;
-(id)addNodeFromSelection:(id)arg1 ;
-(void)exploreFromNode:(id)arg1 outwards:(BOOL)arg2 maxDepth:(int)arg3 ;
-(void)exploreFromNode:(id)arg1 ;
@end
