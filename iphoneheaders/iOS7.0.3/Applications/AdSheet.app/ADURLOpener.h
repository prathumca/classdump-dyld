/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ADRemoteUIServicesCancelable;
@class ;

@interface ADURLOpener : NSObject {

	id _requester;
	<ADRemoteUIServicesCancelable>* _token;

}

@property (nonatomic,retain) <ADRemoteUIServicesCancelable> * token;              //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) id requester; 
+(id)sharedInstance;
-(void)cancelOpenPermissionRequestForRequester:(id)arg1 ;
-(void)requestPermissionToOpenURL:(id)arg1 forAd:(id)arg2 fromClient:(id)arg3 requester:(id)arg4 completion:(/*^block*/ id)arg5 ;
-(id)requester;
-(void)setRequester:(id)arg1 ;
-(id)token;
-(void)setToken:(id)arg1 ;
@end
