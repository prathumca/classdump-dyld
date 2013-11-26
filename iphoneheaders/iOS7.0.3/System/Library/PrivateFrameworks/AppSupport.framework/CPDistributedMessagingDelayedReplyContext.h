/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CPDistributedMessagingDelayedReplyContext : NSObject {

	unsigned _replyPort;
	BOOL _portPassing;

}

@property (assign,nonatomic) unsigned replyPort;              //@synthesize replyPort=_replyPort - In the implementation block
@property (assign,nonatomic) BOOL portPassing;                //@synthesize portPassing=_portPassing - In the implementation block
-(void)dealloc;
-(id)initWithReplyPort:(unsigned)arg1 portPassing:(BOOL)arg2 ;
-(unsigned)replyPort;
-(void)setReplyPort:(unsigned)arg1 ;
-(BOOL)portPassing;
-(void)setPortPassing:(BOOL)arg1 ;
@end
