/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center~iphone/GKDaemonProxyNetworkActivityIndicatorDelegate.h>

@interface GKNetworkActivityIndicatorDelegate : NSObject <GKDaemonProxyNetworkActivityIndicatorDelegate> {

	int _networkIndicatorCount;

}

@property (assign,nonatomic) int networkIndicatorCount;              //@synthesize networkIndicatorCount=_networkIndicatorCount - In the implementation block
-(int)networkIndicatorCount;
-(void)setNetworkIndicatorCount:(int)arg1 ;
-(void)beginNetworkActivity;
-(void)endNetworkActivity;
-(void)resetNetworkActivity;
@end
