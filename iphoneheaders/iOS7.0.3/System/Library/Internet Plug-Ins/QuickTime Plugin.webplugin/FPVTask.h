/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Internet Plug-Ins/QuickTime Plugin.webplugin/QuickTime Plugin
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface FPVTask : NSObject {

	id _delegate;
	BOOL _complete;
	BOOL _running;

}

@property (assign) id delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (readonly) BOOL running;               //@synthesize running=_running - In the implementation block
-(BOOL)running;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)cancel;
-(void)start;
-(BOOL)complete;
-(void)_completed;
@end
