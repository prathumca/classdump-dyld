/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface GAXWorkspaceTransitionContext : NSObject {

	int _type;
	/*^block*/ id _completion;

}

@property (assign,nonatomic) int type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(/*^block*/ id)completion;
-(void)setCompletion:(/*^block*/ id)arg1 ;
@end
