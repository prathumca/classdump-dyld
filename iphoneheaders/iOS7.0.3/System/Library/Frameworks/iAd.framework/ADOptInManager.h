/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSXPCConnection, NSMutableArray;

@interface ADOptInManager : NSObject {

	NSXPCConnection* _adSheetConnection;
	NSMutableArray* _enqueuedHandlers;

}

@property (nonatomic,retain) NSXPCConnection * adSheetConnection;              //@synthesize adSheetConnection=_adSheetConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * enqueuedHandlers;                //@synthesize enqueuedHandlers=_enqueuedHandlers - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)_considerConnectingToAdSheet;
-(id)adSheetConnection;
-(void)setAdSheetConnection:(id)arg1 ;
-(void)setOptInStatus:(BOOL)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_whenConnectionAvailable:(/*^block*/ id)arg1 ;
-(void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)handleAccountChange;
-(id)enqueuedHandlers;
-(void)_launchAdSheet;
-(void)refreshOptInStatus;
-(void)getiAdIDsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setEnqueuedHandlers:(id)arg1 ;
@end
